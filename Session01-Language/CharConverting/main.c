#include <stdio.h>
#include <stdlib.h>

// VIET APP NHO NHO NHAP CHU CAI DAU TRONG TEN B?N
// NHAP CHU HOA - SAU DO IN RA THUONG 

int main(int argc, char *argv[]) {
	
	char fL; //firstLetter - cú phap con lac da gu lung
		// cameL case notation
	printf(" Input the 1st letter of your first name: ");
	scanf("%c", &fL);
	
	// gia bo nhap tu te. Neu khong tap tu te go $, se bi an chui
	// dung lenh if moi chui dc 
	
	printf(" You have just input the character: %c\n", fL);

	
	// doi hoa sang thuong
	fL += 32;
	printf("And it is converted to lower case as:%c\n", fL);
	printf("And it is converted to lower case as\t\t\t: %c\n", fL);
	return 0;
}
