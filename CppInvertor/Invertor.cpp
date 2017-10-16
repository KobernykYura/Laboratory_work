#include "stdafx.h"
#include "Invertor.h"

Invertor::Invertor()
{
}


Invertor::~Invertor()
{
}

void Invertor::InvertStr(const char *st)
{
	char *s = *st;
	int word_len;
	int word_idx = GetWord(word_len);
	while (word_len>0)
	{
		cout.write(s + word_idx, word_len);
		cout << "\n";
		word_idx = GetWord(word_len, word_len + word_idx);
	}
}
int Invertor::GetWord(int &size, int start)
{

	int start_of_word;
	int i;
	for (i = start; isspace((unsigned char)s[i]); ++i);
	start_of_word = i;
	while (s[i] != '\0' && !isspace((unsigned char)s[i])) ++i;
	size = i - start_of_word;

	return start_of_word;
}