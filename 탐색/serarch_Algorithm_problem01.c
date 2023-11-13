// 순차 알고리즘
#include <stdio.h>

int a[65];
int result, key, n;

int search(){
    int i;
    for(i=0;i<n;i++){
        if(key==a[i]) return i+1;
    }
    return -1;
}

int main() {
    int i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &key);
    result = search();
    if(result == -1)
        printf("실패");
    else
        printf("%d", result);
    return 0;
}
