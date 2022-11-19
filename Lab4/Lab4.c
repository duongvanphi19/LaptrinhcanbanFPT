//Duong Van Phi P1C06060
#include <stdio.h>

int main(){
   //Bai 1: Tinh trung binh tong cac so tu nhien chia het cho 2
   printf("====TRUNG BINH TONG CAC SO TU NHIEN CHIA HET CHO 2====\n");
   int i, min, max, tong=0, n=0;
   printf("Vui long nhap so nho nhat, lon nhat: ");
   scanf("%d %d", &min, &max);
   i = min;
   while(i<=max){ 
   	 if(i % 2 == 0){
   	 	printf(" %d\n", i);
   	 	tong += i;
   	 	n++;
	}
	i++;
   }
   printf("_____ \n %d\n", tong);
   printf("Trung binh tong cac so tu nhien chia het cho 2 tu %d toi %d la: %d/%d = %d", min, max, tong, n, tong/n);
   
   //Bai 2: Chuong trinh xac dinh so nguyen to
   printf("\n\n====CHUONG TRINH XAC DINH SO NGUYEN TO====\n");
   int x, j, count=0;
   scanf("%d", &x);
   for(j=2; j < x && count==0; j++){
       if(x % j == 0){
		   //printf("%d", j);
		   goto khongphaisnt;
	   }
	}
	printf("%d la so nguyen to!", x);
	khongphaisnt: printf("%d khong la so nguyen to!", x);
	
	//Bai 3: Xay dung chuong trinh so chinh phuong
	printf("\n\n====CHUONG TRINH TIM SO CHINH PHUONG====\n");
	printf("Vui long nhap vao 1 so: ");
	scanf("%d", &x);
	for(i = 0; i < x; i++){
		if(i*i == x){
			//printf(" -> %d la so chinh phuong!", x);
			goto socp;
		}
	}
	printf(" -> %d khong phai la so chinh phuong!", x);
	socp: printf(" -> %d la so chinh phuong!", x);

   return 0;
}

