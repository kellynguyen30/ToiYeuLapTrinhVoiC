#include <stdio.h>
#include <stdlib.h>

// viet app nho nho in ra so lon nhat trong 3 so nhap tu ban phim

int main(int argc, char *argv[]) {
	
	int a, b, c, max; // bien trung gian, phat co
	printf("Find max between three numbers\n");
	printf("Inpute three intefers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	// nguyen tac suy doan, gia dinh vo toi, se phat co khi co tin hieu
	
	max = a; // co the se la sai, thi sua khi thay can sua
	if (b > max)
		max = b; // co toi roi, phat co thoi 
	if (c > max) // co the max dang la a, hoac b
		max = c; 
		
	printf("Max number among three ones %d %d %d is: %d", a, b, c, max);
	return 0;
}



