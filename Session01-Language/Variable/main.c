#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob = 2002; // he dem thap phan luu vao trong ram 
	int grade = 10; //  he dem thap phan cat vao trong ram 
	
	printf("Your year of birth is %d\n", yob);
	printf("Your year of grade is %d\n", grade);
	
	// Hoi 1 cau, cac bien nam o dau trong ram 
	printf("Nha cua bien yob nam o vi tri byte thu  %u\n", &yob);
	printf("The address of varable grade is %u\n", &grade);

	
	//nam sinh la gi     //nam sinh nam o dau trong ram
	//tinh tuoi -> ten goi cho con so noi ve so nam minh da song
	// tuoi la 1 bien 
	// cong thuc tinh tuoi" nam hien tai -  nam sinh 
	//				tuoi = 		2023     - yob
	
	int age = 2023 - yob;
	printf("As i gues, you are %d years old\n", age);
	
	// bài này viet ko hay, goi la hard code, fix cac gia tri, chi chay cho nam nay
	// cong thuc chua linh hoat
	// nam sinh co dinh, muon tinh cho ban khac, phai sua code
	// ra file .exe moi
	// app nay co khong su tuong tac, khong co nhap, click chuot 
	// tuong tac moi thu vi, da dang data dua vao
	// ho tro cho user dung trong cong viec 
		return 0;
}
