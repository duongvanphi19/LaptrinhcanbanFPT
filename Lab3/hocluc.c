//Duong Van Phi PC06060
#include <stdio.h>

int main(){
   	float diem;
	printf ("=== CHUONG TRINH TINH HOC LUC ===\n\n");
	printf ("Vui long nhap diem (0-10): ");
	
	scanf ("%f", &diem);
	
	printf(" -> Hoc luc: ");
	if (diem >= 9)        printf ("Xuat sac");
	else if (diem >= 8)   printf ("Gioi");
	else if (diem >= 6.5) printf ("Kha");
	else if (diem >= 5)   printf ("Trung binh");
	else if (diem >= 3.5) printf ("Yeu");
	else                  printf ("Kem");
	
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
			if (c == 0)
			  {
		    	printf (" -> Phuong trinh da cho co vo so nghiem!");
		  	}
			else
		  	{
		    	printf (" -> Phuong trinh da cho vo nghiem!");
		  	}
	    }
	    else
	      {
		printf (" -> Phuong trinh da cho co nghiem: x = %f", -c / b);
	      }
	  }
	else//phuong trinh bac 2
	  {
	    delta = b * b - (4 * a * c);
	    if (delta < 0)
	      {
		printf (" -> Phuong trinh da cho vo nghiem!");
	      }
	    else if (delta == 0)
	      {
		printf (" -> Phuong trinh da cho co nghiem kep: x = %f",
			-b / (2 * a));
	      }
	    else
	      {
		printf
		  (" -> Phuong trinh da cho co 2 nghiem phan biet: x1 = %f, x2 = %f ",
		   (-b - sqrt (delta)) / (2 * a),
		   (-b + sqrt (delta)) / (2 * a));
		}
	  }

   return 0;
}

