#include<stdio.h>

int binarySearch(int arr[], int size, int target){
	int low = 0;
	int high = size - 1;
	while(low <= high){
			int mid = low + (high - low) / 2;
		if(arr[mid] == target){
			return mid;
		}else if(arr[mid] > target){
			high = mid - 1; 
		}else{
			low = mid + 1;
		}
	}
	return -1;
}
int recursiveBinarySearch(int arr[], int left, int right, int target){
	if (left > right) {
        return -1; 
    }
    int mid = left + (right - left) / 2; 
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] > target) { 
        return recursiveBinarySearch(arr, left, mid - 1, target);
    } else {
        return recursiveBinarySearch(arr, mid + 1, right, target);
    }

}
int main(){
int arr[] = {3,1,2,6,8,5,4,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 6;
	int a;
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			 if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
		}
	}
//	int result = binarySearch(arr,size,target);
	int result = recursiveBinarySearch(arr,a, size,target);
	if(result != -1){
		printf("Tim thay phan tu o chi muc so %d",result);
	}else{
		printf("Khong tim thay phan tu trong mang");
	}
	return 0;
}

