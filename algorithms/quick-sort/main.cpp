#include <iostream>

using namespace std;

int length;

void quicksort(int values[], int began, int end) {
  int i, j, pivo, aux;
  
  i = began;
  j = end - 1;
  
  pivo = values[(began + end) / 2];
  
  while (i <= j) {
    while (values[i] < pivo && i < end) {
      i++;
    }
  
    while (values[j] > pivo && j > began) {
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
  
  if (j > began) quicksort(values, began, j + 1);
  if (i < end) quicksort(values, i, end);
}

void printArray(int array[]){
  for (int i = 0; i < length; i++) {
    cout << array[i] << ' ';
  }
}

int main() {
  int array[] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10};
  
  length = sizeof(array) / sizeof(array[0]);
  
  for (int i = 0; i < length; i++) {
    cout << array[i] << ' ';
  }
  
  cout << endl;
  
  quicksort(array, 0, length);
  
  for (int i = 0; i < length; i++) {
    cout << array[i] << ' ';
  }
  
  return 0;
}
