// // sq, rect
// #include<iostream>
// using namespace std;
// int main(){
//     int rowCount, colCount;
//     cin >> rowCount;
//     cin >> colCount;

//     for(int row = 0; row < rowCount; row = row + 1){
//         for(int col = 0; col < colCount; col = col + 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // hollow rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int rowCount, colCount;
//     cin >> rowCount;
//     cin >> colCount;
// // outer loop
//     for(int row = 0; row < rowCount; row = row + 1){
// // inner loop        
//         for(int col = 0; col < colCount; col = col + 1){          
//             if(row == 0 || row == rowCount-1){
//                 cout << "* "; // print * on zeroth and row-1 row 
//             }
//             else{
//                if(col == 0 || col == colCount -1){
//                 cout << "* "; // print * on zeroth and col-1 col 
//                }
//                else{
//                 cout << "  "; // print "  " on left off col spaces
//                }
//             }
//         }
//         cout << endl;
//     }
// }

// // half pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;
//     for (int row = 0; row < rowCount; row = row+1)
//     {
//          for (int col = 0; col < row + 1; col = col+1){
//             cout << "* ";
//          }
//        cout << endl; 
//     }    
// }

// // inverted half pyramid

// #include<iostream>
// using namespace std;
// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row<rowCount; row = row +1){
//         for(int col = 0; col < rowCount-row; col = col + 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// // numeric half pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int rowCount;
//     cin >> rowCount;
//     for(int row = 0; row<rowCount; row = row +1 ){
//         for(int col = 0; col < row +1; col = col+1){
//             cout << col+1 << " ";
//         }
//         cout << endl;
//     }
// }

// // numeric inverted half pyramid
// #include<iostream>
// using namespace std;
// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row = row +1){
//         for(int col = 0; col < rowCount-row; col = col + 1){
//             cout << col + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// //hollow inverted half pyramid
// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < rowCount; col++){
//             if(row == 0 || col == 0 || col == rowCount - row - 1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout <<  endl;
//     }
// }

// // full pyramid

// #include<iostream>
// using namespace std;

// int main() {

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row = row + 1){
//         for(int col = 0; col < rowCount - row - 1; col = col + 1){
//             cout << " "; // spaces
//         }
//         for(int col = 0; col < row + 1; col =  col + 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // inverted full pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row =  row + 1){
//         for(int col = 0; col < row; col = col + 1){
//             cout << " ";
//         }
//         for(int col = 0; col < rowCount - row; col =  col + 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // solid diamond pattern

// #include<iostream>
// using namespace std;

// int main() {

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row = row + 1){
//         for(int col = 0; col < rowCount - row - 1; col = col + 1){
//             cout << " "; // spaces
//         }
//         for(int col = 0; col < row + 1; col =  col + 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     for(int row = 0; row < rowCount; row =  row + 1){
//         for(int col = 0; col < row; col = col + 1){
//             cout << " ";
//         }
//         for(int col = 0; col < rowCount - row; col =  col + 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// // hollow pyramid

//  #include<iostream>
//  using namespace std;

//  int main(){
//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < rowCount - row - 1; col++){
//             cout << " ";
//         }
//         for(int col = 0; col < row + 1; col++){
//             if (col == 0 || col == row+1-1){
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//  }

// // inverted hollow pyramid

//  #include<iostream>
//  using namespace std;

//  int main(){
//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < row; col++){
//             cout << " ";
//         }
//         for(int col = 0; col < rowCount - row; col++){
//             if(col == 0 || col == rowCount - row - 1){
//                 cout << "*  ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//  }

//  // hollow diamond 

//  #include<iostream>
//  using namespace std;

//  int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < rowCount - row - 1; col++){
//             cout << " ";
//         }
//         for(int col = 0; col < row + 1; col++){
//             if (col == 0 || col == row+1-1){
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }  
//         for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < row; col++){
//             cout << " ";
//         }
//         for(int col = 0; col < rowCount - row; col++){
//             if(col == 0 || col == rowCount - row - 1){
//                 cout << "*  ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
          
//  }

// // flipped solid diamond

// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;
//     //invt pym 1
//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < rowCount - row; col++){
//             cout << "*";
//         }

//     // full pym 1
//         for(int col = 0; col < 2*row + 1; col++){
//             cout << " ";
//         }
    
//     // invt pym 2
//         for(int col = 0; col < rowCount - row; col++){
//             cout << "*";
//         }
//     cout << endl;
//     }
//     //invt pym 3
//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < row + 1; col++){
//             cout << "*";
//         }

//     // full pym 2
//         for(int col = 0; col < 2*rowCount - 2*row - 1; col++){
//             cout << " ";
//         }
    
//     // invt pym 4
//         for(int col = 0; col < row + 1; col++){
//             cout << "*";
//         }
//     cout << endl;
//     }
// }

// //1-4 with*-A

// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;
//     for(int row = 0; row < rowCount; row++){
//         for (int col = 0; col < 2*row + 1; col++){
//             if(col %2 == 1){
//                 cout << "* ";
//             }
//             else{
//                 cout << row + 1;
//             }
//         }
//         cout << endl;
//     }
// }

//1-4 -B

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount; 
//     for(int row = 0; row < rowCount; row++){
//          for (int col = 0; col < row+1; col++){
//             cout << row + 1 << " * "; 
//          }
//          cout << endl;
//     }
// }

// //1-4 with*-C

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount; 
//     for(int row = 0; row < rowCount; row++){
//          for (int col = 0; col < row+1; col++){
//             if (col == row + 1 - 1){
//                 cout << row + 1;
//             }
//             else{
//                 cout << row + 1 << "* ";
//             }
//          }
//          cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount; 
//     for(int row = 0; row < rowCount; row++){
//          for (int col = 0; col < row+1; col++){
//             cout << row + 1; //<< " * "; 
//          }
//          cout << endl;
//     }
// }


// // numeric half pyramid
// #include<iostream>
// using namespace std;
// int main(){

//     int rowCount;
//     cin >> rowCount;
//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < rowCount; col ++){
//             if(col ==0 || row == rowCount - 1 || col == rowCount - row + 1){
//                 cout << row << " ";
//             }
//             else{
//                 cout<< " ";
//             }
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){

    int rowCount;
    cin >> rowCount;

    for(int row = 0; row < rowCount; row++){
        char ch;
        for(int col = 0; col < row + 1; col++){
            int number = col + 1;
            ch = number + 'A' -1;
            cout << ch; 
        }

        for(char alphabet = ch; alphabet > 'A'; alphabet =  alphabet - 1){
            alphabet = alphabet - 1;
            cout << alphabet;       
    }
     cout << endl;
}
       
    }

    