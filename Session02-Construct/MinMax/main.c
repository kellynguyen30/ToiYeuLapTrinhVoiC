#include <stdio.h>
#include <stdlib.h>

// VIET APP TIM SO LON NHAT TRONG 2 CON SO CHO TRUOC NHAP TU BAN PHIM
//IPO
// I: DE LAM BAI NAY CAN GÌ? 
//		CAN 2 CON SO NAO DO, CAN 2 BIEN : a, b

// P: GIA SU a = 5, b = 1
// SO SANH DE BIET AI LON HON, NHO HON
// NEU a  > b, if (a > b) ro rang a max, in ra
// 		NGUOC LAI b lon nhat?? => KHONG CHAC NHA
// 		NGUOC LAI CUA a > b
// ELSE HIEU LA PHAN CON LAI, THE GIOI CON LAI, KO PHAI LA TUONG PHAN
// NGUOC LAI CUA LON LA BE - NGHI TUONG PHAN
// NGUOC LAI CUA LON, LA KHONG LON HON, CO THE LA NHO, HOAC LA BANG
// TU DUY LOGIC CUA DAN IT
// else (nguoc lai cua a > b)
// 		if (a == b)
// 			2 dua minh == nhau 
//		else //  a < b 
//			b la lon nhat 

//O: MUON DAT DUOC DIEU GI? 
//	DUA NAO LON NHAT? a HAY b? in ra
int main(int argc, char *argv[]) {
	
	int a, b;
	printf("This program will show the maximum value of two numbers\n");
	printf("Please input two numbers: ");
	scanf("%d%d", &a, &b);
	
	if (a > b)
		printf(" You have just input two numbers %d, %d and the max value is %d\n", a, b, a);
	else if (a == b) // nguoc lai cua a > b se la a == b or a < b
		printf(" You have just input equal number. Thay are %d\n", a);
	else 
		printf("You have just input two numbers %d, %d and the max value is %d\n", a, b, b);
		
	return 0;
}
