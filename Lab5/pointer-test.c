//Duong Van Phi PC06060
#include <stdio.h>

int test(int a){
	int * ii;
	ii = a;
	ii +=1;
	printf("%d\n", *ii);
	a+=1;
	return a;
}

int main(){
	int a = 1;
    printf("%d\n", test(&a));
    printf("%d\n", a);
    return 0;
}

