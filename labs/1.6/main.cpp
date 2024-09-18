#include <iostream>

int main()
{
	{
        const char CONST1 = '%'; //%
        char chVar1;
        chVar1 = 'k'; // 107 - k
        char chVar2 = '8'; //56 - 8
        const char CONST2 = 0x12; // non-printable character
        char chVar3;
        chVar3 = 0x70; // p
        char chVar4 = 0x5a; // Z

	}
	{    //Опису змінних типів double, int, char.
		int nA;

		float fltB;

		unsigned short wC;

		nA = 23678;

		fltB = 1.23e4;

		wC = 11974;

		//Ініціювання змінних
		double dblD;

		int nE;

		char chF;
		
		//за допомогою неявного приведення типів

		dblD = nA;

		nE = fltB;

		chF = wC;

		//за допомогою явного приведення

		dblD = (double)nA;

		nE = (int)fltB;

		chF = (char)wC;

		//з обходом суворої типізації

		double* pdblD;

		void* pV;

		pV = &nA;

		pdblD = (double*)pV;

		dblD = *pdblD;

		int* pnE;

		pV = &fltB;

		pnE = (int*)pV;

		nE = *pnE;

		char* pchF;

		pV = &wC;

		pchF = (char*)pV;

		chF = *pchF;
	}
}