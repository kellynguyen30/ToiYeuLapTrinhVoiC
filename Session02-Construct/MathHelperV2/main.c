#include <stdio.h>
#include <stdlib.h>

// VIET APP HO TRO BE LAM TOAN CO BAN 
// APP CUNG CAP TINH NANG MENU, 1 2 3 4 5 6 ...10. Quit
// ai muon choi tinh nang nao, chon co so do

// 1. Tinh dien tich hinh tron IPO
// 2. Tinh dien tich hinh chu nhat IPO
// 3.Tinh.... IPO
//10. Quit   IPO

// IPO CUA CA BAI
// CAN GI CHO BAI MENU NAY , TONG QUAT??

// INPUT: CHO CAI LUA CHON CUA MAY, MAY CHON MAY?
//		  bien choice/option/menuItem; 

// PROCESS: XU LI, TUY CHOICE LA GÌ THI TA HANH XU TUONG UNG MENU
//co nhieu choice 1 2 3 4 .... -> switch case/if else

// OUTPUT: TUY CHON GÌ, CO OUTPUT TUONG UNG

int main(int argc, char *argv[]) {
	int choice; 
	float radius, area; 
	
	do 
	{
		printf("Welcome to Math Helper Program\n");
		printf("Please choose the following functions to play with\n");
		printf("1. Compute the disk area\n");
		printf("2. Compute the rectangle area\n");
		printf("3. Compute the triangle area\n");
		printf("4. Quit\n");
		
		printf("Choose 1..4: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				printf ("You choose 1 to compute the disk area\n");
				printf("Please input a disk's radius: "); // go ban kinh am?? (*) 
				scanf("%f", &radius);
				area = 3.14 * radius * radius;
				printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
				break;
		
			case 2:
				break;
		
			case 4:
				printf("Bye bye, see you next time\n");
				break;
		
			default: 
				printf("Please choose 1..4\n");
			 
		}
	
	
	
	} while (choice != 4); // chung nao con chua chon 4, thi an choi tiep di 
						// dung la chua bang 4, thi choi tiep trong do 
	
	
	

	
	
	
	
	return 0;
}
