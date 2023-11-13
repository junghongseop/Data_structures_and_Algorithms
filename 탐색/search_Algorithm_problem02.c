// 이진 탐색 알고리즘
#include <stdio.h>

int a[65];
int result, key, n, cnt;

int search(int low, int high){
	int middle;
	if(low>high) return -1;
	middle = (low+high)/2;
	cnt++;
	if(key==a[middle]) return cnt;
	else if(key>a[middle]) return search(middle+1, high);
	else return search(low, middle-1);
}

int search1(int low, int high){
	int middle;
	if(low>high) return -1;
	middle = (low+high)/2;
	cnt++;
	if(key==a[middle]) return cnt;
	else if(key>a[middle]) return search1(low, middle-1);
	else return search1(middle+1, high);
}

int main() {
	int i, flag=0, low=0, high;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	high = n-1;  // high를 배열의 마지막 인덱스로 초기화
	scanf("%d", &key);
	if(a[0]<a[1]) flag=1;
	for(i=2;i<n;i++){
		if(flag==0 && a[i]>a[i-1]){
			printf("불가능");
			return 0;
		}
		if(flag==1 && a[i]<a[i-1]){
			printf("불가능");
			return 0;
		}
	}
	if(flag==1) result = search(low, high);	// 오름차순
	else result = search1(low, high); //내림차순
	
	if(result==-1) printf("실패");
	else printf("%d", result);
	return 0;
}
