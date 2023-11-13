#include <stdio.h>

int a[60], b[60];

int main(){
	char str[101];
	
	scanf("%s", str);
	for(int i=0; str[i] != '\0'; i++){
		if(str[i]>='A' && str[i]<='Z') a[str[i]-64]++;
		if(str[i]>='a' && str[i]<='z') a[str[i]-70]++;
	}
	
	scanf("%s", str);
	for(int i=0; str[i] != '\0'; i++){
		if(str[i]>='A' && str[i]<='Z') b[str[i]-64]++;
		if(str[i]>='a' && str[i]<='z') b[str[i]-70]++;
	}
	for(int i=1; i<=52; i++){
		if(a[i] != b[i]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
