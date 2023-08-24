#include <stdio.h>
#include <stdlib.h>

// VIET APP NHO NHO IN RA CAC SO CHAN TU 1..100
//IPO
//INPUT: RÕ, CAN SO CHAN TU 1..100, VI DU 2 4 6 8...
//PROCESS: LOI RA DC SO CHAN
//			NHO NHAT LÀ 2, NHAY CACH 2, 4, 6, 8..


int main(int argc, char *argv[]) {
	
	printf("The list of even numbers from 1..100\n");
	//printf(" 2 4 6 8 ...."); // khong nen
	//khong noi chinh xac su loc ra con so chan
	//so chan: chia het cho 2, chia 2 hong le, du 0
	
	for (int i = 2; i <=100; i += 2)
		printf("%d ", i);
		
		// bai nay kho cho 10 vi khong mang ngu nghia so chan
		// neu cho lon xon so thi cung ko tinh dc kieu +=2
	printf("\n");
	
	for (int i = 1; i <=100; i++)
		if(i % 2 == 0) // neu dung la i chia 2 du 0
			printf("%d ", i); // thi in ra i nay
			
	// cai nay chi moi 1 lenh neu thi nen chua can ngoac nhon
	return 0;
}
