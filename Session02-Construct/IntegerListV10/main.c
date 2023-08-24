#include <stdio.h>
#include <stdlib.h>


// TINH TONG CUA DAY SO 1 ...n ( n > 1)
// IPO

// INPUT: n, KHONG DUA n TINH THE NAO DC 

int main(int argc, char *argv[]) {

 	int n, acc = 0; 
 	
	printf("This program will show the sum of 100 first integer (1..n)\n");
	
	printf("Please input n > 1: ");
	scanf("%d", &n);
	// co n roi do, neu n ca chon, bao nhap > 1, gõ -5, 0, 1 -> bao loi
	
	if (n <= 1)
		printf("Do you know how to input integer > 1?\n");
		//chui xong thi khong cho nhap lai
	
	else // else chi lay dung 1 lenh, neu ko có ngoac thi no van lam print sum neu nhap -1,0,1
	{
		for (int i = 1; i <= n; i++) 
			acc += i; 
			
		printf("The sum is %d\n", acc);
	}
	
	
		

	
	
		
	return 0;
}


