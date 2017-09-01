// LinkedList.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "cLinkedList.h"

int _tmain(int argc, _TCHAR* argv[])
{
	cLinkedList l;
	
	FILE* fp = NULL;
	fopen_s(&fp, "data.txt", "r");

	while(!feof(fp))
	{
		char szBuf[64] = {0, };
		fgets(szBuf, 1024, fp);
		if (strlen(szBuf) == 0)
			continue;
		if (szBuf[0] == 'i')
		{
			l.Insert(atoi(&szBuf[2]));
		}
		else if (szBuf[0] == 'd')
		{
			l.Delete(atoi(&szBuf[2]));
		}
		else if (szBuf[0] == 'r')
		{
			l.Reverse();
		}
		else if (szBuf[0] == 'p')
		{
			l.Print();
		}
	}

	return 0;
}

