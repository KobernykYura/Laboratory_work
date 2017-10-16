#include "stdafx.h"
#include "CarSecond.h"


//////////////////////////////////////////////////////////////////////
// ����������� � ����������
//////////////////////////////////////////////////////////////////////

//CCar::CCar() :m_currSpeed(0), m_maxSpeed(0) {
CarSecound::CarSecound() {
	m_currSpeed = 0;
	m_maxSpeed = 0;
	m_drivePower = 0;
	strcpy_s(m_petName, "");
	cout << "************************************" << endl;
	cout << "���������� � ��������� ������ CarSecound" << endl;
	cout << "************************************" << endl;
}

CarSecound::~CarSecound() {
	// ���� ������ �� ���� ...
}

//////////////////////////////////////////////////////////////////////
// ������
//////////////////////////////////////////////////////////////////////

void CarSecound::DisplayCarStats() const { // ���������� �������������� ����������.
	cout << "***********************************" << endl;
	cout << "��� ���������� ����������: " << m_petName << endl;
	cout << "��� ������������ ��������: " << m_maxSpeed << endl;
	cout << "�������� ���������: " << m_drivePower << endl;
	cout << "***********************************" << endl << endl;
}

void CarSecound::CreateACar() { // ������� ������ ����������
	char  buffer[MAX_LENGTH_S << 2];
	int  spd = 0;
	int  pwr = 0;
	// ������ ��������� ��� ����������.
	do {
		cout << endl << "���������� ������� ��� ����������: " << flush;
		gets_s(buffer);   // ���� ������.
	} while (strlen(buffer) >= MAX_LENGTH_S);
	strcpy_s(m_petName, buffer);
	// ������ ��������� ������������ ��������.
	do {
		cout << "������� max �������� ��� ������ ������: " << flush;
		cin >> spd;
	} while (spd > MAX_SPEED_S);
	do {
		cout << "������� �������� ��������� ��� ������ ������: " << flush;
		cin >> pwr;
		cout << endl;
	} while (pwr > MAX_POWER_S);
	m_maxSpeed = spd;
	m_drivePower = pwr;
}

void CarSecound::AddSpeed() { // ��������� ��������.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed += m_drivePower*0.03;
		cout << "�������� ����: " << m_currSpeed << endl;
	}
}
void CarSecound::RemoveSpeed() { // ��������� ��������.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed -= m_drivePower*0.03;
		cout << "�������� ����: " << m_currSpeed << endl;
	}
}
void CarSecound::StopCar() { // ��������� ��������.
	m_currSpeed = 0;
	cout << "�������� ����: " << m_currSpeed << endl;
}
void CarSecound::AskToStopCar() {
	if (m_currSpeed > 0.7*m_maxSpeed && m_currSpeed < m_maxSpeed) {
		cout << "�������� � ����������� �������� ��������. ������ ������������?(y/n): " << endl;
		switch (_getch())
		{
		case 'y':
			StopCar(); break;
		case 'n':
			break;
		default: cout << "������������ ����!" << endl; break;
		}
	}
}

void CarSecound::ChangeSpeed() { // ��������� ��������.
	cout << "��������� ��� ��������� ��������?(y/n): " << endl;
	switch (_getch())
	{
	case 'y':
		AddSpeed(); break;
	case 'n':
		RemoveSpeed(); break;
	default: cout << "������������ ����!" << endl; break;
	}
}
