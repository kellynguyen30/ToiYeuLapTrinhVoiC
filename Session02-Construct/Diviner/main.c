#include <stdio.h>
#include <stdlib.h>

// VIET APP IN RA TINH CACH CUA BAN DUA THEO THEO GOI 
// DUNG KI TU DAU TRONG TEN GOI DE LUAN RA TINH CACH 
// AP DUNG CONG THUC IPO
// DE BOI DC TINH CACH, LAM DC BAI NAY, TA CAN GÌ?

// INPUT: KI TU DAU TRONG TEN


// PROCESS: TUY KI TU TEN LA GI,
			// THI TA SE IN/GHEP VS TINH CACH DA DUOC TONG KET BANG BOI NHAN LOAI
			// IF ( CHU CAI A) THI TINH CACH LA...
			// IF(CHU CAI TEN DUNG LA B) THI TINH CACH LA...
			
// OUTPUT: IN RA TINH CACH TUONG UNG = PRINTF("CAU GI DO")

// TIPS: -BAO NHIÊU INPUT, TA CAN BAY NHIEU BIEN
//		 -CU CO OUPUT, THI SE CO XAC SUAT CAN THEM BIEN DE LUU OUTPUT
//		-TRU TRUONG HOP OUTPUT LA IN CAU GI DO, KO CAN BIEN
// 		-VD: OUTPUT NGHIEM PT BAC 2: 2 NGHIEM CAN IN RA X1, X2
// 		-PHAN THUAT TOAN XU LI/PROCESS, CO KHA NANG CAN THEM BIEN TRUNG GIAN 
//		DE LUU CAC GIA TRI TRONG QUA TRINH TINH TOAN
//		VD: age = 2022 - yob; //age la bien trung gian 


int main(int argc, char *argv[]) {
	//input
	char fL; // firstLetter - camel case notation 
	
	// process: co the thi if tuong uong va in ra
	// output: chi in kq, ko can bien 
	
	printf("Welcome to Dell diviner.\n");
	printf("You are required to input the 1st letter in  your first name.\n");
	printf("Then I will show you your destiny.\n"); 
	printf("Input your char: ");
	scanf("%c", &fL);
	
	// CO DC TEN ROI DAY, CHI 1 KI TU THOI
	//fL = 'A'....'Z'
	if (fL == 'A')
		printf(" Dua cot khong phai la so truong cua ban ");
		
	if (fL == 'B')
		printf(" Ban nang gioi tinh rat tu nhien ");
		
	if (fL == 'C')
		printf(" Tinh cam cua ban gan gui va than mat ");
	 	
	 	// code chay sai neu go a thuong, ko in ra tinh cach 
	 	// loi do ta chi hoi/xet A, A khac a ve mat on off, ma ASCII
	
	
	return 0;
}
