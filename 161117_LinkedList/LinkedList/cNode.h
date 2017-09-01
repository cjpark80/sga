#pragma once
class cNode
{
public:
	cNode(void);
	cNode(int n, cNode* pNext = NULL);
	~cNode(void);

	int		m_nData;
	cNode*	m_pNext;

	void Insert(int n);
	void Print();
	void Delete(int n, cNode** ppThis);
	void Reverse(cNode* pPrev);
	cNode* GetTail();
};

