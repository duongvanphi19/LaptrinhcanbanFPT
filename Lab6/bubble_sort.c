//Duong Van Phi PC06060
#include <stdio.h>

void bubble_sort(int *arr, int len);
void duyet_mang(int *arr, int len);
void swap(int *a, int *b);

void bubble_sort(int *arr, int len){
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < len - i -1; j++){
            if(arr[j] < arr[j+1])
			    swap(&arr[j], &arr[j+1]);
			
		}
}

}

void duyet_mang(int *arr, int len){
	int i;
	for(i = 0; i < 5; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
    int arr[5] = {4, 65, -99, 100, 0};
	printf("Arr: ");
	duyet_mang(arr, 5);
	bubble_sort(arr, 5);
	printf("Bubble sort: ");
	duyet_mang(arr, 5);
	

    return 0;
}

