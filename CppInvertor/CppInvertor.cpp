// CppInvertor.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Invertor.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main()
{
	::SetConsoleOutputCP(1251);
	::SetConsoleCP(1251);
	
	char *s = "��� ���������� ����� ��������� � ������� �� ������, \
				These words will be printed on-per-line";
	Invertor inv;
	inv.InvertStr(s);
	_getch();
	return 0;
}
