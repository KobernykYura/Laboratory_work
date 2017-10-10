#include "stdafx.h"
#include "Auto.h"


//////////////////////////////////////////////////////////////////////
// ����������� � ����������
//////////////////////////////////////////////////////////////////////

//CCar::CCar() :m_currSpeed(0), m_maxSpeed(0) {
CCar::CCar() {
	m_currSpeed = 0;
	m_maxSpeed = 0;
	m_drivePower = 0;
	strcpy_s(m_petName, "");
}

CCar::~CCar() {
	// ���� ������ �� ���� ...
}

//////////////////////////////////////////////////////////////////////
// ������
//////////////////////////////////////////////////////////////////////

void CCar::DisplayCarStats() const { // ���������� �������������� ����������.
	cout << "***********************************" << endl;
	cout << "��� ���������� ����������: " << m_petName << endl;
	cout << "��� ������������ ��������: " << m_maxSpeed << endl;
	cout << "�������� ���������: " << m_drivePower << endl;
	cout << "***********************************" << endl << endl;
}

void CCar::CreateACar() { // ������� ������ ����������
	char  buffer[MAX_LENGTH << 2];
	int  spd = 0;
	int  pwr = 0;
	// ������ ��������� ��� ����������.
	do {
		cout << endl << "���������� ������� ��� ����������: " << flush;
		gets_s(buffer);   // ���� ������.
	} while (strlen(buffer) >= MAX_LENGTH);
	strcpy_s(m_petName, buffer);
	// ������ ��������� ������������ ��������.
	do {
		cout << "������� max �������� ��� ������ ������: " << flush;
		cin >> spd;
	} while (spd > MAX_SPEED);
	do {
		cout << "������� �������� ��������� ��� ������ ������: " << flush;
		cin >> pwr;
		cout << endl;
	} while (pwr > MAX_POWER);
	m_maxSpeed = spd;
	m_drivePower = pwr;
}

void CCar::AddSpeed() { // ��������� ��������.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed += m_drivePower*0.03;
		cout << "�������� ����: " << m_currSpeed << endl;
	}
}
void CCar::RemoveSpeed() { // ��������� ��������.
	if (m_currSpeed <= m_maxSpeed) {
		m_currSpeed -= m_drivePower*0.03;
		cout << "�������� ����: " << m_currSpeed << endl;
	}
}
void CCar::ChangeSpeed() { // ��������� ��������.
	cout << "��������� ��� ��������� ��������?(y/n): "<< endl;
		switch (_getch())
		{
		case 'y':
			AddSpeed(); break;
		case 'n':
			RemoveSpeed(); break;
		default: cout << "������������ ����!" <<endl; break;
		}
}