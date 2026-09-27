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
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        int temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    printf("\nName: Sonu kumar\n");
    printf("Roll No: 2400320101114\n");

    return 0;
}
