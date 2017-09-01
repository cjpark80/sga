#include "BillBoard.h"
//Á¹¶ó Â¯½ë Åõ¸í µå·¡°ïÀÌ Æ÷¿ä Çß´Ù Å©¿Í¾Æ¾Æ¾Æ¾Æ¾Æ¾Æ
//±×·¯ÀÚ Èæ¹ßÀÇ Àû¾ÈÀÎ ±×°¡ ¸»Çß´Ù.
//¿À¸¥¼ÕÀÇ Èæ¿°·æÀÌ ³¯¶Ù·Á ÇÏ´Â ±º ÈåÈåÈåÈåÈåÈå
//Á¹¶ó Â¯½ë Åõ¸í µå·¡°ïÀÌ Æ÷¿ä Çß´Ù Å©¿Í¾Æ¾Æ¾Æ¾Æ¾Æ¾Æ
//±×·¯ÀÚ Èæ¹ßÀÇ Àû¾ÈÀÎ ±×°¡ ¸»Çß´Ù.
//¿À¸¥¼ÕÀÇ Èæ¿°·æÀÌ ³¯¶Ù·Á ÇÏ´Â ±º ÈåÈåÈåÈåÈåÈå
//Á¹¶ó Â¯½ë Åõ¸í µå·¡°ïÀÌ Æ÷¿ä Çß´Ù Å©¿Í¾Æ¾Æ¾Æ¾Æ¾Æ¾Æ
//±×·¯ÀÚ Èæ¹ßÀÇ Àû¾ÈÀÎ ±×°¡ ¸»Çß´Ù.
//¿À¸¥¼ÕÀÇ Èæ¿°·æÀÌ ³¯¶Ù·Á ÇÏ´Â ±º ÈåÈåÈåÈåÈåÈå
//Á¹¶ó Â¯½ë Åõ¸í µå·¡°ïÀÌ Æ÷¿ä Çß´Ù Å©¿Í¾Æ¾Æ¾Æ¾Æ¾Æ¾Æ
//±×·¯ÀÚ Èæ¹ßÀÇ Àû¾ÈÀÎ ±×°¡ ¸»Çß´Ù.
//¿À¸¥¼ÕÀÇ Èæ¿°·æÀÌ ³¯¶Ù·Á ÇÏ´Â ±º ÈåÈåÈåÈåÈåÈå
//Á¹¶ó Â¯½ë Åõ¸í µå·¡°ïÀÌ Æ÷¿ä Çß´Ù Å©¿Í¾Æ¾Æ¾Æ¾Æ¾Æ¾Æ
//±×·¯ÀÚ Èæ¹ßÀÇ Àû¾ÈÀÎ ±×°¡ ¸»Çß´Ù.
//¿À¸¥¼ÕÀÇ Èæ¿°·æÀÌ ³¯¶Ù·Á ÇÏ´Â ±º ÈåÈåÈåÈåÈåÈå
//¿ÞÆÈµµ ³¯¶Ú´Ù ÈåÈåÈåÈå
CBillBoard::CBillBoard(void)
{
	m_Texture	= NULL;
}

CBillBoard::~CBillBoard(void)
{
	SAFE_RELEASE(m_Texture);
	int d=3;

SAFE_RELEASE(m_Texture);
	int d=3;

SAFE_RELEASE(m_Texture);
	int d=3;


	d++;
	if(a == 0)
	{if(a == 0)
	{
		printf("");
	}

		printf("");
	}
}

//¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬
// ¡Ù¦¬¦¡ 09-07-14, Render inwoo. ¦¡¦¬¡Ù
//¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬
void CBillBoard::Render(D3DXMATRIXA16*	pmatView)
{
	D3DXMATRIXA16	matWorld;
if(a == 0)
	{matWorld = *pmatView;
	matWorld._41 = 0;
	matWorld._42 = 0;
	matWorld._43 = 0;
	matWorld._44 = 1;


		printf("");
	}

	matWorld = *pmatView;
	matWorld._41 = 0;
	matWorld._42 = 0;
	matWorld._43 = 0;
	matWorld._44 = 1;

matWorld = *pmatView;
	matWorld._41 = 0;
	matWorld._42 = 0;
	matWorld._43 = 0;
	matWorld._44 = 1;
matWorld = *pmatView;
	matWorld._41 = 0;
	matWorld._42 = 0;
	matWorld._43 = 0;
	matWorld._44 = 1;

	D3DXMatrixInverse(&matWorld, NULL, &matWorld);
	m_pd3dDevice->SetTransform(D3DTS_WORLD, &matWorld);

	//ÀçÁú¼³Á¤
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

<<<<<<< HEAD
matWorld = *pmatView;
	matWorld._41 = 0;
	matWorld._42 = 0;
	matWorld._43 = 0;
	matWorld._44 = 1;



	m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
=======
	m_pd3dDevic1);
	Vertex[4].vPos	= D3DXVECTOR3(-1,  1,  0);
	Vertex[4].vTex	= D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos	= D3DXVECTOR3( 1,  1,  0);
	Vertex[5].ve->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
