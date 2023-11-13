// 순차 탐색 알고리즘
#include <stdio.h>

int search(int n, int target, int array[]) {
    for (int i = 0; i < n; i++) {
        if (array[i] == target) {  // 원하는 학생의 키를 찾은 경우
            return i + 1;  // 탐색횟수를 반환(인덱스는 0부터 시작하므로 1을 더해준다)
        }
    }
    return -1;  // 원하는 학생의 키를 찾지 못한 경우 -1을 반환
}

int main() {
    int N, K;
    scanf("%d", &N);  // 학생의 수 입력
    int heights[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);  // 학생들의 키 정보 입력
    }
    scanf("%d", &K);  // 찾고자 하는 학생의 키 정보 입력
    int result = search(N, K, heights);
    if (result != -1) {
        printf("%d\n", result);  // 탐색 성공: 탐색횟수 출력
    } else {
        printf("실패\n");  // 탐색 실패: "실패" 출력
    }
    return 0;
}
