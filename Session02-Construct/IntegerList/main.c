#include <stdio.h>
#include <stdlib.h>

// IN RA CÁC CON SO TU 1..100
//IPO
//INPUT: KO CAN DAU VAO, VI MOI THU RO, IN TU 1..100
// PROCESS: KO PHUC TAP, PRINTF
//OUTPUT: IN RA THÔI
int main(int argc, char *argv[]) {
	printf("The list of integers from 1..100\n");
//	printf(" 1 2 3 4 5 6 7 8 9 10..."); // ko nên
	
 	for (int i = 1; i <=100; i++)
		printf("%d\t", i);
	//i: index, chi muc, so dem
	// bien local-sieu cuc bo, dung trong for
	// het for het bien
	
	
	return 0;
}
