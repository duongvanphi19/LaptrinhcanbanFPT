//Duong Van Phi PC06060
#include <stdio.h>
#include <string.h>

void lab7_4(){
	char name[20];
	char cpy_name[20];
	printf("Vui long nhap ten: ");
	gets(name);
	printf("Chuoi da nhap la: %s ", name);
	
	strcpy(cpy_name,name);
	printf("\nChuoi in HOA la: %s ", strupr(cpy_name));
	char x;
	printf("\nVui long nhap ky tu tim kiem: ");
	scanf("%c", &x);
	int i;
	int flag = 0;

	for(i = 0; i < strlen(name); i++){
		if(name[i] == x){
			flag = 1;
		}
	}
	
	if (flag == 1){
	   printf("Da tim thay!");
	}
	else{
		printf("Khong tim thay!");
	}
}
int main(){
    lab7_4();
    return 0;
}

