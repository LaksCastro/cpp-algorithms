#include <iostream>

using namespace std;

int length;

void printArray(int array[]) {
  for (int i = 0; i < length; i++) {
    cout << "Element " << i << ": ";
    cout << array[i] << endl;
  }
}

void quickSort(int values[], int start, int end) {
  int i, j, pivo, aux;

  i = start;
  j = end - 1;

  pivo = values[(start + end) / 2];

  while (i <= j) {
    while (values[i] < pivo && i < end) {
      i++;
    }

    while (values[j] > pivo && j > start) {
      j--;
    }

    if (i <= j) {
      aux = values[i];
      values[i] = values[j];
      values[j] = aux;

      i++;
      j--;
    }
  }

  if (j > start) {
    quickSort(values, start, j + 1);
  }
  if (i < end) {
    quickSort(values, i, end);
  }
}

int main() {
  int array[] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10};

  length = sizeof(array) / sizeof(array[0]);

  cout << "Raw Array: " << endl;
  printArray(array);
  cout << endl << "Starting Simple Quick Sort Algorithm" << endl;
  quickSort(array, 0, length);
  cout << "Done, the sorted array is:" << endl << endl;
  printArray(array);

  return 0;
}
