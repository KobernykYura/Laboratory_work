#pragma once
const  int MAX_LENGTH = 32;
const  int MAX_SPEED = 400;
const  int MAX_POWER = 700;
class CCar {
public:
	CCar();
	~CCar();  // virtual 
			  // Открытый интерфейс класса.
	void  DisplayCarStats() const;
	void  AddSpeed();
	void  RemoveSpeed();
	void ChangeSpeed();
	void StopCar();
	int  GetCurrSpeed() const { return m_currSpeed; }
	int  GetMaxSpeed() const { return m_maxSpeed; }
	int  GetDriveSpeed() const { return m_drivePower; }
	const char*  GetPetName()const { return m_petName; }
	void  CreateACar();
private:
	// Скрытые данные.
	char  m_petName[MAX_LENGTH];
	int  m_maxSpeed;
	double  m_currSpeed;
	double m_drivePower;
};