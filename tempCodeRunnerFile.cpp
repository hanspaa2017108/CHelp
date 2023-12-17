#include <iostream>
using namespace std;

int findMissEle(int arr[], int size) {

  int start = 0;
  int end = size - 1;
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    int diff = arr[mid] - mid;
    if (diff == 1) {
      start = mid + 1;
    } else {
      ans = mid;
      end = mid - 1;
    }
  }
  return ans + 1;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
  int size = 9;

  cout << findMissEle(arr, size);
} 