#include <stdio.h>
#include <stdlib.h>

// vong lap vo tan, vo cuc
// in cac so tu nhien tu 1..100

int main(int argc, char *argv[]) {
	
	
	printf(" The list of numbers from 1 to 100\n");
	int count = 1;
	for (;;) // KHONG KHOI DAU, KHONG KET THUC, KO DEM GI CA
	{	
		//int count = 1; // neu de trong day se chay vo tan 
						// vi moi vua tang len thì lai phai quay ve count = 1
		printf("%d ", count);
		count++;
		if( count == 101)
			break; // dk thoat dat trong for
	
	} 
	
	return 0;
}

// bai tap 
// tinh n! = 1.2.3.4.5....n
// tinh tong 1 + 2 + 3 + 4 +....+ n
// nhap 1 day so 1 10 1000 -5 100 201 300...
// - dem xem da nhap bao nhieu so?
// -  dem xe da nhap bao nhieu chan, le, chia het 10
// - hoi xe da co nhap may so 5
// - tong cua dam so chan
// - tong cua dam chia het 3
// - co so 10 xuat hien trong dam da nhap hay ko?
