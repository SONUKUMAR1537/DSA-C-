#include <stdio.h>

int linear_probing(int T[], int N, int key, int h) {
    int i = h;
    while (1) {
        if (T[i] == key) {
            return i;
        } 
        else if (T[i] == -1) {
            return -1;
        } 
        else {
            i = (i + 1) % N;
        }
    }
}

int main() {
    int N;
    printf("Enter table size: ");
    scanf("%d", &N);

    int T[N];
    printf("Enter %d elements (-1 for empty slots): ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    int key, h;
    printf("Enter key to search: ");
    scanf("%d", &key);

    printf("Enter hash value h: ");
    scanf("%d", &h);

    int result = linear_probing(T, N, key, h);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    printf("Name: Sonu kumar\n");
    printf("Roll No: 2400320101114\n");

    return 0;
}

