#include <stdio.h>

int key, n, result;
int arr[5] = {9, 5, 8, 3, 7};

int search(int arr[], int n, int key){
	for(int i=0; i<n; i++){
		if(key==arr[i]) return i;
	}
	return -1;
}

int main(){
	n = sizeof(arr)/sizeof(int);
	scanf("%d", &key);
	result = search(arr, n, key);	
	
	if(result==-1) printf("탐색 실패");
	else printf("탐색 성공, 탐색 횟수: %d", result+1); 
}