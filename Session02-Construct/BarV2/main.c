#include <stdio.h>
#include <stdlib.h>

// VIET APP NHAP VAO NAM SINH, SAU DO TRA LOI RANG DU TUOI VAO QUAN BAR HAY KO?

// DE GIAI QUYET BAI NAY: TA CAN GÌ??
// MO HINH IPO

//INPUT:  TUOI, THÌ CAN NAM SINH
// CÓ INPUT THÌ CAN BIEN, LUU VALUE CHO INPUT 

//PROCESS: XU LI GÌ?? 
//			CO NAM SINH, TA RA TUOI
//			QUYET DINH VAO BAR HAY KO VÀ THÔNG BÁO

//OUTPUT: CAN XUAT KET QUA GÌ? CHO VAO BAR HOAC KHÔNG!!

int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Welcome to Thien Duong bar\n");
	printf("Please show your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2023 - yob; // cong thuc loai nguoi che ra
	
	if (age >= 18) // menh de so sanh 
		printf("Không say không ve. Let's chill\n");
		
	else // bao ham viec if (age < 18)
		printf("Hey kid. Go home now!\n");
		// else có thêm tính chat loai truc
		// nghia la neu CPU chay vao hem if, xong if thi no di luon,
		// ko them hoi else
		// khac hoan toan viec xai 2 lenh if doc lap nhu V1 thì CPU PHAI KTRA 2 CAU LENH
	
	return 0;
}



