#include <stdio.h>    

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {
  int pivot = array[high];

  int i = (low-1);

  for (int j = low; j <= high-1; j++) {
    if (array[j] < pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);

  return (i+1);
}

void quicksort(int array[], int low, int high)  {
  if (low < high) {
    int pi = partition(array, low, high);

    quicksort(array, low, pi-1);
    quicksort(array, pi+1, high);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}

int main() {
  int sort[] = {0, 1, 0, 6, 9, 1, 40};
  int size = sizeof(sort) / sizeof(sort[0]);
  quicksort(sort, 0, size-1);
  printArray(sort, size);
  return 0;
}
