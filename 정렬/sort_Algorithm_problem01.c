// 음수 포함 정렬 알고리즘
#include <stdio.h>
int main() {
	int a[101];
	int n, temp;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>0 && a[j+1]<0){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
