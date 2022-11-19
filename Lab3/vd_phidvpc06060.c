//Duong Van Phi PC06060
#include <stdio.h>

int main(){
	printf("<=====[CHUONG TRINH TINH GIAI THUA]=====>\n");
	int i=1, n, sum=1;
	printf("Vui long nhap vao 1 so: ");
	scanf("%d", &n);
	for(; i<=n; i++){
		sum*=i;
		//printf("%d", i);
	}
	printf(" --> %d! = 1*2*3*...*%d = %d", n, n, sum);

	
	
	printf("\n\n<=====[CHUONG TRINH TINH TICH CAC SO TU MIN DEN MAX]=====>\n");
	int min, max;
	sum=1;
	//int i;
	printf("Vui long nhap vao so nho nhat, lon nhat: ");
	scanf("%d %d", &min, &max);
	for(i=min; i<=max; i++){
		sum*=i;
		//printf("%d", i);
	}
	printf("Tong cac so tu %d den %d la: %d", min, max, sum);

    printf("\n\n<=====[CHUONG TRINH TIM SO LON HON]=====>\n");
    int a, b;
    printf("Vui long nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    if(a<b) a = b;
    //a = a>b?a:b;
    printf("So lon hon la: %d", a);
   
    return 0;
}

