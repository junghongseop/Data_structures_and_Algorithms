// 약수 개수 알고리즘
#include <stdio.h>
int a[50001];
int main() {
	int n, cnt, i, j;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
	//	cnt = 0;
		for(j=i;j<=n;j=i+j){
			a[j]++;
		}
	}
	for(i=1;i<=n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
