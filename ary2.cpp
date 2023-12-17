// #include<iostream>
// using namespace std;
// int main(){ 

//     //int n; 
//     //cin >> n;
//     vector<int> hello;
//     //size(hello); 
//     //int ans = (sizeof(hello)/sizeof(int));
//     //cout << ans << endl;
//     hello.push_back(1);
//     hello.push_back(2);
    
//     // print

//     for(int i =0; i < hello.size(); i++){
//         cout << hello[i] << " ";
//     }   

//     // int n; 
//     // cin >> n;
//     // vector<int> hello(n, 15);

//     // // print

//     // for(int i =0; i < hello.size(); i++){
//     //     cout << hello[i] << " ";
//     // }   

//     //cout << hello.size() << endl;
//     //cout << hello.capacity() << endl;

//     // here "1" answer means that vector is empty is "true"
//     vector<int>hi; 
//     cout << "kya vector empty hai: " << hi.empty() << endl; 
// }

// // unique element in array

// #include<iostream>
// #include<vector>
// using namespace std;

// int UniqueElement(vector<int> num){
//     int ans = 0;
//     for(int i = 0; i<num.size(); i++){
//         ans = ans ^ num[i];
//     }
//     return ans;
// }

// int main(){

//     int n;
//     cin >> n;
//     //vector<int> num; // generated problem where answer directly became "0"
//     vector<int> num(n);
//     for(int i = 0; i<num.size(); i++){
//         cin >> num[i];
//     }

//     int FinalUnq = UniqueElement(num);
//     cout << "The Unique Element from the list is: " << FinalUnq << endl;
//     return 0;
// }

// // // UNION of ARRAY(no duplicate case)

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[] = {1,3,5,7};
//     int size_a = 4;
//     int brr[] = {2,4,6,8};
//     int size_b = 4;

//     // vector to store
//     vector<int> store;
    
//     //storing the elements in vector- pushback

//     for(int i=0; i<size_a; i++){
//         store.push_back(arr[i]);
//     }

//     //storing the elements in vector- pushback

//     for(int i=0; i<size_b; i++){
//         store.push_back(brr[i]);
//     }

//     // printing the elements in store

//     for(int i=0; i<store.size(); i++){
//         cout << store[i] << " ";
//     }
// }

// //Intersection of Array (getting compiler error)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int> arr{1,2,3,4,5};
//     vector<int> brr{4,5,6,7,8};
//     vector<int> ans;

//     // running outer loop on arr

//     for(int i=0; i<arr.size(); i++){
//         int elements=arr[i];
//     // traversing elements of arr on brr
//         for(int j=0; j<brr.size(); j++){
//             if(elements == brr[j]){
//                 ans.push_back(elements);
//                 //ans.pushback(elements); // my errror, learn to recall basic syntaxes
//             }
//         }
//     }

//     // printing the common elements
//     for(auto value: ans){
//         cout << value << " ";
//     }
// }

// union of 2 arrays- with duplicate

// // pair sum 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{10,20,30,40,50};
//     for(int i=0; i<arr.size(); i++){
//         cout << "we are at element: " << arr[i] << endl; 
//         int element=arr[i];
//         for(int j=i+1; j<arr.size();j++){
//             cout << "pair element: " << element << "with " << arr[j] << endl;
//             //cout << "(" << element << arr[j] << ")" << endl;
//         }
//     }
// }

//triplet sum

// //
// #include<iostream>
// using namespace std;

// void twoArray(int arr[4][5], int row, int col){
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cout << arr[i][j] << " ";
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

//   twoArray(arr, row, col);
//   return 0;
// }

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

//   cout << findMissEle(arr, size) << endl;
// } 