>>>>>>> 93417961d0f672d69d3bd3d784b1e28ff9152923
	m_pd3dDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_ONE);
	m_pd3dDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_ONE);

	//ÅØ½ºÃÄ ¼³Á¤
	m_pd3dDevice->SetTexture(0, m_Texture);


	//»ï°¢ÇüÀ» ±×¸°´Ù
	m_pd3dDevice->SetFVF(BILLBOARD_FVF);
	m_pd3dDevice->DrawPrimitiveUP(D3DPT_TRIANGLELIS1);
	Vertex[4].vPos	= D3DXVECTOR3(-1,  1,  0);
	Vertex[4].vTex	= D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos	= D3DXVECTOR3( 1,  1,  0);
	Vertex[5].vT, 2, Vertex, sizeof(tagBVertex));

	m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);

}

//¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬
// ¡Ù¦¬¦¡ 09-07-14, SetUp inwoo. ¦¡¦¬¡Ù
//¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬
bool CBillBoard::SetUp(LPDIRECT3DDEVICE9 pd3dDevice, char* szFileName)
{1);
	Vertex[4].vPos	= D3DXVECTOR3(-1,  1,  0);
	Vertex[4].vTex	= D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos	= D3DXVECTOR3( 1,  1,  0);
	Vertex[5].v
	m_pd3dDevice = pd3dDevice;	

	//ÅØ½ºÃÄ
	if(FAILED(D3DXCreateTextureFromFile(m_pd3dDevice,
		szFileName, &m_Texture)))
	{
		Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
		Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
		Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
		Vertex[5].v
			m_pd3dDevice = pd3dDevice;
		Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
		Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
		Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
		Vertex[5].v
			m_pd3dDevice = pd3dDevice;
//»ï°¢ÇüÀ» ±×¸°´Ù
	m_pd3dDevice->SetFVF(BILLBOARD_FVF);
	m_pd3dDevice->DrawPrimitiveUP(D3DPT_TRIANGLELIST, 2, Vertex, sizeof(tagBVertex));


		MessageBox(g_hWnd, "ºôº¸µå ÅØ½ºÃÄ ·Îµù½ÇÆÐ", "½ÇÆÐ", MB_OK);
		return false;
	}
	Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
	Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
	Vertex[5].v
		m_pd3dDevice = pd3dDevice;
	return true;
}
bool CBillBoard::SetUp(LPDIRECT3DDEVICE9 pd3dDevice, char* szFileName)
{
	1);
	Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
	Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
	Vertex[5].v
		m_pd3dDevice = pd3dDevice;

	//ÅØ½ºÃÄ
	if (FAILED(D3DXCreateTextureFromFile(m_pd3dDevice,
		szFileName, &m_Texture)))
	{
		Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
		Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
		Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
		Vertex[5].v
			m_pd3dDevice = pd3dDevice;
		Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
		Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
		Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
		Vertex[5].v
			m_pd3dDevice = pd3dDevice;
		//»ï°¢ÇüÀ» ±×¸°´Ù
		m_pd3dDevice->SetFVF(BILLBOARD_FVF);
		m_pd3dDevice->DrawPrimitiveUP(D3DPT_TRIANGLELIST, 2, Vertex, sizeof(tagBVertex));


		MessageBox(g_hWnd, "ºôº¸µå ÅØ½ºÃÄ ·Îµù½ÇÆÐ", "½ÇÆÐ", MB_OK);
		return false;
	}
	Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
	Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
	Vertex[5].v
		m_pd3dDevice = pd3dDevice;
	return true;
}
bool CBillBoard::Setdown(LPDIRECT3DDEVICE9 pd3dDevice, char* szFileName)
{
	1);
	Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
	Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
	Vertex[5].v
		m_pd3dDevice = pd3dDevice;

	//ÅØ½ºÃÄ
	if (FAILED(D3DXCreateTextureFromFile(m_pd3dDevice,
		szFileName, &m_Texture)))
	{
		Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
		Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
		Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
		Vertex[5].v
			m_pd3dDevice = pd3dDevice;
		Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
		Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
		Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
		Vertex[5].v
			m_pd3dDevice = pd3dDevice;
		//»ï°¢ÇüÀ» ±×¸°´Ù
		m_pd3dDevice->SetFVF(BILLBOARD_FVF);
		m_pd3dDevice->DrawPrimitiveUP(D3DPT_TRIANGLELIST, 2, Vertex, sizeof(tagBVertex));


		MessageBox(g_hWnd, "ºôº¸µå ÅØ½ºÃÄ ·Îµù½ÇÆÐ", "½ÇÆÐ", MB_OK);
		return false;
	}
	Vertex[4].vPos = D3DXVECTOR3(-1, 1, 0);
	Vertex[4].vTex = D3DXVECTOR2(0.5f, 0);
	Vertex[5].vPos = D3DXVECTOR3(1, 1, 0);
	Vertex[5].v
		m_pd3dDevice = pd3dDevice;
	return true;
}
