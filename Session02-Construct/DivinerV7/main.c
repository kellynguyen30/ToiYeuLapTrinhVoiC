#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 


int main(int argc, char *argv[]) {
	
	char fL; 
	

	printf("Welcome to Dell diviner.\n");
	printf("You are required to input the 1st letter in  your first name.\n");
	printf("Then I will show you your destiny.\n"); 
	printf("Input your char: ");
	
	scanf("%c", &fL); 
	fL = toupper(fL); 
	
	
	if (fL == 'A' )
		printf(" Dua cot khong phai la so truong cua ban ");	
	else if (fL == 'B' ) 
		printf(" Ban nang gioi tinh rat tu nhien ");	
	else if (fL == 'C' )
		printf(" Tinh cam cua ban gan gui va than mat ");
	else 
		printf("Coming soon...\n");
			
	return 0;
}
