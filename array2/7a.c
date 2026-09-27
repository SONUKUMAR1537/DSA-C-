#include <stdio.h>
int main() {
    int N;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    int A[N];
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int k = A[j];
                A[j] = A[j + 1];
                A[j + 1] = k;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    printf("\nName: Sonu kumar\n");
    printf("Roll No: 2400320101114\n");

    return 0;
}
