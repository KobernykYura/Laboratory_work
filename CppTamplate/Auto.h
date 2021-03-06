#pragma once
const  int MAX_LENGTH = 32;
const  int MAX_SPEED = 400;
const  int MAX_POWER = 700;

typedef double TSpeed;

class CCar {
public:
	CCar();
	~CCar();  // virtual 
			  // �������� ��������� ������.
	void  DisplayCarStats() const;

	void ChangeSpeed();
	void AskToStopCar();
	
	TSpeed  GetCurrSpeed() const { return m_currSpeed; }
	TSpeed  GetMaxSpeed() const { return m_maxSpeed; }
	int  GetDriveSpeed() const { return m_drivePower; }
	const char*  GetPetName()const { return m_petName; }
	void  CreateACar();
private:
	void  AddSpeed();
	void  RemoveSpeed();
	void StopCar();
private:
	// ������� ������.
	char  m_petName[MAX_LENGTH];
	TSpeed  m_maxSpeed;
	TSpeed  m_currSpeed;
	int m_drivePower;
};