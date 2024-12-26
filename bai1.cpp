#include<stdio.h>

int linearSearch(int arr[], int n, int target){
	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[] = {3,1,2,6,8,5,4,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 4;
	int result = linearSearch(arr,size,target);
	if(result != -1){
		printf("Tim thay phan tu o chi muc so %d",result);
	}else{
		printf("Khong tim thay phan tu trong mang");
	}
	return 0;
}

