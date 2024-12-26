#include<stdio.h>

void selectionSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int minIndex = i;
		for(int j = i + 1; j < n;j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}
int main(){
	int arr[] = {3,5,2,1,6,9};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr,n);
	printf("Mang sau khi sap xep\n");
	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	return 0;
}

