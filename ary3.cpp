// #include<iostream>
// using namespace std;

// void rowArray(int arr[4][5], int row, int col){
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// void colArray(int arr[4][5], int row, int col){
//   for(int i=0; i<col; i++){
//     for(int j=0; j<row; j++){
//       cout << arr[j][i] << " ";
//     }
//     cout << endl;
//   }
// }

// int main(){

//   int arr[4][5] = {
//   {1,2,3,4,5},
//   {10,9,8,7,6},
//   {11,12,13,14,15},
//   {20,19,18,17,16},
//   };

//   int row=4;
//   int col=5;

//   rowArray(arr, row, col);
//   colArray(arr, row, col);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[3][3];

//     int row=3;
//     int col=3;

// // taking input
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout << "for row input is: " << i << " " << "for column input is: " << j << endl;
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }

// // printing the 2d array
//      for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//              cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

// // find target element
// #include<iostream>
// using namespace std;

// bool targetArr(int arr[4][5], int row, int col, int target){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==target){
//                 return true; // o/p me ayega 1 that is ki target milgaya hai
//             }
//         }
//     }
//     //is line pe ayenge jab sab elements check ho chuke ho, aur target se naa mile, tab false return kardo
//     return false; //o/p me ayega 0 that is ki target nahi mila hai
// }
// int main(){

//     int arr[4][5] = {
//       {1, 2, 3, 4, 5},
//       {10, 9, 8, 7, 6},
//       {11, 12, 13, 14, 15},
//       {20, 19, 18, 17, 16}
//   };

//     int row = 4;
//     int col = 5;
//     int target = 13;

//     cout << "the found element is..." << targetArr(arr, row, col, target) << endl;
// }

// // max numbers in 2d array
// #include<iostream>
// #include<limits.h>
// using namespace std;

// int maximumArr(int arr[4][5], int row, int col){
//     int maxAns = INT_MIN;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]>maxAns){
//                 maxAns = arr[i][j];
//             }
//         }
//     }
//     return maxAns;
// }
// int main(){

//     int arr[4][5] = {
//       {1, 2, 3, 4, 5},
//       {10, 9, 8, 7, 6},
//       {11, 12, 13, 14, 15},
//       {20, 19, 18, 17, 16}
//   };
//     int row = 4;
//     int col = 5;
    
//     int finalMax = maximumArr(arr, row, col);
//     cout << "the maximum number in the 2D array is..." << finalMax << endl;
// }

// // sum print row wise

// #include<iostream>
// using namespace std;

// // // isse pura sum print hoga- 210
// // void rowsumArr(int arr[4][5], int row, int col){
// //     int sum = 0;
// //     for(int i=0; i<row; i++){ 
// //         for(int j=0; j<col; j++){
// //             sum += arr[i][j];
// //         }
// //     }
// //     cout << sum << " ";
// // }

// // // isse bhi proper sum nahi milraha
// // void rowsumArr(int arr[4][5], int row, int col){
// //     int sum = 0;
// //     for(int i=0; i<row; i++){ 
// //         for(int j=0; j<col; j++){
// //             sum += arr[i][j];
// //         }
// //         cout << sum << " ";
// //     }  
// // }

// void rowsumArr(int arr[4][5], int row, int col){
//     for(int i=0; i<row; i++){ 
//         int sum = 0;
//         for(int j=0; j<col; j++){
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//     }  
// }

// int main(){

//     int arr[4][5] = {
//       {1, 2, 3, 4, 5},
//       {10, 9, 8, 7, 6},
//       {11, 12, 13, 14, 15},
//       {20, 19, 18, 17, 16}
//   };

//     int row = 4;
//     int col = 5;

//     rowsumArr(arr, row, col);
// }

// sum print col wise

// diagonally print sum in 2D array

// // transpose of a matrix

// #include<iostream>
// using namespace std;

// void transArr(int arr[][5], int row, int col){
//     for(int i = 0; i<row; i++){
//         for(int j=i; j<col; j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

// int main(){

//     int arr[4][5] = {
//       {1, 2, 3, 4, 5},
//       {10, 9, 8, 7, 6},
//       {11, 12, 13, 14, 15},
//       {20, 19, 18, 17, 16}
//   };

//     int row = 4;
//     int col = 5;

//     transArr(arr, row, col);
//     cout << "upon transpose array received is..." << endl;

//     for(int i =0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout << arr[i][j] << " ";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void transArr(int arr[][5], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = i + 1; j < col; j++) {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

// int main() {
//     int arr[4][5] = {
//         {1, 2, 3, 4, 5},
//         {10, 9, 8, 7, 6},
//         {11, 12, 13, 14, 15},
//         {20, 19, 18, 17, 16}
//     };

//     int row = 4;
//     int col = 5;

//     transArr(arr, row, col);

//     cout << "Upon transpose array received is..." << endl;
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // 2d vector, printing

// #include<iostream>
// using namespace std;
// int main(){

//     vector <vector<int> > arr(5, vector<int>(5, 25));
//     for(int i=0; i<arr.size();i++){
//         for(int j=0; j<arr[i].size(); j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // jagged array
// #include<iostream>
// using namespace std;
// int main(){
    
//     vector<vector<int> >arr;
//     vector<int> vec1(1,1);
//     vector<int> vec2(2,2);
//     vector<int> vec3(3,3);
//     vector<int> vec4(4,4);
//     vector<int> vec5(5,5);

//     arr.push_back(vec1);
//     arr.push_back(vec2);
//     arr.push_back(vec3);
//     arr.push_back(vec4);
//     arr.push_back(vec5);

//     for(int i=0; i<arr.size();i++){
//         for(int j=0; j<arr[i].size(); j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

