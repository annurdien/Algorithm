#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int data[] = {29,14,21,53,35,23,2,1,43,11,24,63};
	int i, key, j,N;
	N = sizeof(data)/sizeof(data[0]);
    for (i = 1; i < N; i++) { 
        key = data[i]; 
        j = i - 1; 
        while (j >= 0 && data[j] > key) { 
            data[j + 1] = data[j]; 
            j = j - 1; 
        } 
        data[j + 1] = key; 
    } 

	for (int i = 0; i < N; ++i)
	{
		printf("%d ",data[i] );
	}
		return 0;
	}  
	
