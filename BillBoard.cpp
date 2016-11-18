#include "BillBoard.h"

CBillBoard::CBillBoard(void)
{
	m_Texture	= NULL;
}

CBillBoard::~CBillBoard(void)
{
	SAFE_RELEASE(m_Texture);
	int d=3;
	d++;
	if(a == 0)
	{
		printf("");
	}
}

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
// ☆━─ 09-07-14, Render inwoo. ─━☆
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
void CBillBoard::Render(D3DXMATRIXA16*	pmatView)
{
	D3DXMATRIXA16	matWorld;

	matWorld = *pmatView;
	matWorld._41 = 0;
	matWorld._42 = 0;
	matWorld._43 = 0;
	matWorld._44 = 1;

	D3DXMatrixInverse(&matWorld, NULL, &matWorld);
	m_pd3dDevice->SetTransform(D3DTS_WORLD, &matWorld);

	//재질설정
	D3DMATERIAL9	mtrl;
	memset(&mtrl, 0, sizeof(mtrl));

	mtrl.Diffuse.r = mtrl.Ambient.r = 1.0f;
	mtrl.Diffuse.g = mtrl.Ambient.g = 1.0f;
	mtrl.Diffuse.b = mtrl.Ambient.b = 1.0f;
	mtrl.Diffuse.a = mtrl.Ambient.a = 1.0f;
	m_pd3dDevice->SetMaterial(&mtrl);


	tagBVertex		Vertex[6];

	Vertex[0].vPos	= D3DXVECTOR3(-1, -1,  0);
	Vertex[0].vTex	= D3DXVECTOR2(0.5f, 1);
	Vertex[1].vPos	= D3DXVECTOR3(-1,  1,  0);
	Vertex[1].vTex	= D3DXVECTOR2(0.5f, 0);
	Vertex[2].vPos	= D3DXVECTOR3( 1, -1,  0);
	Vertex[2].vTex	= D3DXVECTOR2(0.5f + 0.033333f, 1);
	Vertex[3].vPos	= D3DXVECTOR3( 1, -1,  0);
	Vertex[3].vTex	= D3DXVECTOR2(0.5f + 0.033333f, 1);
	Vertex[4].vPos	= D3DXVECTOR3(-1,  1,  0);
	Vertex[4].vTex	= D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos	= D3DXVECTOR3( 1,  1,  0);
	Vertex[5].vTex	= D3DXVECTOR2(0.5f + 0.033333f, 0);

	m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
	m_pd3dDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_ONE);
	m_pd3dDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_ONE);

	//텍스쳐 설정
	m_pd3dDevice->SetTexture(0, m_Texture);


	//삼각형을 그린다
	m_pd3dDevice->SetFVF(BILLBOARD_FVF);
	m_pd3dDevice->DrawPrimitiveUP(D3DPT_TRIANGLELIST, 2, Vertex, sizeof(tagBVertex));

	m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);

}

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
// ☆━─ 09-07-14, SetUp inwoo. ─━☆
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
bool CBillBoard::SetUp(LPDIRECT3DDEVICE9 pd3dDevice, char* szFileName)
{
	m_pd3dDevice = pd3dDevice;	

	//텍스쳐
	if(FAILED(D3DXCreateTextureFromFile(m_pd3dDevice,
		szFileName, &m_Texture)))
	{
		MessageBox(g_hWnd, "빌보드 텍스쳐 로딩실패", "실패", MB_OK);
		return false;
	}

	return true;
}
