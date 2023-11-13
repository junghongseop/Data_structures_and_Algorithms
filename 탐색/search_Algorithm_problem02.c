// 이진 탐색 알고리즘
#include <stdio.h>
#include <stdlib.h>

int binary_search(int* array, int start, int end, int target, int count, int isAsc) {
    if (start > end) return -1;  // 탐색 실패
    int mid = (start + end) / 2;
    if (array[mid] == target) return count;  // 탐색 성공
    else if ((isAsc && array[mid] > target) || (!isAsc && array[mid] < target)) 
        return binary_search(array, start, mid - 1, target, count + 1, isAsc);
    else 
        return binary_search(array, mid + 1, end, target, count + 1, isAsc);
}

int is_sorted(int* array, int N) {
    int asc = 1, desc = 1;
    for (int i = 0; i < N - 1; i++) {
        if (array[i] > array[i + 1]) asc = 0;
        if (array[i] < array[i + 1]) desc = 0;
    }
    if (asc) return 1;
    if (desc) return -1;
    return 0;  // 정렬되지 않은 경우
}

int main() {
    int N, K;
    scanf("%d", &N);
    int* heights = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }
    scanf("%d", &K);

    int sorted = is_sorted(heights, N);
    if (sorted == 0) {
        printf("불가능");
        return 0;
    }

    int result = binary_search(heights, 0, N - 1, K, 1, sorted > 0);
    if (result == -1) {
        printf("실패");
    } else {
        printf("%d", result);
    }
    return 0;
}
