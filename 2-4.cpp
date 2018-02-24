#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> OL = { 3, 5, 8, 5, 10, 2, 1 };
	list<int> result;
	int n = 5;
	for (list<int>::iterator it = OL.begin(); it != OL.end(); ++it)
	{
		if (*it < 5){ result.push_front(*it); }
		else  result.push_back(*it);
	}

	for (list<int>::iterator it = result.begin(); it != result.end(); ++it)
	{
		printf("%d ,", *it);
	}
}