#include <stdio.h>

int main() {
    int list[] = {5, 3, 8, 1, 2, 7};
    int n, key;
    n = sizeof(list) / sizeof(int);

    for (int i = 1; i < n; i++) {
        key = list[i];
        int j;
        for (j = i - 1; j >= 0 && list[j] > key; j--) {
            list[j + 1] = list[j];
        }

        list[j + 1] = key;

        for (int k = 0; k < n; k++)
            printf("%d ", list[k]);
        printf("\n");
    }

    /*for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }*/

    return 0;
}
