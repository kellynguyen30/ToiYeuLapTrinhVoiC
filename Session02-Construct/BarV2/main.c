#include <stdio.h>
#include <stdlib.h>

// VIET APP NHAP VAO NAM SINH, SAU DO TRA LOI RANG DU TUOI VAO QUAN BAR HAY KO?

// DE GIAI QUYET BAI NAY: TA CAN G�??
// MO HINH IPO

//INPUT:  TUOI, TH� CAN NAM SINH
// C� INPUT TH� CAN BIEN, LUU VALUE CHO INPUT 

//PROCESS: XU LI G�?? 
//			CO NAM SINH, TA RA TUOI
//			QUYET DINH VAO BAR HAY KO V� TH�NG B�O

//OUTPUT: CAN XUAT KET QUA G�? CHO VAO BAR HOAC KH�NG!!

int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Welcome to Thien Duong bar\n");
	printf("Please show your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2023 - yob; // cong thuc loai nguoi che ra
	
	if (age >= 18) // menh de so sanh 
		printf("Kh�ng say kh�ng ve. Let's chill\n");
		
	else // bao ham viec if (age < 18)
		printf("Hey kid. Go home now!\n");
		// else c� th�m t�nh chat loai truc
		// nghia la neu CPU chay vao hem if, xong if thi no di luon,
		// ko them hoi else
		// khac hoan toan viec xai 2 lenh if doc lap nhu V1 th� CPU PHAI KTRA 2 CAU LENH
	
	return 0;
}



