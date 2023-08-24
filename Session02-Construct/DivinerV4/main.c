#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // mo cop xe, lay con nhi khuc ra choi
				// day la tap tin tren HDD/SDD chua cac ham,xu li co san ma ta chi loi ra xai
				// ta can biet cop xe nao, chua do gi
				// ten xe.h ----cac cop xe chua do choi
				// ten mon do choi la cac ham nam trong cop xe
				// ctype.h , string.h , math.h, ...: bo thu vien
				// include <> mo cop xe tuong ung
				// .h dc goi la library - thu vien, noi chua nhieu do choi dung chung
				// xai lai nhieu lan 

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
	
	scanf("%c", &fL); // meu go HOA -> oke 
					// neu go thuong, thi doi HOA, roi if nhu bth
					// if(thuong) - 32 ve HOA (kieu cu)
	fL = toupper(fL); // y = f(x) = x^2
					 // y = f(2) = 2^2 = 4 
					 // ham/ham so/function/f la 1 quy tac bien doi cai gi do
					 // de ra 1 cai gi moi. Dua so 2 nhan ve 4
	// tolower : sang chu thuong
	
	
	if (fL == 'A' )
		printf(" Dua cot khong phai la so truong cua ban ");
		
	if (fL == 'B' )
		printf(" Ban nang gioi tinh rat tu nhien ");
		
	if (fL == 'C' )
		printf(" Tinh cam cua ban gan gui va than mat ");
	 	
	//else 
	//	printf("Coming soon...\n");
		
	
	
	
	return 0;
}
