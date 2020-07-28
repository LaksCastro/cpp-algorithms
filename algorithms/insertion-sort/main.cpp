#include <iostream>

using namespace std;

int length;

void printArray(int array[]) {
  for (int i = 0; i < length; i++) {
    cout << "Element " << i << ": ";
    cout << array[i] << endl;
  }
}

void insertionSort(int array[]) {
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (array[i]  < array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

int main() {
  int array[] = {3, 6, 1, 8};
  length = sizeof(array) / sizeof(array[0]);

  cout << "Raw Array: " << endl;
  printArray(array);
  cout << endl << "Starting the sort with Insertion Sort Algorithm" << endl;
  insertionSort(array);
  cout << "Done, the sorted array is: " << endl << endl;
  printArray(array);

  return 0;
}
