// #include <iostream>
// using namespace std;

// int findMissEle(int arr[], int size) {

//   int start = 0;
//   int end = size - 1;
//   int ans = -1;

//   while (start <= end) {
//     int mid = start + (end - start) / 2;
//     int diff = arr[mid] - mid;
//     if (diff == 1) {
//       start = mid + 1;
//     } else {
//       ans = mid;
//       end = mid - 1;
//     }
//   }
//   return ans + 1;
// }

// int main() {

//   int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
//   int size = 9;

//   cout << findMissEle(arr, size);
// } 

// divide using binary search
#include <iostream>
using namespace std;
int getQuotient(int dividend, int divisor) {

  int s = 0;
  int e = dividend;
  int ans = -1;
  int mid = s + (e - s) / 2;

  while (s <= e) {
    mid = s + (e - s) / 2;
    if (mid * divisor == dividend) {
      return mid;
    }
    if (mid * divisor < dividend) {
      // ans ko store
      ans = mid;
      // right me jao
      s = mid + 1;
    } else {
      // left me jao
      e = mid - 1;
    }
  }
  return ans;
}

int main() {

  int divisor = 7;   // yeh divide kar raha hai
  int dividend = 35; // yeh divide ho raha hai

  int answer = getQuotient(divisor, dividend);

  cout << "The final answer using BS is..." << answer << endl;
}