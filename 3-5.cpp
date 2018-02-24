#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> originalStack;
	stack<int> tempStack;
	int stackElements = 9;
	int arr[9] = { 3, 2, 6, 1, 2, 6, 7, 3, 8 };
	for (int i = 0; i < stackElements; i++)
	{
		if (originalStack.empty() || originalStack.top() >= arr[i])
		{
			originalStack.push(arr[i]);
		}
		else
		{
			while (!originalStack.empty() && originalStack.top() < arr[i])
			{
				tempStack.push(originalStack.top());
				originalStack.pop();
			}
			originalStack.push(arr[i]);
			while (!tempStack.empty())
			{
				originalStack.push(tempStack.top());
				tempStack.pop();
			}
		}
	}

	while (!originalStack.empty())
	{
		printf("%d \n", originalStack.top());
		originalStack.pop();
	}
	
}