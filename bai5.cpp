#include<stdio.h>

void insertionSort(int arr[], int n){
	for(int i = 1;i < n;i++){
		int key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main(){
	int arr[] = {3,5,2,1,6,9};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr,n);
	printf("Mang sau khi sap xep\n");
	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	return 0;
}
// do phuc tap thoi gian la O(n^2)
