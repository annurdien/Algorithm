#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int data[] = {23,445,21,4,5,7,534,23,42,12,34,66,43,24};
	int N = sizeof(data)/sizeof(data[0]);
	int i, j,temp; 
	for (int i = 0; i < N-1; i++) 
		for (int j = 0; j < N-i-1; j++) 
			if (data[j] > data[j+1]) 
			{ 
				int temp = data[j]; 
				data[j] = data[j+1]; 
				data[j+1] = temp; 
			} 

			for (int i = 0; i < N; i++) {
				printf("%d ",data[i]);
			}
			
			return 0;
		}
