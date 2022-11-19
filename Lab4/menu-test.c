//Duong Van Phi PC06060
//Simple menu with cursor
#include <stdio.h>
#include <conio.h>

int menu(){
	char *options[]= {"New", "Open", "Setting", "Exit"};
  	int cursor = 1;
  	char dir;

	do{
    //clrscr();
    	printf(" w - UP\n s - DOWN\n\n");

    	int i = 0;
    	switch(dir){
    		case 's':
    		case 'A':
    		//cursor+=1;
    			cursor = cursor+1 > 3 ? 0: cursor+1;
    			break;
    		case 'w':
    		case 'B':
    		//cursor-=1;
    			cursor = cursor-1 <0 ? 3: cursor-1;
    			break;
		}
   		for (; i < 4; i++){
   	    	if (i == cursor){
   	   	    	printf(" -> ");
		  	}
			else{
				printf("    ");
			}
   	    	printf("%s\n", options[i]);
   		}
    	dir = getch();
   		system("cls");

	}while(dir != 13);

	printf("Welcome to %s!", options[cursor]);
	return cursor;
}

int main(){
	menu();
	printf("itsfoss");
    return 0;
}

