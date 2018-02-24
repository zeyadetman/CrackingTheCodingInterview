#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> num1 = { 7, 1, 6 }, num2 = { 5, 9, 2 }, result;
	int n1=0, n2=0, res=0;
	int mul = 1;
	for (list<int>::iterator it = num1.begin(); it != num1.end(); ++it)
	{
		n1 += (*it)*mul;
		mul *= 10;
	}

	mul = 1;
	for (list<int>::iterator it = num2.begin(); it != num2.end(); ++it)
	{
		n2 += (*it)*mul;
		mul *= 10;
	}

	res = n2 + n1;
	while (res>0)
	{
		int tmp,o;
		tmp = res/10;
		tmp *= 10;
		o = res - tmp;
		res /= 10;
		result.push_back(o); //change it to "front" to reverse the number
	}

	for (list<int>::iterator it = result.begin(); it != result.end(); ++it)
	{
		printf("%d", *it);
	}
}