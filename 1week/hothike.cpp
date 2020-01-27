#include <iostream>
using namespace std;
#define MAX(a,b) (a > b ? a : b)

int maxall(int *a, int size);
int main()
{
	int days;	cin >> days;
	int * array = new int[days];
	for(int i = 0; i < days; i++)
		cin >> array[i];
	int leastIndex = 0;
	int leastTemp = maxall(array, days);

	for(int j = 0; j < days - 2; j++)
	{
		int m = MAX(array[j], array[j+2]);
		if(m < leastTemp && array[leastIndex] != m)
		{
			leastTemp = m;
			leastIndex = j;
		}
	}
	printf("%d %d\n", leastIndex + 1, leastTemp);
	return 0;
}

int maxall(int *a, int size)
{
	int maxi = a[0];
	for(int i = 0; i < size; i++)
	{
		maxi = MAX(a[i], maxi);
	}
	return maxi;
}
