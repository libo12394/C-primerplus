#include<iostream>
unsigned int cstr(const char* str, char ch);
int main()
{
	using namespace std;
	char mm[15] = "minimum";
	const char *wail = "ululate";
	unsigned int ms = cstr(mm, 'm');
	unsigned int us = cstr(wail, 'u');
	cout << ms << " m charcaters in " << mm << endl;
	cout << us << " m charcaters in " << wail << endl;
	return 0;
}
unsigned int cstr(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}