#include <stdio.h>
int main() {
	int a, i;
	int sum = 1;
	scanf("%d", &a);
	printf("1");
	for(i=2; i<a; i++){
		if(a%i==0) {
			sum = sum+i;
			printf("+ %d ", i);
		}
	}
	printf("= %d", sum);
	return 0;
}
