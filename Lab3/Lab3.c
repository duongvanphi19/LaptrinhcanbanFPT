
//Duong Van Phi
//phidvpc06060
#include <stdio.h>
#include <conio.h>
#include <math.h>
 //Lab 3
int main ()
{
  int luachon;
  do{
  system("cls");
  printf ("\nMENU:\n");
  printf ("     [1] - Tinh hoc luc\n");
  printf ("     [2] - Tinh phuong trinh bac 1\n");
  printf ("     [3] - Tinh phuong trinh bac 2\n");
  printf ("     [4] - Tinh tien dien\n");
  printf ("     [0] - (x) Dong chuong trinh\n");
  printf ("\nLua chon cua ban >> ");
  scanf ("%d", &luachon);

  switch (luachon)
    {
    case 1:
      {

	//Bai: Xay dung chuong trinh tinh hoc luc
	float diem;
	printf ("=== CHUONG TRINH TINH HOC LUC ===\n\n");
	printf ("Vui long nhap diem (0-10): ");
	scanf ("%f", &diem);
	printf(" -> Hoc luc: ");
	if (diem >= 9) printf ("Xuat sac");
	else if (diem >= 8) printf ("Gioi");
	else if (diem >= 6.5) printf ("Kha");
	else if (diem >= 5) printf("Trung binh");
	else if (diem >= 3.5) printf("Yeu");
	else printf ("Kem");



      }
      break;
    case 2:
      {
	//Bai 2: Xay dung chuong trinh giai phuong trinh
	//2.1: Phuong trinh dang: ax + b = 0
	float a, b;
	printf ("\n\n=== CHUONG TRINH GIAI PHUONG TRINH BAC 1 ===\n\n");

	printf ("Nhap gia tri a: ");
	scanf ("%f", &a);
	printf ("Nhap gia tri b: ");
	scanf ("%f", &b);

	if (a == 0)
	  {
	    if (b == 0) printf (" -> Phuong trinh da cho co vo so nghiem!");
	    else printf (" -> Phuong trinh da cho vo nghiem!");
	  }
	else printf (" -> Phuong trinh da cho co nghiem: x = %f", -b / a);
      }
	  
      break;
    case 3:
      {
	//2.2: Phuong trinh dang: ax^2 + bx + c = 0
	float a, b, c, delta;	//float a, b;
	printf ("\n\n=== CHUONG TRINH GIAI PHUONG TRINH BAC 2 ===\n\n");
	printf ("Nhap gia tri a: ");
	scanf ("%f", &a);
	printf ("Nhap gia tri b: ");
	scanf ("%f", &b);
	printf ("Nhap gia tri c: ");
	scanf ("%f", &c);

	if (a == 0)
	  {			//Phuong trinh tro thanh dang bx + c = 0
	    if (b == 0)
	      {
			if (c == 0) printf (" -> Phuong trinh da cho co vo so nghiem!");
			else printf (" -> Phuong trinh da cho vo nghiem!");

	    }
	    else printf (" -> Phuong trinh da cho co nghiem: x = %f", -c / b);

	  }
	else//phuong trinh bac 2
	  {
	    delta = b * b - (4 * a * c);
	    if (delta < 0) printf (" -> Phuong trinh da cho vo nghiem!");
	    else if (delta == 0) printf (" -> Phuong trinh da cho co nghiem kep: x = %f",-b / (2 * a));
	    else printf(" -> Phuong trinh da cho co 2 nghiem phan biet: x1 = %f, x2 = %f ",
		   (-b - sqrt (delta)) / (2 * a),
		   (-b + sqrt (delta)) / (2 * a));
		}
	  
      }
      break;
    case 4:
      {
      	
	// Bai 3: Xay dung chuong trinh tinh tien dien
	    float kW, tien=0;
	    printf("Vui long nhap vao so kW: ");
	    scanf("%f", &kW);
	    
		if(kW>400) tien += (kW-400)*2.927;
		if(kW>300) tien += (kW-300)*2.834;
		if(kW>200) tien += (kW-200)*2.536;
		if(kW>100) tien += (kW-100)*2.104;
		if(kW>50)  tien += (kW-50)*1.734;
		tien += 50*1.678;
		
		printf(" -> So tien phai tra cho %dkW dien la: %f",(int)kW, tien);
      }
      break;
    case 0:
      break;
    default:
      printf ("Lua chon khong hop le!\n");
    }
    printf("\nAn phim bat ky de tiep tuc...");
    getch();
}while(luachon !=0);

  // Bai 4: Xay dung menu cho chuong trinh su dung switch-case
  return 0;
  
  
//  switch(x){
//  	case 1:
//  		...
//  		break;
//    case 2: 
//        ...
//        break;
//    default:
//    	...
//  }
}

