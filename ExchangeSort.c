#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){

	int data[] = {4,32,53,23,17,53,86,32,12,31};
	int N = sizeof(data)/sizeof(data[0]); 
	int i, j, temp;
	for ( i = 0; i < N - 1; i ++ ){
		for ( j = i + 1; j < N; j ++ ){
			if( data[ i ] > data[ j ] ) 
			{
				temp = data[ i ];  
				data[ i ] = data[ j ];
				data[ j ] = temp; 
			}           
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ",data[i]);
	}
	return 0;
}