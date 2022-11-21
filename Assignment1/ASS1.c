//Duong Van Phi PC06060
#include <stdio.h>
#include <windows.h>
int main(){
	int quit = 0;
	do{
	system("cls");
	int luachon;
	char* menu[] = {
		"Kiem tra so nguyen",
		"Tim Uoc so chung va Boi so chung cua 2 so",
		"Tinh tien Karaoke",
		"Tinh tien dien",
		"Doi tien",
		"Tinh lai suat vay ngan hang",
		"Thoat chuong trinh"
	};
	int i;
	printf("=====[MENU]=====\n");
	for(i = 0; i < 7; i++){
		printf("%4d. %s\n", i, menu[i]);
	}
	
//	printf("=====[MENU]=====\n");
//	printf("1. Tinh tien d\n");
//	printf("2. Giai phuong trinh bac 1\n");
//	printf("3. Giai phuong trinh bac 2\n");
//	printf("0. Thoat menu\n");
	printf("Lua chon cua ban: ");
	scanf("%d", &luachon);
	
	switch(luachon){
		case 0: printf("--> Ban da chon chuc nang \"%s\"", menu[0]); break;
		case 1: printf("--> Ban da chon chuc nang \"%s\"\n", menu[1]); break;
		case 2: printf("--> Ban da chon chuc nang \"%s\"\n", menu[2]); break;
		case 3: printf("--> Ban da chon chuc nang \"%s\"\n", menu[3]); break;
		case 4: printf("--> Ban da chon chuc nang \"%s\"\n", menu[4]); break;
		case 5: printf("--> Ban da chon chuc nang \"%s\"\n", menu[5]); break;
		case 6: quit = 1; break;
		default: printf("--! Chuc nang khong ho tro! Vui long chon lai!\n");
	}
	printf("\nAn phim bat ky de tiep tuc! ");
	getch();
	
}while(!quit);
	return 0;
}

