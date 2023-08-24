#include <stdio.h>
#include <stdlib.h>

// in ra cac so tu nhien tu 1..n (n > 1)
// IPO
//INPUT: PHAI CO n TRUOC 
//		1 BIEN n
//PROCESS: KHONG SO LUON FOR VA IF NEU CAN 
//OUTPUT: 

int main(int argc, char *argv[]) {
	
	int n;
	printf("I am here to show the list of numbers from 1 to n ( n > 1)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n); // bai cu, n = 100
	
	if (n <= 1)
		printf("Do you know how to input a number > 1?\n");
	else
	{
		printf("Again, the list of numbers from 1 to %d:\n", n);
		printf("Ahihi lack of {}\n"); // neu thieu ngoac thi se khac
		for (  int i = 1; i <= n; i++)
			printf("%d ", i);
    }

	
	return 0;
}
