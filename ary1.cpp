 // #include<iostream>
// using namespace std;
// int main(){

//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};

//     cout << "address is... " << &arr << endl;
//     cout << "address is... " << arr << endl;
//     cout << "size is... " << sizeof(arr) << endl;

//     // array indexing
//     cout << arr[1] << endl;
//     cout << arr[0] << endl;

//     int n = 5;
//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }

// // input and print array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4];
//     int n = 4;
//     // input array
//     for(int i = 0; i < n; i++){
//        cout << "enter value for index: " << i << ":";
//        cin >> arr[i];
//        cout << endl;
//     }

//     //printing array
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
    
// }

// // input & double

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int n = 10;

//     // print arrays
//     cout << "initially printing elements..." << endl;

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     // double

//     cout << "after doubling elements... " << endl;

//     for(int i = 0; i < n; i++){
//         arr[i] = 2*arr[i];
//     }
//      // printing doubled

//     cout << "printing DOUBLY elements..." << endl;

//      for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

// }

// // ps- 2, sum of array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//      int sum = 0;
//      for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
//      }
//      cout << "sum of arrays..." << sum << endl;
//      return 0;
// }

// // linear search in array using flags

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
//     int target = 3;
//     bool flag = 0;

//     for(int i = 0; i < n; i++){
//         if(arr[i] == target){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 1){
//         cout << "found target";
//     }
//     else{
//         cout << " target not found";
//     }
//     return 0;
// }

// // array and functions

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         cout << arr[i];
//     }
//     cout << endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size = 5;
//     printArray(arr, size);

// }

// // linear search in array using functions

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         cout << arr[i];
//     }
//     cout << endl;
// }

// bool linearSearch(int arr[], int size, int target){
//     for(int i = 0; i < size; i++){
//         if(arr[i] == target){
//             return true;
//         }  
//     }  
//     return false;  
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size = 5;
//     int target = 7;
//     printArray(arr, size);
//     bool ans = linearSearch(arr, size, target);
//     if(ans == 1){
//         cout << " target found " << endl;
//     }
//     else{
//         cout << " target not found " << endl;
//     }
// }

// // 0's and 1's in array

// #include<iostream>
// using namespace std;

// void counts(int arr[], int size){
//     int zerocount = 0;
//     int onecount = 0;
//     for(int i = 0; i < size; i++){
//         if(arr[i] == 0){
//             zerocount ++;
//         }
//         if(arr[i] == 1){
//             onecount ++;
//         }
//     }
//     cout << "zerocount is..." << zerocount << endl;
//     cout << "onecount is..." << onecount << endl;

// }
// int main(){
//     int arr[]={1,0,1,0,1,0};
//     int size = 6;
//     counts(arr, size);
    
// }

// // minimum numbers in array- P1

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int MinArrFun(int arr[], int size){
//     int MinArr = INT_MAX;
//     for(int i = 0; i < size; i++){
//         if(arr[i] < MinArr){
//             MinArr = arr[i]; // updating minimum answer in MinArr
//         }  
//     }
//     return MinArr;
// }
// int main(){
//     int arr[] = {9,10,8,3,7,4,11,2,5,6};
//     int size = 10;
//     int OPMin = MinArrFun(arr, size);
//     cout << "The Minimum in the Array List is..." << OPMin << endl;
// }

// // minimum numbers in array- P2

// #include<iostream>
// using namespace std;

// int MinArrFun(int arr[], int size){
//     int MinArr = INT_MAX;
//     for(int i = 0; i < size; i++){
//         MinArr = min(arr[i], MinArr);
//     }
//     return MinArr;
// }
// int main(){
//     int arr[] = {9,10,8,3,7,4,11,2,5,6};
//     int size = 10;
//     int OPMin = MinArrFun(arr, size);
//     cout << "The Minimum in the Array List is..." << OPMin << endl;
//     return 0;
// }

// // reverse an array- while loop

// #include<iostream>
// using namespace std;

// void RevArr(int arr[], int size){
//     int left = 0;
//     int right = size - 1;
//     while(left <= right){
//         swap(arr[left], arr[right]);
//         left ++;
//         right --;
//     }
//    for(int i = 0; i < size; i++){
//          cout << arr[i] << " ";
//    }
// }

// int main(){
//     int arr[] = {1,5,9,4,6};
//     int size = 5;
//     RevArr(arr, size);
//     return 0;
// }


// // reverse an array- for loop
// #include<iostream>
// using namespace std;

// void RevArr(int arr[], int size){
//     for(int left = 0, right = size-1; left <= right; left++, right--){
//         swap(arr[left], arr[right]);
//     }
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] = {1,5,9,4,6};
//     int size = 5;
//     RevArr(arr, size);
//     return 0;
// }

// // extreme points in an arrray- even sized array
// #include<iostream>
// using namespace std;

// void RevArr(int arr[], int size){
//     int left = 0;
//     int right = size - 1;
//     while(left <= right){
//         // swap(arr[left], arr[right]);
//         cout << arr[left] << " ";
//         cout << arr[right] << " ";
//         left ++;
//         right --;
//     }
// }

// int main(){
//     int arr[] = {1,5,9,4,6,56};
//     int size = 6;
//     RevArr(arr, size);
//     return 0;
// }

// // extreme points in an arrray- odd sized array
// // here code repeates the middle element 

// #include<iostream>
// using namespace std;

// void RevArr(int arr[], int size){
//     int left = 0;
//     int right = size - 1;
//     while(left <= right){
//         if(left == right){
//             cout << arr[left]<< endl;
//         }
//         else{
//             cout << arr[left] << " ";
//             cout << arr[right] << " ";
//         }
//        left ++;
//        right --;
//     }
// }

// int main(){
//     int arr[] = {1,5,9,4,6,56,34};
//     int size = 7;
//     RevArr(arr, size);
//     return 0;
// } 