// CppTamplate.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <windows.h>
#include "Auto.h"

#define WIN32_LEAN_AND_MEAN

void main(void) {
	//setlocale(LC_ALL, "Rus"); /* Обязательно должно быть первым */
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "************************************" << endl;
	cout << "Первый автомобиль в объектной модели" << endl;
	cout << "************************************" << endl;
	// Создать авто.
	CCar myCar;
	myCar.CreateACar();
	// Отобразить информацию о новом авто.
	myCar.DisplayCarStats();
	// Ускорять автомобиль до предела.
	while (myCar.GetCurrSpeed() <= myCar.GetMaxSpeed())
		myCar.ChangeSpeed();
	cout << myCar.GetPetName() << " разломался от напряжения!" << endl;
}