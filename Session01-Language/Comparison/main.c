#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1. 5 > 6 dung khong?
	int result = 5 > 6;
	printf(" 5 > 6? %d\n", result); // no, 0 
	
	//2. 5 < 6 dung khong?
	result = 5 < 6;
	printf(" 5 < 6? %d\n", result); // yes, 1
	
	// 3. 6 >= 6 dung ko 
	result = 6 >= 6; 
	printf(" 6 >= 6? %d\n", result); 
	
	// 4.100 bang 8 dung ko 
	result = 100 == 8;
	printf(" 100=8? %d\n", result); // 0
	
	// 5 .100 bang 100 dung ko 
	result = 100 == 100;
	printf(" 100=100? %d\n", result); //1
	
	// 6 .100 khac100 dung ko 
	result = 100 != 100;
	printf(" 100 # 100? %d\n", result); //0
	
	// 7. cho 2 so a = 10, b = 3. hoi a lon hon b dung khong?
	// dung 
	int a = 10 , b = 3;
	result =  a > b;
	printf(" a > b? %d\n", result);
	
	// 8. CHO TUOI CUA BAN LA 1 CON SO NGUYEN NAO DO
	// NEU TUOI < 20 CHAO KID
	// NEU TUOI >= 20 CHAO NGUOI TRUONG THANH 
	
		int age = 18;
		if(age >= 20)
			printf(" Hey, chao nguoi truong thanh\n");
		if(age < 20)
			printf("Hey, rich kid\n");
	
	return 0;
}
