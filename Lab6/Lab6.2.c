//Duong Van Phi PC06060
#include <stdio.h>

void vidu(){
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for (i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void vidu1(){
	printf("\n===[CHUONG TRINH NHAP MANG MANG 2 CHIEU TU BAN PHIM]===\n");
	int i, j, n, m;
	printf("Vui long nhap so hang va cot cua mang 2 chieu a[m][n]: ");
	printf("\nSo hang m = ");
	scanf("%d", &m);
	printf("So cot n = ");
	scanf("%d", &n);
	int a[m][n];
	//nhap mang
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("- a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
    }
    //in mang
    for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
    }
    //kiem tra so 'z' nhap vao co nam trong mang hay khong
    int z, flag;
    printf("\nVui long nhap vao so nguyen z = ");
	scanf("%d", &z);
	//kiem tra
	flag = 0;
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			if(a[i][j] == z){
				flag = 1;
				break;
			}
		}
    }
    
    if (flag == 1){
    	printf("%d co nam trong mang a", z);
	}
	else{
		printf("%d khpng nam trong mang a", z);
	}
}
int main(){
    vidu1();
    return 0;
}

