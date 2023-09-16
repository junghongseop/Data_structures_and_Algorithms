#include <stdio.h>

int main(){
	int list[] = {5, 3, 8, 1, 2, 7};
	int n, temp, min;
	n = sizeof(list)/sizeof(int);
	
	for(int i = 0; i < n-1; i++){
		min = i;
		for(int j = i+1; j<n; j++){
			if(list[j]<list[min]) min = j;
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
		for(int k = 0; k < n; k++){
			printf("%d ", list[k]);
		}
		printf("\n");
	}
	for(int i = 0; i<n; i++){
		//printf("%d ", list[i]);
	}
	return 0;
}