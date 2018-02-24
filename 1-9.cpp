#include<iostream>
#include <string>
using namespace std;
bool main()
{
	string s1 = "waterbottle";
	string s2 = "erbottlewat";

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1 == s2) return true;
		s1+=s1.front();
		s1.erase(0,1);
	}
	return false;
}
