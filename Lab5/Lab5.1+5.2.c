//Duong Van Phi PC06060
#include <stdio.h>
#define PI 3.14


//vd:
int sum(int a, int b){
	return a+b;
}

int sum1(){
	int a, b;
	printf("Vui long nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Vui long nhap so thu hai: ");
	scanf("%d", &b);
	return a+b;
}
//
float chuvihinhtron(float r){
	return 2*PI*r;
}

//===Lab 5===
//Lab5.1 Ham tim gia tri lon nhat

int giatrilonnhat(int a, int b, int c){
    int max;
    
	if(a>b) max = a;
	else max = b;
	if(c>max) max = c;
    return max;
}

//lab 5.2 Ham kiem tra nam nhuan
void kiemtranamnhuan(int nam){
	int flag = 0;
	if(nam%400 == 0 || (nam%4==0 && nam%100 !=0))
		flag = 1;
		
	if (flag == 0)
	    printf("%d khong phai la nam nhuan!\n", nam);
	else if (flag == 1)
	    printf("%d la nam nhuan!\n", nam);
		
}

//Lab 5.3 Ham hoan vi
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
    //printf("Chu vi: %f", chuvihinhtron(10));
    int a, b, c;
	printf("===[CHUONG TRINH TIM SO LON NHAT TRONG 3 SO]===\n");
	printf("Vui long nhap vao a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
    int max = giatrilonnhat(a, b, c);
    printf("Max = %d\n", max);
    
    //
	printf("\n===[CHUONG TRINH KIEM TRA NAM NHUAN]===\n");
    int nam;
	printf("Vui long nhap nam: ");
	scanf("%d", &nam);
	
    kiemtranamnhuan(nam);
    
    //
    printf("\n===[CHUONG TRINH HOAN VI HAI SO]===\n");
    a = 4, b = 20;
    printf("Truoc khi hoan vi: a = %d   b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan vi: a = %d   b = %d\n", a, b);
    
    

    return 0;
}

