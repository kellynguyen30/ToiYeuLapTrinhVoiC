#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// kiem tra xem tuoi cua minh co la thanh xuan hay ko?
	int age = 39;
	if(age >=20 && age <=30)
		printf(" Chao thanh xuan\n");
	else
		printf("I don't care. You are too old or too young\n"); 
		
		// VIET DOAN CODE MOI NHAP VAO 1 CON SO NGUYEN BAT KI
		// SAU DO IN RA THONG BAO RANG CON SO NAY CO NAM NGOAI 
	// MIEN/ DOAN  [1...100] HAY KO
	// VI DU GOI CON SO CAN NHAP LA x
	// GO x = -5 -> NGOÀI DOAN 
	// GO x = 50 -> TRONG DOAN 
	
	int x;
	printf(" Inpute an integer. I will check if this number is in the range of [1...100] or not\n");
	printf("Input an integer: ");
	scanf("%d",&x);
	
	int result ; // kiêm tra co ngoai mien hay ko	  
	result = x < 1 || x > 100;
	//x = -5 -> result = 1
	printf(" range result : %d\n", result);
	//---------------------------------
	if(x < 1 || x > 100)
		printf("Number %d is out the range of  [1...100]\n",x);
	else
		printf("Number %d is in the range of  [1...100]\n",x);
	return 0;
}
