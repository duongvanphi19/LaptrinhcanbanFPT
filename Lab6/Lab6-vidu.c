//Duong Van Phi PC06060
//Lab 6
//Vi du ve mang
#include <stdio.h>

void vidu1(){
	//khoi tao mang va gan gia tri cho mang
	int a[] = {3, 2, 5};

    //duyet mang a
	int i;
	printf("Mang a: ");
	for (i = 0; i < 3; i++) printf("%d  ", a[i]);
    printf("\n");
    int b[3];
    //gan phan tu mang a cho mang b
    for (i = 0; i < 3; i++) b[i] = a[i];

    //duyet mang b
   	printf("Mang b: ");
    for (i = 0; i < 3; i++) printf("%d  ", b[i]);
    printf("\n");
}

void vidu2(){
	//gan gia tri cho mang tu nguoi dung nhap vao
	int n = 5;
	int i, a[n];
	printf("Nhap gia tri cho mang a[%d]: \n", n);
	for(i = 0; i < n; i++){
		printf("- a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Mang a: ");
    for (i = 0; i < n; i++) printf("%d  ", a[i]);
	//kiem tra z co ton tai trong mang a hay khong
	int z;
	printf("\nVui long nhap gia tri z: ");
	scanf("%d", &z);
	int index = -1;
	for (i = 0; i < n; i++) {
		if(a[i] == z) {
			index = i;
			break;
		}
	}
	if(index > -1) printf("%d ton tai trong mang tai a[%d]!", z, index);
	else printf("%d khong ton tai trong mang a tai a!");
}



int main(){
    vidu1();
    vidu2();
    return 0;
}

