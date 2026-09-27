#include <stdio.h>

void adjust(int A[], int i, int N) {
    int j = 2 * i;
    int temp = A[i];

    while (j <= N) {
        if (j < N && A[j] > A[j + 1])
            j = j + 1;

        if (temp <= A[j])
            break;

        A[j / 2] = A[j];
        j = j * 2;
    }

    A[j / 2] = temp;
}

int deleteHeap(int A[], int *N) {
    int x = A[1];
    A[1] = A[*N];
    *N = *N - 1;

    adjust(A, 1, *N);

    return x;
}

int main() {
    int A[100], N;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter heap elements (Min-Heap): ");
    for (int i = 1; i <= N; i++)
        scanf("%d", &A[i]);

    int removed = deleteHeap(A, &N);

    printf("\nDeleted element: %d\n", removed);

    printf("Heap after deletion: ");
    for (int i = 1; i <= N; i++)
        printf("%d ", A[i]);

    printf("\n\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114 \n");

    return 0;
}
