//Duong Van Phi PC06060
#include <stdio.h>

int main(){
	/*
	//vd1:
	int n;
	printf("Vui long nhap vao 1 so: ");
	scanf("%d", &n);
	printf("So %d la so ", n);
	
	if (n%2==1) printf("le!");
	else printf("chan!");
    */
	//vd 2:
	/*printf("Vui long nhap vao diem (A-F): ");
	scanf("%c", &d);
	switch(d){
		case 'A': printf("Xuat sac"); break;
		case 'B': printf("Gioi"); break;
		case 'C': printf("Kha"); break;
		case 'D': printf("Trung binh"); break;
		case 'F': printf("Yeu"); break;
		default: printf("Ban chua nhap dung dinh dang!"); break;
	}*/
	/*
	//vd 3: in ra so chan trong khoang
	int n, i=0;
	printf("Vui long nhap vao 1 so: ");
	scanf("%d", &n);
	while(i<=n) {
		if(i%2==0) printf("%d\n", i);
		i++;
	}
	*/
	
	//vd 4: in ra bang cuu chuong
	int n, i=1;
	printf("//chuong trinh in ra bang cuu chuong\n");
	printf("Vui long nhap vao 1 so: ");
	scanf("%d", &n);
	printf("====[BANG CUU CHUONG %d]====\n", n);
	while(i<=10) {
		printf("\t%d * %d = %d\n", n, i, n*i);
		i++;
	}
    return 0;
}

