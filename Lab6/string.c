//Duong Van Phi PC06060
#include <stdio.h>
#include <string.h>
char names[3][20] = {"Duong Van Phi", "Nguyen Thai Duong", "Nguyen Hoang Kha"};

void nhap_string(){
	
	int i;
    for(i=0; i<3; i++){
    	printf("Vui long nhap ten cua ban: ");
    	gets(names[i]);

	}

}

void find_name(){
	 char s[20];
	 printf("Vui long nhap vao ten can tim: ");
	 gets(s);
	 int i, flag = -1;
	 for(i=0; i<3; i++){
	     if (strstr(names[i], s)){
			flag = 1;
			break;
	     }
	 }
	 if (flag == 1){
	 	printf("Da tim thay!");
	 }
	 else if(flag  == -1){
	 	printf("Khong tim thay!");
	 }
	 
	 
	 
	 
}
void xuat_string(){
	int i;
	for(i=0; i<3; i++){
        printf("%d ", i);
    	puts(names[i]);
    }
}

void tt(){
	xuat_string();
	find_name();
}


int main(){
    tt();
    return 0;
}

