#include <stdio.h>
#include <stdlib.h>
// viet app nho nho, nhap vao nam sinh cua ban
// va nhap them ki tu dau tien trong ten ban
// sau do in ra: nam sinh, tuoi, ki tu ten
int main(int argc, char *argv[]) {
	int yob, age;
	char fL;
	
	printf(" You are required to input your profile\n");
	

	
	printf("1st, input your yob: ");
	scanf("%d",&yob);
	
	age = 2022 - yob;
	
	// truoc lenh nhap chuoi/ki tu, ta xoa bo dem, don rac
	fflush(stdin); // flush: don, rua
				   // stdin: standard input
				   // vùng ram chuan danh cho viec nhap data 
	//mac, linux : fpurge(stdin);  __fpurge(stdin);
	printf("2nd, input 1st letter of your first name: ");
	scanf("%c", &fL);
	
		
	printf("Your profile is: \n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your name (brief): %c\n", fL);
	
	
	// nhap vao tu ban phim 2 con so nguyen x, y
	// sau do in ra tong  cua chung 
	
	int x, y;
	printf(" You are required input 2 integers\n");
	//scanf("%d", &x);
	// scanf("%d", &y);
	scanf("%d%d", &x, &y);
	
	printf("The sum of %d and %d is %d\n", x, y, (x +y));
	// làm bieng tao bien trung gian sum = x + y
	// xet cho cung x + y là 1 value, ta in luôn
	// khoi can gia tri trung gian/ bien trung gian sum

	return 0;
}
