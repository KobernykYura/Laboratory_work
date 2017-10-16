#pragma once
const  int MAX_LENGTH_S = 32;
const  int MAX_SPEED_S = 400;
const  int MAX_POWER_S = 700;

typedef int TSpeed;

class CarSecound {
public:
	CarSecound();
	~CarSecound();  // virtual 
			  // Открытый интерфейс класса.
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
	// Скрытые данные.
	char  m_petName[MAX_LENGTH_S];
	TSpeed  m_maxSpeed;
	TSpeed  m_currSpeed;
	int m_drivePower;
};
