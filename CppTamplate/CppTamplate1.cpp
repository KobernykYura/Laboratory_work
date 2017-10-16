// CppTamplate.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "Auto.h"
#include "CarSecond.h"


void CreateSCar() {
	// ������� ������ ����.
	CarSecound myCarS;
	myCarS.CreateACar();
	// ���������� ���������� � ����� ����.
	myCarS.DisplayCarStats();
	// �������� ���������� �� �������.
	while (myCarS.GetCurrSpeed() <= myCarS.GetMaxSpeed()) {
		myCarS.ChangeSpeed();
		myCarS.AskToStopCar();
	}
	cout << myCarS.GetPetName() << " ���������� �� ����������!" << endl;
	_getch();
}
void CreateCar() {
	// ������� ����.
	CCar myCar;
	myCar.CreateACar();
	// ���������� ���������� � ����� ����.
	myCar.DisplayCarStats();
	// �������� ���������� �� �������.
	while (myCar.GetCurrSpeed() <= myCar.GetMaxSpeed()) {
		myCar.ChangeSpeed();
		myCar.AskToStopCar();
	}
	cout << myCar.GetPetName() << " ���������� �� ����������!" << endl;
	_getch();
}
void SelectCar() {
	bool result = true;
	do
	{
		cout << "������ ������ ������ ��� �������?(Car = 'F'/CarSecond = 'S')" << endl;
		/*cout << "Which type of car do you want to create?(Car = 'F'/CarSecond = 'S')" << endl;*/
		switch (_getch())
		{
		case'f':
			result = false; CreateCar(); break;
		case's':
			result = false; CreateSCar(); break;
		default:
			/*cout << "������������ ����!" << endl; */cout << "Incorrect input!" << endl; break;
		}
	} while (result);
}
void main(void) {
	//setlocale(LC_ALL, "Rus"); /* ����������� ������ ���� ������ */
	::SetConsoleOutputCP(1251);
	::SetConsoleCP(1251);	
	SelectCar();
}