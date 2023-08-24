#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// viet app tinh tuoi cua ai do dua tren nao sinh
// nhap vao tu ban phim. sau do in ra tuoi 
// cong thuc tinh tuoi:  age = 2023 -  nam sinh ( lay nam hien hanh tu may tinh)
int main(int argc, char *argv[]) {
	
	int yob, age;
	// thu nghiem
	// printf("your year of birth is %d\n", yob);
	// xin bien/xin dat/khai bao bien ma khong gan value
	//thi vung ram co san nay truoc do co the co on off cua app khac truoc do de lai
	// neu minh in value thi ta se co gia tri vo van nao do de lai
	//goi la garbage value, gay nguy hiem cho app vi app xu li sai
	// bên java thì he thong se bao loi luon
	
	printf("Please input your yob: ");
	scanf("%d", &yob);
	
	age = 2023 - yob;
	
	printf(" As i gues, you are %d years old\n", age);
	return 0;
}
