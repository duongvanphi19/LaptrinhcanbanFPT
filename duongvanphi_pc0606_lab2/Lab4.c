//Duong Van Phi P1C06060
#include <stdio.h>

int main(){
   do{
   int luachon;
   printf ("\nMENU:\n");
   printf ("     [1] - Tinh trung binh tong\n");
   printf ("     [2] - Tim so nguyen to\n");
   printf ("     [3] - Tim so chinh phuong\n");
   printf ("     [0] - (x) Dong chuong trinh\n");
   printf ("\nLua chon cua ban >> ");
   scanf ("%d", &luachon);
   switch(luachon){
   case 1:
   	{

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
} break;
case 2:
	{

   //Bai 2: Chuong trinh xac dinh so nguyen to
   printf("\n\n====CHUONG TRINH XAC DINH SO NGUYEN TO====\n");
   int x, j, count=0;
   scanf("%d", &x);
   if(x<2) count = 1;
   for(j=2; j < x && count==0; j++){
       if(x % j == 0){
		   //printf("%d", j);
		   count++;
	   }
	}
	if (count==0) printf("%d la so nguyen to!", x);
	else printf("%d khong la so nguyen to!", x);
	
	//Bai 3: Xay dung chuong trinh so chinh phuong
	int i, check=0;
	printf("\n\n====CHUONG TRINH TIM SO CHINH PHUONG====\n");
	printf("Vui long nhap vao 1 so: ");
	scanf("%d", &x);
	
	for(i = 0; i < x+1; i++){
		if(i*i == x){
			check = 1;
			break;
		}
	}
	if (check==0) printf(" -> %d khong phai la so chinh phuong!", x);
	else printf(" -> %d la so chinh phuong!", x);
} break;
	case 0: return 0;
	default: printf("Lua chon khong phu hop. Vui long chon lai!\n");
}
}while(1);
   return 0;
}

