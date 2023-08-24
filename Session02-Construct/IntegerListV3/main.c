#include <stdio.h>
#include <stdlib.h>
// in ra cac so le tu 1..1000
// le: chia 2 du 1


int main(int argc, char *argv[]) {
	printf(" The list of odd numbers from 1..1000\n");
	
	for (int i = 1; i <= 1000; i++)
		if ( i % 2 == 1) 
			printf("%d ", i);

	printf("\n");
	
	for (int i = 1; i <= 1000; i++)
		if ( i % 2 != 0) 
			printf("%d ", i);
			
	//bai tuong tu: tro choi 5 10 15 20....in ra cac so chia het 5
	
	return 0;
}
