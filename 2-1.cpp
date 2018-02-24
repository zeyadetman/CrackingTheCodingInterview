#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<char> word = { 'f', 'o', 'l', 'l', 'o', 'u', 'p', 'p' };
	list<char>::iterator it2;
	for (list<char>::iterator it = word.begin(); it != word.end(); it++)
	{
		list<char>::iterator tmp;
		tmp = it;
		for (it2 = ++tmp; it2 != word.end(); it2++)
		{
			if (*it2 == *it)
			{
				it2 = word.erase(it2);
				it2--;
			}

		}
	}
	list<char>::iterator it3;
	for (it3 = word.begin(); it3 != word.end(); ++it3)
	{
		printf("%c ", *it3);
	}
	
}