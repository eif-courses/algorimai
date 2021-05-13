#include <iostream>


void bubbleSort(int array[], int size);

void swap(int array[], int i, int j);

int main() {

  int data[] = {515123123, 1212412313,1212412313, 1212412313, 1212412313};
  // 45,2
  // 2,25
  // 25,35
  // 35, 65,
  // 65, 48
  // 48, out of range // 0 arba siuksle is atminties


  int length = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, length);

  for (auto it: data) {
    std::cout << it << " ";
  }


  return 0;
}

void swap(int array[], int i, int j) {
  int temp = array[j]; // 2 (array[i+1])
  array[j] = array[i]; // i+1 = 45
  array[i] = temp;
}

void bubbleSort(int array[], int size) {
  //45 > 2

  // int data[] = {45, 2, 25, 35, 65, 48}; // data[i][j] => data[0][0] = 45, data[0][1] = 2
  // i = 0 => eilute
  // j = 0, j = 1, j = 2, j = 3, j = 4.... => stulpelis
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size-i; ++j) {
      if (array[i] > array[j]) { // Didejimo [ < ] ar mazejimo[ > ] tvarka:
        swap(array, i, j); // kai i = 0, swap array[i] = 45 keiciam i array[i+1] = 2
      }
    }
  }
}