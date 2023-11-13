#include <stdio.h>
int main() {
	int a,b,i;
	int sum = 0;
	scanf("%d %d", &a, &b);
	for(i = a; i<b; i++){
		sum=sum+i;
		printf("%d + ", i);
	}
	
	printf("%d = %d", i, sum+i);
	return 0;
}