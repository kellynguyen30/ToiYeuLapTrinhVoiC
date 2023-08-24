#include <stdio.h>
#include <stdlib.h>

// hay luu 1 ki tu va in ra man hinh 

int main(int argc, char *argv[]) {
	
	//char firstChar = 'V'; // CAP NHAY DON LUU 1 KI  TU
	
	  char firstChar = 'A'; // 1 KI TU CÓ THE CHOI THEO 2 CACH 
						 // CHOI THEO MA SO CHONG LUNG HOAC THEO KI TU 
	// 1 BYTE TRONG RAM ON OFF THANH KI TU RAM 
	// DUNG %C DE CHI CHO CPU BIET CACH ON OFF
	// MO VAO CHIP BIOS/UEFI TRÊN MAINBOARD DE TIM CACH ANH XA THANH KI TU TREN MAN HINH 
	// DAY LA SU PHOI HOP CUA CPU + RAM + KEYBOARD + VGA CARD (DO HOA) + PRINTER + MONITOR +SSD/HDD
								//+ CHIP BIOS/UEFI
								
	printf(" The 1st letter in your name is %c\n", firstChar);
	printf(" The ASCII code %c is %d\n", firstChar, firstChar);
	
	//firstChar = firstChar + 32; // doi sang a thuong
	firstChar +=32;
	printf("After converting to lower case\n", firstChar);
	printf(" The 1st letter in your name now is %c\n", firstChar);
	printf(" The ASCII code %c is %d\n", firstChar, firstChar);
	return 0;
}  
