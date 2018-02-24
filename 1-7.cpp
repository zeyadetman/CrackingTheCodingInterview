#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int> > OMatrix = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	vector<vector<int> > NMatrix = {{0,0,0},{0,0,0},{0,0,0}};
	int N = 3;
	int r = 0, c = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j < N; j++)
		{
			NMatrix[r][c] = OMatrix[j][i];
			c++;
		}
		r++;
		c = 0;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", NMatrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}