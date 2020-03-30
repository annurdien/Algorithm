#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int data[] = {23,43,52,31,2,43,56,32,12,33};
	int N = sizeof(data)/sizeof(data[0]);	

	int i, j, min_idx,temp; 

	for (i = 0; i < N-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < N; j++) 
			if (data[j] < data[min_idx]) 

			min_idx = j; 
			temp = data[min_idx];
			data[min_idx] = data[i];
			data[i] = temp;

		} 

		for (int i = 0; i < N; i++)
		{
			printf("%d ",data[i]);
		}
		return 0;

	}