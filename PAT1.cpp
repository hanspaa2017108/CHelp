// // square
// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;
//     int colCount;
//     cin >> colCount;

//     for(int i = 0; i < rowCount; i=i+1){
//         for(int j = 0; j < colCount; j=j+1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
// }

// // rectangle
// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;
//     int colCount;
//     cin >> colCount;

//     for(int i = 0; i < rowCount; i=i+1){
//         for(int j = 0; j < colCount; j=j+1){
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
// }

// // hollow rectangle or hollow square
// #include<iostream>
// using namespace std;

// int main(){

// int rowCount;
// cin >> rowCount;
// int colCount;
// cin >> colCount;

// for(int row = 0; row<rowCount; row=row+1){
//     for(int col = 0; col<colCount; col=col+1){
//         if(row == 0 || row == rowCount-1){
//             cout << "* ";
//         }
//         else{
//             if(col == 0 || col == colCount-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//     }
//     cout << endl;
// }
// }

// // half pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < row + 1; col++){
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

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < row + 1; col++){
//             cout << col + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// // inverted half pyramid
// #include<iostream>
// using namespace std;

// int main(){
//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row<rowCount; row++){
//         for(int col = 0; col<rowCount-row; col++){
//             cout << "* ";
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

//     for(int row = 0; row<rowCount; row++){
//         for(int col = 0; col<rowCount-row; col++){
//             cout << col + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// //inverted half hollow pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row<rowCount; row++){
//         for(int col = 0; col < rowCount; col++){
//             if(row == 0 || col == 0 || col == rowCount-row-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// // full pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){

//         // spaces

//         for(int col = 0; col < rowCount - row - 1; col++){
//             cout << " ";
//         }
        
//         // stars

//         for(int col = 0; col < row + 1; col++){
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

//     for(int row = 0; row < rowCount; row++){
//         // spaces
//         for(int col = 0; col < row; col ++){
//             cout << " ";
//         }
//         for(int col = 0; col < rowCount - row; col++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // hollow pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount;

//     for(int row = 0; row < rowCount; row++){
//         // space
//         for(int col = 0; col < rowCount - row - 1; col++){
//             cout << " ";
//         }
//         for(int col = 0; col < row+1; col++){
//             if(col==0 || col == row +1-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// // inverted hollow pyramid

// #include<iostream>
// using namespace std;

// int main(){

//     int rowCount;
//     cin >> rowCount;
//     int pattern;

//     for(int row = 0; row < rowCount; row++){
//         for(int col = 0; col < row; col++){
//             cout << " ";
//         }
//         for(int col = 0; col < 2*rowCount - 2*row - 1; col++){
//             if(col == 0 || col == row+1-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << " ";
//             }
           
//         }
//         cout << endl;  
//     }

// }

// // flipped solid diamond

// #include<iostream>
// using namespace std;

// int main(){

//     int num = 8;
//     int n = 4;

//     for(int row = 0; row<n; row++){

//         for(int col = 0; col < n-row; col++){
//             cout << "*";
//         }

//         for(int col = 0; col < 2*row + 1; col++){
//             cout << " ";
//         }

//         for(int col = 0; col < n-row; col++){
//             cout << "*";
//         }        
//         cout << endl;
//     }

//     for(int row = 0; row<n; row++){
//     for(int col = 0; col < row + 1 ; col++){
//             cout << "*";
//         }

//         for(int col = 0; col < 2*n-2*row-1 ; col++){
//             cout << " ";
//         }

//         for(int col = 0; col < row + 1 ; col++){
//             cout << "*";
//         }
//         cout << endl;
//     }

// }

// // pattern- way1

// #include<iostream>
// using namespace std;

// int main(){

// int n;
// cin >> n;

// for(int row = 0; row < n; row++){
//     for(int col = 0; col < 2*row+1; col++){
//         if(col%2 == 1){
//             cout << "*";
//         }
//         else{
//             cout << row + 1;
//         }
//     }
//     cout << endl;
// }

// }

// // patterm- way2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int row = 0; row < n; row ++){
//         for(int col = 0; col < row + 1; col ++){
//             if(col == row+1-1){
//                 cout << row + 1;
//             }
//             else{
//                 cout << row + 1 << "*";  
//             }
                                 
//         }
//         cout << endl;
//     }

//     for(int row = 0; row < n; row++){
//         for(int col = 0; col < n - row - 1; col ++){
//             if(col%2==1){
//                 cout << "*";
//             }
//             else{
//                 cout << n - row;
//             }
//     }
//     cout << endl;
// }
// }

// // abcd....cba pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin  >> n;
//     for(int row = 0; row < n; row ++){
//         char ch;
//         for(int col = 0; col < row + 1; col ++){
//             int number =  col + 1;
//             ch = number + 'A' - 1;
//             cout << ch;
//         }

//         // jab tak A nai milta tab tak print kar

//         for( char alph = ch; alph > 'A';){
//             alph = alph - 1;
//             cout << alph;
//         }
//         cout << endl;
//     }
// }

// // solid half diamond-- my logic and error pattern generated
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int row = 0; row < n; row ++){
//         for(int col = 0; col < row + 1; col ++){
//             //cout << row + 1;
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int row = 0; row < n; row ++){
//         for(int col = 0; col < n-row; col ++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// solid half diamond-- correct solution

// //Flyods Triangle

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;
//     int c = 1; //counter taken

//     for(int i = 0; i < n; i++){
//         for(int  j = 0; j <= i; j++){
//             cout << c << " ";
//             c++;
//         }
//         cout << endl;
//     }
// }