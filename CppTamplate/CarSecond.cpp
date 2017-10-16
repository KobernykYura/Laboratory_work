#include "stdafx.h"
#include "CarSecond.h"


//////////////////////////////////////////////////////////////////////
// Конструктор и деструктор
//////////////////////////////////////////////////////////////////////

//CCar::CCar() :m_currSpeed(0), m_maxSpeed(0) {
CarSecound::CarSecound() {
	m_currSpeed = 0;
	m_maxSpeed = 0;
	m_drivePower = 0;
	strcpy_s(m_petName, "");
	cout << "************************************" << endl;
	cout << "Автомобиль в объектной модели CarSecound" << endl;
	cout << "************************************" << endl;
}

CarSecound::~CarSecound() {
	// Пока ничего не надо ...
}

//////////////////////////////////////////////////////////////////////
// Методы
//////////////////////////////////////////////////////////////////////

void CarSecound::DisplayCarStats() const { // Отобразить характеристики автомобиля.
	cout << "***********************************" << endl;
	cout << "Ваш автомобиль называется: " << m_petName << endl;
	cout << "Его максимальная скорость: " << m_maxSpeed << endl;
	cout << "Мощность двигателя: " << m_drivePower << endl;
	cout << "***********************************" << endl << endl;
}

void CarSecound::CreateACar() { // Создать модель автомобиля
	char  buffer[MAX_LENGTH_S << 2];
	int  spd = 0;
	int  pwr = 0;
	// Ввести правильно имя автомобиля.
	do {
		cout << endl << "Пожалуйста введите имя автомобиля: " << flush;
		gets_s(buffer);   // Ввод строки.
	} while (strlen(buffer) >= MAX_LENGTH_S);
	strcpy_s(m_petName, buffer);
	// Ввести правильно максимальную скорость.
	do {
		cout << "Введите max скорость для данной модели: " << flush;
		cin >> spd;
	} while (spd > MAX_SPEED_S);
	do {
		cout << "Введите мощность двигателя для данной модели: " << flush;
		cin >> pwr;
		cout << endl;
	} while (pwr > MAX_POWER_S);
	m_maxSpeed = spd;
	m_drivePower = pwr;
}

void CarSecound::AddSpeed() { // Нарастить скорость.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed += m_drivePower*0.03;
		cout << "Скорость есть: " << m_currSpeed << endl;
	}
}
void CarSecound::RemoveSpeed() { // Уменьшить скорость.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed -= m_drivePower*0.03;
		cout << "Скорость есть: " << m_currSpeed << endl;
	}
}
void CarSecound::StopCar() { // Уменьшить скорость.
	m_currSpeed = 0;
	cout << "Скорость есть: " << m_currSpeed << endl;
}
void CarSecound::AskToStopCar() {
	if (m_currSpeed > 0.7*m_maxSpeed && m_currSpeed < m_maxSpeed) {
		cout << "Подходим к предельному значению скорости. Хотете остановиться?(y/n): " << endl;
		switch (_getch())
		{
		case 'y':
			StopCar(); break;
		case 'n':
			break;
		default: cout << "Неправильный ввод!" << endl; break;
		}
	}
}

void CarSecound::ChangeSpeed() { // Изменение скорости.
	cout << "Увеличить или уменьшить скорость?(y/n): " << endl;
	switch (_getch())
	{
	case 'y':
		AddSpeed(); break;
	case 'n':
		RemoveSpeed(); break;
	default: cout << "Неправильный ввод!" << endl; break;
	}
}
