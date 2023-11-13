#include <stdio.h>

int main() {
	int a[101];
	int n, cnt = 0, max;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	max = a[n-1];
	for(int i=n-2;i>=0;i--){
		if(a[i]>max){
			max=a[i];
			cnt++;
		}
	}
	printf("%d", cnt);
    return 0;
}
