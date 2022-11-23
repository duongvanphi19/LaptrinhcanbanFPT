//Duong Van Phi PC06060
#include <stdio.h>
#define PI 3.14

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

float chuvihinhtron(float r){
	return 2*PI*r;
}

///lab 5
//5.1 Ham tim gia tri lon nhat

int giatrilonnhat(int a, int b, int c){
    int max;
    
	if(a>b) max = a;
	else max = b;
	if(c>max) max = c;
    return max;
}

//lab 5.2 Ham kiem tra nam nhuan
void kiemtranamnhuan(int nam){
	if(nam%400 == 0 || (nam%4 == 0 && nam%100 == 1))
	    printf("Nam nhuan");
	else
		printf("Nam khong nhuan");
}

int main(){
    //printf("Chu vi: %f", chuvihinhtron(10));
    int max = giatrilonnhat(1, 2, 3);
    printf("Max = %d", max);
    kiemtranamnhuan(2024);
    return 0;
}

