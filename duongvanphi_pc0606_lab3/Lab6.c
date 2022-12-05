// Duong Van Phi PC06060
/// Lab 6 MANG/ARRAY
#include <stdio.h>

void bai1();
void bai2();
void bai3();
void bai4();
void nhapmang1chieu(int *arr, int len);
void inmang1chieu(int *arr, int len);
void swap(int *a, int *b);
void sapxepgiamdan(int *arr, int len);
int timmin(int *arr, int len);
int timmax(int *arr, int len);


int main()
{
	printf("#LAB6 / MANG");
	bai1();//trung binh tong cac so chua het cho 3 trong mang 1 chieu
	bai2();//tim min, max trong mang 1 chieu
	bai3();//sap xep cac phan tu trong mang 1 chieu theo thu thu giam dan
	bai4();
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sapxepmanggiamdan(int *arr, int len){
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = i+1; j < len; j++)
		{
			if (arr[j] > arr[i])
			{
				swap(&arr[j], &arr[i]);
			}
		}
	}
}

void nhapmang1chieu(int *arr, int len){
	int i = 0;
	for (; i < len; i++)
	{
		printf("-> arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int timmin(int *arr, int len){
	int i, min = arr[0];
	for (i = 0; i < len; i++)
	{
		if(arr[i] < min) min = arr[i];
	}
	return min;
}

int timmax(int *arr, int len){
	int i, max = arr[0];
	for (i = 0; i < len; i++)
	{
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

void inmang1chieu(int *arr, int len){
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void bai1()
{
	// Lab 6.1
	printf("\n===[CHUONG TRINH TIM TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG]===\n");
	int len;
	printf("Vui long nhap so luong phan tu cua mang: ");
	scanf("%d", &len);
	int arr[len];
	printf("Da khoi tao mang so nguyen \"a\" %d phan tu!\n");
//	// nhap mang
	nhapmang1chieu(arr, len);
	
	printf("Cac so chia het cho 3: ");
	int i, count = 0, sum = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] % 3 == 0)
		{
			sum += arr[i];
			count++;
			printf("%d   ", arr[i]);
		}
	}
	if(count > 0){
		printf("\nTrung binh tong: %f\n", (float)sum / count);
	}
	
}

void bai2()
{
	//Lab 6.2\
	//Tim gia tri lon nhat va nho nhat trong mang
	printf("\n===[CHUONG TRINH TIM GIA TRI MIN, MAX TRONG MANG]===\n");
	int len;
	printf("Vui long nhap so luong phan tu cua mang: ");
	scanf("%d", &len);
	int arr[len];
	printf("Da khoi tao mang so nguyen \"a\" %d phan tu!\n");
	// nhap mang
	int i;
	nhapmang1chieu(arr, len);
	//in mang
	printf("Mang da khoi tao: ");
	inmang1chieu(arr, len);
	
	//tim min. max
	int min = timmin(arr, len);
	int max = timmax(arr, len);
	
	printf("max = %d; min = %d\n", max, min);
}

void bai3()
{
	// Lab 6.3
	// Sap xep mang theo thu tu giam dan
	printf("\n===[CHUONG TRINH SAP SEP MANG THEO THU TU GIAM DAN]===\n");
	int len, i, j;
	printf("Vui long nhap so luong phan tu cua mang: ");
	scanf("%d", &len);
	int arr[len];
	printf("Da khoi tao mang so nguyen \"a\" %d phan tu!\n");
	// nhap mang
	nhapmang1chieu(arr, len);
	//in mang
	printf("Mang truoc khi sap xep: ");
	inmang1chieu(arr, len);
	//sap xep
	sapxepmanggiamdan(arr, len);
	
	printf("Mang da duoc sap xep giam dan: ");
	inmang1chieu(arr, len);
}

void bai4(){
	printf("\n===[CHUONG TRINH TINH BINH PHUONG PHAN TU TRONG MANG 2 CHIEU]===\n");
	int i, j, n, m;
	printf("Vui long nhap so luong phan tu cua mang 2 chieu a[m][n]: ");
	printf("\nm = ");
	scanf("%d", &m);
	printf("n = ");
	scanf("%d", &n);
	int arr[m][n];
	//printf("Da khoi tao mang so nguyen \"a\" %d phan tu!\n");
	for(i = 0; i<m; i++){
		for(j=0; j<n; j++){
			printf("-> arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
	}
}
//	for(i = 0; i<m; i++){
//		for(j=0; j<n; j++){
//			arr[i][j] = arr[i][j] * arr[i][j];
//		}
//	}	//
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}
}
