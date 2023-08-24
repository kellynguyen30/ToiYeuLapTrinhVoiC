#include <stdio.h>
#include <stdlib.h>

// tinh tong cua day so 1 + 2 + 3+ ...+ 100
// tinh tong tu 1 -> 100
// IPO:
//I: DE LAM DC BAI NAY CAN GI?
// KHÔNG CAN VI RO CA ROI
// DAU VAO LA CAI CAN PHAI CO DE XU LI, VA AI DO PHAI DUA CHO MINH  


//P: XU LI DAU VAO, DE CO DAU RA
// CO THE XAI BIEN TRUNG GIAN

//O:DE NAY CAN DAT DUOC DIEU GI? 
// KET QUA CHUNG CUOC, DUA VAO THI NHAN VE GI?
// DAU RA LA TONG //  BIEN CHUA VALUE HOAC CAU THONG BAO GI DO


// TINH TONG 1 + 2 + 3 + 4 + 5 + 6 +....+ 98 + 99 + 100
//				t3 + 3
//					t6 + 4
//						t10 + 5
//							t15 + 6....
//...............................+100 dua vao tong



//	0 1 + 2 + 3 + 4 + 5 + 6 +....+ 98 + 99 + 100
//t0 + 1
//   t1 + 2
// 		t3 + 3
//			t6 + 4
//				t10 + 5
//					
//					
//							
//...............................+100 dua vao tong

// tong = tong + 1 2 3 4 6 ....
//					tu tu di vao
// tong = tong + i ( i chay tu 1 -> 100)
// tong = 0;
// tong = tong + 1; => 1
// tong =  tong + 2; => 3
// tong = tong + 3; => 6

// tong += i ;
// i cu tang tu tu, tong cung se tang, nhoi lien tuc do for nhoi
// lap lai phep cong de t tang dan len
// dua so thi cong len, nho cai tong dang co, cu lap lai
// TONG: 0 // BAN DAU CHUA CO GI

//** THUAT TOAN: NHOI CON HEO  DAT
// tong = 0; cuc ki quan trong // neu ko gan value 0  thi ko biet no bao nhieu luc dau
// for ( i 1 -> 100; i++)
// tong =  tong + i;

// MEO: CONG DAU DUOI VA NHAN SO CAP
// KO LAM DC VS DAY LON XON


int main(int argc, char *argv[]) {
// int sum = 0; // BIEN DAU RA, NEU KO SE LAY RAC CONG TIEP
 	int  acc = 0; // accumulation - tich luy, gom gop, cong don
	printf("This program will show the sum of 100 first integer (1..100)\n");
	
	for (int i = 1; i <= 100; i++) 
	
		acc += i; // acc = acc + i; //5050
		
	printf(" The sum is %d\n", acc);
	
	// neu bo ngoac nhon ngoai 2 cau lenh thi se tinh xong roi in lap lai
		
	return 0;
}





































