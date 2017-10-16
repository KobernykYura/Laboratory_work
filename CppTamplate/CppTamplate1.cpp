// CppTamplate.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "Auto.h"
#include "CarSecond.h"


void CreateSCar() {
	// Создать второе авто.
	CarSecound myCarS;
	myCarS.CreateACar();
	// Отобразить информацию о новом авто.
	myCarS.DisplayCarStats();
	// Ускорять автомобиль до предела.
	while (myCarS.GetCurrSpeed() <= myCarS.GetMaxSpeed()) {
		myCarS.ChangeSpeed();
		myCarS.AskToStopCar();
	}
	cout << myCarS.GetPetName() << " разломался от напряжения!" << endl;
	_getch();
}
void CreateCar() {
	// Создать авто.
	CCar myCar;
	myCar.CreateACar();
	// Отобразить информацию о новом авто.
	myCar.DisplayCarStats();
	// Ускорять автомобиль до предела.
	while (myCar.GetCurrSpeed() <= myCar.GetMaxSpeed()) {
		myCar.ChangeSpeed();
		myCar.AskToStopCar();
	}
	cout << myCar.GetPetName() << " разломался от напряжения!" << endl;
	_getch();
}
void SelectCar() {
	bool result = true;
	do
	{
		cout << "Машину какого класса мне создать?(Car = 'F'/CarSecond = 'S')" << endl;
		/*cout << "Which type of car do you want to create?(Car = 'F'/CarSecond = 'S')" << endl;*/
		switch (_getch())
		{
		case'f':
			result = false; CreateCar(); break;
		case's':
			result = false; CreateSCar(); break;
		default:
			/*cout << "Неправильный ввод!" << endl; */cout << "Incorrect input!" << endl; break;
		}
	} while (result);
}
void main(void) {
	//setlocale(LC_ALL, "Rus"); /* Обязательно должно быть первым */
	::SetConsoleOutputCP(1251);
	::SetConsoleCP(1251);	
	SelectCar();
}