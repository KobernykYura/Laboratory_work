#include "stdafx.h"
#include "Auto.h"


//////////////////////////////////////////////////////////////////////
// Конструктор и деструктор
//////////////////////////////////////////////////////////////////////

//CCar::CCar() :m_currSpeed(0), m_maxSpeed(0) {
CCar::CCar() {
	m_currSpeed = 0;
	m_maxSpeed = 0;
	m_drivePower = 0;
	strcpy_s(m_petName, "");
}

CCar::~CCar() {
	// Пока ничего не надо ...
}

//////////////////////////////////////////////////////////////////////
// Методы
//////////////////////////////////////////////////////////////////////

void CCar::DisplayCarStats() const { // Отобразить характеристики автомобиля.
	cout << "***********************************" << endl;
	cout << "Ваш автомобиль называется: " << m_petName << endl;
	cout << "Его максимальная скорость: " << m_maxSpeed << endl;
	cout << "Мощность двигателя: " << m_drivePower << endl;
	cout << "***********************************" << endl << endl;
}

void CCar::CreateACar() { // Создать модель автомобиля
	char  buffer[MAX_LENGTH << 2];
	int  spd = 0;
	int  pwr = 0;
	// Ввести правильно имя автомобиля.
	do {
		cout << endl << "Пожалуйста введите имя автомобиля: " << flush;
		gets_s(buffer);   // Ввод строки.
	} while (strlen(buffer) >= MAX_LENGTH);
	strcpy_s(m_petName, buffer);
	// Ввести правильно максимальную скорость.
	do {
		cout << "Введите max скорость для данной модели: " << flush;
		cin >> spd;
	} while (spd > MAX_SPEED);
	do {
		cout << "Введите мощность двигателя для данной модели: " << flush;
		cin >> pwr;
		cout << endl;
	} while (pwr > MAX_POWER);
	m_maxSpeed = spd;
	m_drivePower = pwr;
}

void CCar::AddSpeed() { // Нарастить скорость.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed += m_drivePower*0.03;
		cout << "Скорость есть: " << m_currSpeed << endl;
	}
}
void CCar::RemoveSpeed() { // Нарастить скорость.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed -= m_drivePower*0.03;
		cout << "Скорость есть: " << m_currSpeed << endl;
	}
}
void CCar::ChangeSpeed() { // Нарастить скорость.
	cout << "Увеличить или уменьшить скорость?(y/n): "<< endl;
		switch (_getch())
		{
		case 'y':
			AddSpeed(); break;
		case 'n':
			RemoveSpeed(); break;
		default: cout << "Неправильный ввод!" <<endl; break;
		}
}