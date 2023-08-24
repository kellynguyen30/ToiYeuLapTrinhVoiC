#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char fL; 
	

	printf("Welcome to Dell diviner.\n");
	printf("You are required to input the 1st letter in  your first name.\n");
	printf("Then I will show you your destiny.\n"); 
	printf("Input your char: ");
	
	// thu roi rac
	
	/*float n = 3.14;
	switch(n)
	{
		case 3.14:
			printf(" bao loi code do");
			break;
	
	}
	 */
	 
	//------------------------------------------------------	
	scanf("%c", &fL);  // ko care hoa thuong
	
	// co the lam cach duoi, co nhieu cach
	switch (fL)
	{
		case 'A':
		case 'a':
			printf(" Dua cot khong phai la so truong cua ban ");	
			break;
		
		case 'B':	
		case 'b':
			printf(" Ban nang gioi tinh rat tu nhien ");
			break;
		
		case 'C':	
		case 'c':
			printf(" Tinh cam cua ban gan gui va than mat ");
			break;
			
		case 'D':	
		case 'd':
			printf(" Tinh cam cua ban nong nan, manh liet ");
			break;
		
		default:
			printf("Coming soon...\n");
	
	}
	
	/*
	if (fL == 'A' )
		printf(" Dua cot khong phai la so truong cua ban ");	
	else if (fL == 'B' ) 
		printf(" Ban nang gioi tinh rat tu nhien ");	
	else if (fL == 'C' )
		printf(" Tinh cam cua ban gan gui va than mat ");
	else 
		printf("Coming soon...\n");
			
	

	 */
	 
	 return 0;
}
