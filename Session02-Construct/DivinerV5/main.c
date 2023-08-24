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
		 // nguoc lai A a, se la khong la A a, hay noi thang la BbCcDd....
		// trong dam else nay co ca BbCcDd...minh lai chan 
		// if tiep vi co qua nhieu thu ki tu trong else 
		//sure ko phai la Aa, con qua nhieu thu ki tu
		
	else // ko phai la Aa
	{ // fL = BbCcDd....
		if (fL == 'B' ) // hoi hep hon, biet may khac Aa roi
						// nhung co phai la Bb hem?
			printf(" Ban nang gioi tinh rat tu nhien ");	
		// nguoc lai cua ko bang Bb se la gi?
		else // fL ko phai la AaBb
		{
			// hem la la CcDdEe.... hoi them co phai ma la Cc hem
			if (fL == 'C' )
				printf(" Tinh cam cua ban gan gui va than mat ");
			else // fL ko phai AaBbCc
				printf("Coming soon...\n");
		}
		
	}
	
	
	
	
	return 0;
}
