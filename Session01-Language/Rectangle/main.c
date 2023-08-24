#include <stdio.h>
#include <stdlib.h>

// viet ap tinh dien tich hinh chu nhat vs 2 canh nhap tu ban phim
// in ra ket qua 
// cong thuc tinh s = dai x rong 

int main(int argc, char *argv[]) {
	int width, lenght, area; // tam dung so nguyen 
	
	printf("You are required to input the size of a rectangle\n");
	
	printf("Input the width: ");
	scanf("%d", &width);
	
	printf("Input the lenght: ");
	scanf("%d", &lenght);
	
	area = width * lenght;
	
	printf("The area of a rectangle (%d, %d) is %d\n", width,lenght, area);
	
	return 0;
}
