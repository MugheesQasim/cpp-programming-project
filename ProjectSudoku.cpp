#include<iostream>

using namespace std;

int main()
{
	int array[9][9] = { {2,5,7},{1,4,6},{2,5,8},{2,5,7},{2,6,5},{3,6,8},{4,6,3},{4,6,7},{2,6,5} };

	for (int i=0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (array[i][j] == 0);

		}
	}
	for (int i=0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
}