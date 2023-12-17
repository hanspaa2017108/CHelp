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

// // extreme points in an ar  ray- odd sized array
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

// take two

// #include<iostream>
// using namespace std;
// int main(){

//     // int arr[5]={0,1,2,3,4};

//     // // cout << " address is..." << &arr << endl;
//     // // cout << " address is..." << arr << endl;
//     // // cout << "size of arr..." << sizeof(arr) << endl;

//     // int n = 5;
//     // for(int i = 0; i<n; i++){
//     //     cout << arr[i] << "  ";
//     // }

//     // taking i/p from array 
//     int arr[5];
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         cout << " Enter Values for the index number " << i << ":  ";
//         cin >> arr[i];
//         cout << endl;
//     }

//     // printing that array

//     cout << "heres the array received as i/p" << endl;
//     for(int i =0; i < n; i++){
//         cout << arr[i] << " ";
//     } 

// }

// // PS- 1

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int n = 10;

// taking input

//     for(int i = 0; i < n; i++){
//         cout << " Enter Values for the index number " << i << ":  ";
//         cin >> arr[i];
//         cout << endl;
//     }
    
// doubling up 

//     for(int i = 0; i < n; i++){
//         //cout << " Enter Values for the index number " << i << ": "<< 2*arr[i] << endl;
//         arr[i] = 2* arr[i];
//         cout << " Enter Values for the index number " << i << ": "<< arr[i] << endl;
//     }
//     //cout << "doubled array elements are.." << arr[i] << " "; // // throwing error as here i is out of scope
// }

// PS- 2

// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[5];
//     int n = 5;

//     // taking i/p

//     for(int i = 0; i <n; i++){
//         cout << "input numbers at index " << i << ": ";
//         cin >> arr[i];
//     }

//     // sum printing (my mistake)

//     // for(int i = 0; i < n; i++){
//     //     int sum = 0;
//     //     sum = sum + arr[i];
//     //     cout << "the sum of all elements in the array is: " << sum << " ";
//     // }

//     // sum printing

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//     cout << "the sum of all elements in the array is: " << sum << " ";
// }

// // linear search in array

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[4] = {1,2,3,5};
//     int n = 4;
//     int target = 5;
//     bool flag = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == target){
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 1){
//         cout << " target is here..." <<  endl;
//     }
//     else{
//         cout << "target is not here..." << endl;
//     }
// } 

// // linear search in array- using functions

// #include<iostream>
// using namespace std;

// bool LinearSearch(int arr[], int size, int target){
//     for(int i = 0; i < size; i++){
//         if(arr[i] == target){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     int target = 3;
//     int ans = LinearSearch(arr, size, target);

// // hamko bhi pata chale ki target mil gaya hai isiliyee yeh line of code
//     if(ans == 1){
//         cout << " target found" << endl;
//     }
//     else{
//         cout << "target not found" << endl;
//     }
// }

// // count 0's and 1's in array

// #include<iostream>
// using namespace std;

// void CountNumber(int arr[], int size){

//     int zerocount = 0;
//     int onecount = 0;
//     for(int i = 0; i < size; i++){
//         if(arr[i] == 0){
//             zerocount++;
//         }
//          if(arr[i] == 0){
//             onecount++; 
//         }
//     }
//     cout << "zero count is..." << zerocount << endl;
//     cout << "one count is..." << onecount << endl;
// }
// int main(){
//     int arr[]={1,0,0,1,0,1,1,0,0,0,1,1};
//     int size = 12;
//     CountNumber(arr, size);
// }

// // Minimum number in array 

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int MinimumAnswer(int arr[], int size){
//         int minAns = INT_MAX;
         
//         //M-1
//         for(int i = 0; i < size; i++){
//             if(arr[i] < minAns){
//                 minAns = arr[i];
//             }
//         }

//         // //M-2
//         // for(int i = 0; i < size; i++){
//         //     minAns = min(arr[i], minAns);
//         // }

//         return minAns;
//     }

// int main(){
    
//     int arr[] = {9,6,11,17,54,2};
//     int size = 6;
//     int minimum = MinimumAnswer(arr, size); // answer ko int me store karvaliya kyuki jo function banaya hai voh integer return type ka hai..(integer return karta hai)
//     cout << " the minimum in this array is... " << minimum << endl;  
// }

// reverse an array- even and odd sized (refer above code)

// // extreme points in array- even size array

// // #include<iostream>
// // using namespace std;

// // void extArr(int arr, int size){
// //   int left = 0;
// //   int right = size - 1;
  
// //   while(left<=right){
// //     cout << arr[left] << endl;
// //     cout << arr[right] << endl;
// //     left++;
// //     right--;
// //   }

// // }
// // int main(){
// //     int arr[6] = {1,3,5,7,9,11};
// //     int size = 6;
// //     extArr(arr, size);   
// // }

// #include<iostream>
// using namespace std;

// void extArr(int arr[], int size){
//   int left = 0;
//   int right = size - 1;
  
//   while(left<=right){
//     cout << arr[left] << endl;
//     cout << arr[right] << endl;
//     left++;
//     right--;
//   }

// }
// int main(){
//     int arr[6] = {1,3,5,7,9,11};
//     int size = 6;
//     extArr(arr, size);   
// }

// // extreme points in array- odd size array

// #include<iostream>
// using namespace std;

// void extArr(int arr[], int size){
//     int left = 0;
//     int right = size-1;

//     while(left<=right){
//         if(left == right){
//             cout << arr[left] << endl;
//         }
//         else{
//             cout << arr[left] << endl;
//             cout << arr[right] << endl;
//         }
//         left++;
//         right--;
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     extArr(arr, size);
// }

