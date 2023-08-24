#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 3;
	int result = 10 - 30; // viet result = 7 cho lành
	
	result = a - b; // tinh toan di roi gan vao bien result
	printf("a = %d\nb = %d\n", a, b);
	printf("result = %d\n", result); // ket qua = 7, tai 1 thoi diem chi luu 1 value
	
	// phep nhan chia
	
	result =  a * b;
	printf("result = %d\n", result);  // 30
	
	result = a / b; // CHIA NGUYEN, BOI VI RESULT LA SO NGUYEN 
	printf("result = %d\n", result);  // KET QUA LA 3
	
	//float r = a / b;
	//printf("r = %d\n", r); // keu qua la 0 vi so thuc nhung %d - sai  
	
 	//r = a / b;
	//printf("r = %f\n", r); // 3.000000 - phep chia sai 
	
	 //float re = a * 1.0 /b; // 3.333333 - oke 
	// float re = a / b * 1.0; // 3.000000 - sai vì chia truoc xong moi nhan, 
							// nguyen chia vs nguyen la 3 
							
	float re = a / (b * 1.0); 	 // 3.333333 - oke 	- thay doi do uu tien, lam trong ngoai truoc			
	printf("re = %f\n", re);
	//---------------------------------------------------------------------------------------
	// PHEP TOAN DAC BIET, 1 NGOI ( 1 SO HANG), TANG TU THAN 
	int n = 10;
	// 1 n dang bang may 
	
	printf (" n = %d\n", n);
	
	// 2 nha n o dau 
	printf (" n addr = %u\n", &n);
	
	// 3 tui muon tang n len 1 don vi/1 gia tri
	//n = 11; // sai, dich la gan n = 11, on off vùng ram thanh con so 11
	// hong co tinh toan, dau co tang, tang can phai co xu li
			
		n = n + 1; // doc: n = n se duoc gan 1 gia tri nao do, la may tu tu xem
					// PHEP TINH NAY GOI LA PHEP TANG TU THAN, TU LAM RA TIEN BO SUNG VAO VI
					// age = 2022 - yob; // khong tang giam tu than
	printf("#1 increasing by 1: n = %d\n", n); //11
	
	// 4 tui muon tang n len tiep 1 don vi nua -> n = 12 
	//n = n + 1; oke nhung chua hay 
	n += 1; // viet tat hon , tui n muon tang 1, + roi = gan luon 
	printf("#2 increasing by 1: n = %d\n", n); // 12 
	
	// 5  tui muon tang n len 1 nhat nua 
	
	//n += 1; oke nhung pro hon se viet khac
	n++;
	printf("#3 increasing by 1: n = %d\n", n); // 13
	
	// 6 tui van muon tang them 1 nhat nua 
	++n;
	printf("#4 increasing by 1: n = %d\n", n); // 14 
	//---------------------------------------------------------------------------------------------
	// XET RIENG ++ -- 
	int m = 10;
	printf("m = %d\n", m); // m = 10
	//int r = m++; // cau lenh nay se cho rang à gán truoc duoc nen gan r = m truoc roi moi tinh
	
	int r = ++m; // 11 cau lenh nay cung se xem xet gan truoc, nhung khong the gan r vs ++ nen buoc phai tinh toan trc
	printf("r = %d; m = %d\n", r, m); 
 //------------------------------------------------------------
 // PHEP TU THAN 
 // 1 TUI MUN TANG M LEN 1 DON VI
	m++;
	printf("m  now = %d\n", m); // 12
// 2. tui muon tang m len 8 don vi, de duoc 20
// m++++++++ ko dc
	m += 8;
	printf("for the last m  now = %d\n", m); // 20
	
	// tang len 1 luong nhat dinh ta dung toan tu tu than 
	
	
	
	
	
	return 0;
	
}
