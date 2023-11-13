#include <stdio.h>

int main() {
	int n, age, max=-1, min=200;
	scanf("%d", &n);
	for(int i=0; i<=n; i++){
		scanf("%d", &age);
		if(age>max) max=age;
		if(age<min) min=age;
	}
	printf("%d", max-min);
	return 0;
}
