//Duong Van Phi PC06060
#include <stdio.h>

int main(){
   char mk= 'x';
   printf("Vui long nhap password: ");
   scanf("%c", &mk);
   
   switch(mk){
   	    case 'a':
   	   	    printf("Nha khoa hoc");
   	   	    break;
   		case 'b':
   	   	    printf("Nghien cuu sinh");
   	   	    break;
   	   	case 'c':
   	   	    printf("Lap trinh vien");
   	   	    break;
   	   	case 'd':
   	   	    printf("Bao ve");
   	   	    break;
   	   	default:
   	   	    printf("Ma khong hop le, bao dong!");
   }
   
   return 0;
}

