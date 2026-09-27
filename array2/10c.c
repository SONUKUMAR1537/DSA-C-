#include <stdio.h>
void heapify(int A[], int N, int i) {
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest = i;
    if (left <= N && A[left] > A[largest])
        largest = left;
    if (right <= N && A[right] > A[largest])
        largest = right;
    if (largest != i) {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        heapify(A, N, largest);
    }
}
void heapSort(int A[], int N) {
    for (int i = N / 2; i >= 1; i--) {
        heapify(A, N, i);
    }
    for (int i = N; i >= 2; i--) {
        int temp = A[1];
        A[1] = A[i];
        A[i] = temp;
        heapify(A, i - 1, 1);
    }
}
int main() {
    int A[100], N;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    printf("Enter elements: ");
    for (int i = 1; i <= N; i++)
        scanf("%d", &A[i]);
    heapSort(A, N);
    printf("\nSorted Array: ");
    for (int i = 1; i <= N; i++)
        printf("%d ", A[i]);
    printf("\n\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}
