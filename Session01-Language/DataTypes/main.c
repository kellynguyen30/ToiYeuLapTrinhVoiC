#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 3;
	
	//  tong cong 8 byte trong ram dc cap. de luu 2 value
	// hoi a co gia tri may , b gia tri may, in ra man hinh
	
	printf("a = %d; b = %d\n", a, b);
	
	// hoi nha cua 2 em o mo
	
	printf("nha cua a o %u; nha cua b o %u\n", &a, &b);
	// 2 dia chi cach nhau 4 byte
	
	// tai 1 thoi diem, bien chi lua dc 1 value, n
	// no value neu gan value moi cho bien 
	// on off dao thu tu bit 0, 1 ra so khac ngay 
 	// int a = 69; ko cho di tiep, cpu ko chiu
 	a= 69; 
 	printf("a = %d; b = %d\n", a, b);
 	
 	// choi vs so thuc
 	
 	double c = 0.1, d = 3.14 ; // 10%
 	// vua khai bao, vua gan value, nhieu bien cung dong 
 	// in ra ket qua 2 con so thuc bu
 	
 	printf ("c = %.1lf; d = %.3lf\n", c,d );
 	printf("nha cua c o %u; nha cua d o %u\n", &c, &d);
 	
 	// c cung cap 1 lenh de hoi cpu rang, 1 data type bat ki chiem may byte trong ram
 	
 	printf(" The number of bytes allocated of an int: %d\n ", sizeof(int));
 	int size = sizeof(int); // day la 1 ham/lenh tra ve 1 value
 	printf(" The number of bytes allocated of an int: %d\n ", size);
 	printf(" The number of bytes allocated of an float: %d\n ", sizeof(float));
 	// sizeof(float) là in ra kích thuoc so nguyen, chu ko phai kieu du lieu float nen van la %d
 	printf(" The number of bytes allocated of an double: %d\n ", sizeof(double));
 	
 	int m = 2100000000; //%d
 	long money = 1000000000; // %ld
 	printf("The amount 1: %d\n", m);
 	printf("The amount 2: %ld\n", money);
 	
 	
 	
 	
 	
 	
 	
	return 0;
}
