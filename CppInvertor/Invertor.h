#pragma once
class Invertor
{
public:
	Invertor();
	~Invertor();
	void InvertStr(const char*);
private:
	int GetWord(int &, int start = 0);
private:
	char *s;
};

