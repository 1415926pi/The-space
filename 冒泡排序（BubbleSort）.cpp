#include <stdio.h>

int *BubbleSort(int *a, int n)
{
	for(int i = 0; i < n-1 ; i++)
	{
		for(int j = 0; j < n-1 - i; j++)
		{
			if(a[j] < a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

int main()
{
	int a[100]; 
	int n;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	} 
	
	BubbleSort(a, n);
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
 } 
