#include<stdio.h>

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n - i -1;j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){
	int arr[] = {3,5,2,1,6,9};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,n);
	printf("Mang sau khi sap xep");
	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	return 0;
}

