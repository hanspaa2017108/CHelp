// #include<iostream>
// using namespace std;

// int main() {
//     int bronum;
//         cout << "no. of brothers = " << bronum << endl;
//         cin >> bronum;
        

//     if(bronum == 0) {
//         cout << "bat banjayegi" << endl;
//     } else {
//         cout << "bat nahi banjayegi" << endl;
//     }

// for(int i = 0; i < 4; i++)
//     cout << "Sarthak Smarty\n";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout << "kaise ho? ";
//     return 0;
// }

// // solid rectangle

// #include<iostream>
// using namespace std;

// int main() {
//     for(int row = 0; row < 3; row = row +1){
//         for(int col = 0; col < 5; col = col+1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // square pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     int colCount;
//     cin >> rowCount;
//     cin >> colCount;

//     for(int row = 0; row < rowCount; row += 1){
//         for(int col = 0; col < colCount; col += 1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // Hollow Rectangle

// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount , colCount;
//     cin >> rowCount;
//     cin >> colCount;
    
//     for(int row = 0; row < rowCount; row = row + 1){
//         for(int col = 0; col < colCount; col = col + 1){
//             if(row == 0 || row == rowCount-1){
//                 cout << "* ";
//             }
//             else{
//                 if(col == 0 || col == colCount-1){
//                     cout << "* ";
//                 }
//                 else{
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

// // Half Pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;
//     // cin >> colCount;

//     for (int row=0; row<rowCount; row=row+1){
//         for (int col=0; col<row+1; col=col+1){
//             cout << "* ";
//         }
//         cout<< endl;
//     }
// }

// //inverted half pyramid

// #include<iostream>
// using namespace std;
// int main(){
// int rowCount;
// cin >> rowCount;
// for(int row = 0; row < rowCount; row = row+1){
//     for(int col = 0; col < rowCount-row; col = col + 1){
//         cout << "* ";
//     }
//     cout << endl;
// }
// }

// //numeric  half pyramid

// #include<iostream>
// using namespace std;

// int main(){
// int rowCount;
// cin >> rowCount;
// for(int row = 0; row<rowCount; row = row+1){
//     for(int col = 0; col < row + 1; col = col + 1){
//         cout << col + 1 << " ";
//     }
//     cout << endl;
// }
// }

// // inverted numeric half pyramid

// #include<iostream>
// using namespace std;
// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row = row+1){
//         for(int col = 0; col < rowCount-row; col = col + 1){
//             cout << col + 1 << " ";
//         }
//         cout <<  endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int n = 10;
//     if(cout << n){
//         cout << "Love babbar";
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     if(cin >> n){
//         cout << "Love babbar";
//     }
// }

// // full pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     //outer loop
//     for(int row = 0; row < n; row = row + 1){

//         // spaces
//         for(int col = 0; col < n-row-1; col = col + 1){
//             cout << " ";
//         }

//         // stars
//         for(int col = 0; col < row + 1; col = col + 1){
//             cout << "* ";            
//         }
//         cout << endl;

//     }
// }

// // inverted full pyramid

// #include<iostream>
// using namespace std;

// int main() {

// int n;
// cin >> n;
 
//  // outer loop
// for(int row = 0; row < n; row = row + 1){
//     // spaces
//     for(int col = 0; col < row; col = col + 1){
//         cout << " ";
//     }
//     // stars
//     for(int col = 0; col < n - row; col = col + 1){
//         cout << "* ";
//     }
//     cout << endl;
// }
// }

// // solid diamond

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;
//     // full pyramid 
//     //outer loop
//     for(int row = 0; row < n; row = row + 1){

//         // spaces
//         for(int col = 0; col < n-row-1; col = col + 1){
//             cout << " ";
//         }

//         // stars
//         for(int col = 0; col < row + 1; col = col + 1){
//             cout << "* ";            
//         }
//         cout << endl;

//     }
//     // inverted full pyramid
//     // outer loop
//     for(int row = 0; row < n; row = row + 1){
//         // spaces
//         for(int col = 0; col < row; col = col + 1){
//             cout << " ";
//         }
//         // stars
//         for(int col = 0; col < n - row; col = col + 1){
//             cout << "* ";
//         }
//             cout << endl;
// }
    
// }

// // hollow diamond

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     //upper part

//     for(int row = 0; row<n; row=row+1){

//         // spaces
//         for(int col = 0; col<n-row-1; col=col+1){
//             cout << " ";
//         }
        
//         // stars
//         for(int col = 0; col < 2*row+1; col=col+1){
//         if(col == 0 || col == 2*row){
//             cout << "*";
//         }
//         else {
//             cout << " ";    
//         }
//         }
//         cout << endl;
//     }
    
//     //lower part

// // spaces
//     for(int row=0; row<n; row = row+1){
//         for(int col = 0; col<row; col = col+1){
//             cout << " ";
//         }
    
// // stars
//         for(int col = 0; col<2*n-2*row-1; col=col+1){
//             if(col == 0 || col ==2*n-2*row-2){
//                 cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
            
//         }
//         cout << endl;  
//     }  

// }


// flipped solid diamond

// //fancy pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int row = 0;  row<n; row = row+1){
//         for(int col = 0; col < row +1; col= col+1){
//             cout << row+1;
//             if(col!=row){
//                 cout << "*";
//             }
//         }
//         cout<< endl;
//     }
// }