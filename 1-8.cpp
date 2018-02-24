#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int> > OMatrix = { { 1, 0, 2 }, { 0, 3, 4 }, { 5, 0, 7 }, { 1, 2, 3 } };
	vector<vector<int> > zeroes; //we can  change it to two arrays of booleans
	int M = 4;
	int N = 3;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (OMatrix[i][j] == 0)
				zeroes.push_back({ i, j });
		}
	}

	for (int i = 0; i < zeroes.size(); i++)
	{
		//for columns
		for (int c = 0; c < N; c++)
		{
			OMatrix[zeroes[i][0]][c] = 0;
		}

		//for rows
		for (int r = 0; r < M; r++)
		{
			OMatrix[r][zeroes[i][1]] = 0;
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", OMatrix[i][j]);
		}
		printf("\n");
	}
}