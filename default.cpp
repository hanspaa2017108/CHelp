// #include<iostream>
// using namespace std;
// int main(){
// //  char ch = 256;
// //  cout << "char value is: " << ch << endl; 
//     // long a =1;
//     // cout << sizeof(a) << endl;

//     // int num = 'b'; // implicit
//     // cout << num << endl;

//     // double d = 23.9;
//     // int no = (int)d + 2;
//     // cout << "New value is: " << no << endl; cout << "New value is: " << no << endl;

//     char ch = '97';
//     cout << "what is this ? " << ch << endl;
//     return 0;
// }

// // prg to get size of datatypes
// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     char ch = 'A';
//     bool b = 1;
//     double d = 1;
//     long l = 1;

//     cout << sizeof(i) << endl;
//     cout << sizeof(ch) << endl;
//     cout << sizeof(b) << endl;
//     cout << sizeof(d) << endl;
//      cout << sizeof(l) << endl;

//     return 0;
// }

// // nested loop

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i<4; i = i+1){
//         cout << endl << "OUTER LOOP RUNNING " << i << endl << endl;

//         for(int j = 0; j<4; j=j+1){
//             cout << "INNER LOOP RUNNING " << j << endl;
//         }
//         cout << endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 5;
//     cout << (++a)*(++a);
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int a = -2;
//     cout << (a<<1) << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){

//    unsigned int a = 26;
//     cout << (a>>-2) << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int a = 10; // value stored as 10
//     cout << ++a << endl; // now its 11 print it, ready to print
//     cout << a++ << endl; // first use what value is there (11), its printed ? now icrement
//     cout << a << endl; // incremented and stored value is 12

//     cout << (a++)*(++a) << endl;
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout << (a++) << endl;
//     cout << a << endl;
//     cout << (++a) << endl;

//     cout << (a--) << endl;
//     cout << a << endl;
//     cout << (--a) << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    for( int i = 0; i <=5; i++){
//     cout << i << endl;
//     continue;
//     cout << "kidda?";
// }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     cin >>i;
//     for(int i = 0; i <10; i++){
//         cout << "heres the seq of i..." << i << endl;
        
//     }
//     cout << " the value of i taken is---" << i << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     if(true){
//         int i = 5;
//         cout << "value of i at first loop is- " << i << endl;
    
//     if(true){
//         //int i = 6;
//         cout << "value of i at first loop is- " << i << endl;
//     }
//     }
// }

// // multiply n numbers from user (my incorrect code)
// #include<iostream>
// using namespace std;

// int main(){

//  int n;
//  cin >> n;
//  cout << "Total Numbers: " << n <<  endl;
//  int a;
//  int ans; // will throw garbage value as it is not initialised, not address

//  for(int i = 1; i <= n; i++){
//     cin >> a;
//     ans = ans * a;
//     cout << "The final answers received is..." << ans << endl;
//  }
//  return 0;
// }

// // multiply n numbers from user (gpt)

// #include<iostream>
// using namespace std;

// int main(){

//  int n;
//  cin >> n;
//  cout << "Total Numbers: " << n <<  endl;
//  int a;
//  int ans = 1;

//  for(int i = 1; i <= n; i++){
//     cin >> a;
//     cout << "The" << " " << n <<  " " << "numbers" << " " << "taken are..." << a << endl;
//     ans = ans * a;
//  }
//  cout << "The final answers received is..." << ans << endl;
//  return 0;

// }

// // 19 table printed
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     for(int i = 1; i<=10; i=i+1){
//         a = 19 * i;
//         cout << "Table of 19 is: " << a << endl;
//     }
//     return 0;
// }

// even from 1-100

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 100; i++){
//         if(i%2 == 0){
//             cout << "these are the even numbers from 1-100..." << i << endl;
//         }
//     }
//     return 0;
// }

// // implicit typecasting and explicit
// #include<iostream>
// using namespace std;
// int main(){
//     // int i = 5;
//     // float j = 5.5;
//     // int k = i + j;
//     // cout << k << endl;

//     // int a = 97;
//     // char ch = a;
//     // cout << ch << endl;

//     // char g = 'B';
//     // int gg = g;
//     // cout << gg << endl;

//     // explicit

//     // double pi = 3.1456789;
//     // int intPi = (int)pi;
//     // cout << intPi << endl;

//     // float a = 70.55;
//     // char b = (char)a;
//     // cout << b << endl;

//     // int a = 10;
//     // int b = 3.0;
//     // float c = a/b;
//     // cout << c << endl;

//     // int a = 10;
//     // int b = 3.0;
//     // //float c = a/((float)b);
//     // int c = a/((float)b);
//     // cout << c << endl;
// }

// // referencing 

// #include<iostream>
// using namespace std;
// int main(){

//     int n = 6;
//     int &j = n; 
//     int &e = n;
     
//     cout << "n- " << n << endl;   
//     j++;
//     cout << "j- " << j << endl;    
//     cout << "e- " << e << endl;    
// }

// // function call by value

// #include<iostream>
// using namespace std;
// int funcalbyval(int n){
//     n = n+1;
//     return n;
// }
// int main(){
//     int n;
//     cin >> n;
//     n = funcalbyval(n);
//     cout << " n is... " << n << endl;
// }

// #include<iostream>
// using namespace std;
// int funcalbyval(int n){
//     n = n+1;
//     return n;
// }
// int main(){
//     int n;
//     cin >> n;
//     funcalbyval(n);
//     cout << " n is... " << n << endl;
// }

// // call by reference

// #include<iostream>
// using namespace std;
// void funcalbyval(int&n){
//     n = n+1;
// }
// int main(){
//     int n;
//     cin >> n;
//     funcalbyval(n);
//     cout << " n is... " << n << endl;
//     return 0;
// }

// // break
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i < 15; i++){
//         cout << i << endl;
//         if(i==8)
//         break;
//         // if(i == 8){
//         //     break;
//         // }       
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){

//     for(int i=0; i<5;i++){
//     cout << "Kaise hoe" << endl;
//     continue;
//     cout << "thick hoe" << endl;
//     }
   
// }

// // variable scoping
// #include<iostream>
// using namespace std;
// int main(){

//     // int a = 10;
//     // for(; a <= 15; a++){
//     //     cout << a << endl;; 
//     // }

//     // for(int i = 0; i < 5; i++){
//     //     cout << "variable scoping" << endl;
//     // }
//     // //cout << i << endl;

//     if(true){
//         int a=5;
//         cout << "value of a is..." << a << endl;
//         if(true){
//             //int a = 6;
//             cout << "value of a is... " << a << endl;
//         }
//     }
// }

// // IMPLICIT CONVERSION

// #include<iostream>
// using namespace std;
// int main(){

//     // // int to char
//     // int a = 97;
//     // char ch = a;
//     // cout << ch << endl;

//     // // char to int
//     // char ch = 'A';
//     // int a = ch + 1;
//     // char b = a;
//     // cout << a << endl;
//     // cout << b << endl;

//     //
// }

// // EXPLICIT CONVERSION

// #include<iostream>
// using namespace std;
// int main(){
//     // // float to char
//     // float a = 69.99;
//     // char b = char(a);
//     // cout << b << endl;
//     // // rest examples to be referred above :)

//     int c = 10;
//     int d = 3.0;
//     float e = c/((float)d);
//     // int e = c/((float)d);
//     cout << e << endl;
// }

// // SWITCH CASE

// #include<iostream>
// using namespace std;
// int main(){

//     int num1;
//     cout << "Enter Number 1: ";
//     cin >> num1;
//     // cout << "Enter Number 1: " << num1 << endl;
    
//     int num2;
//     cout << "Enter Number 2: " << endl;
//     cin >> num2;
//     // cout << "Enter Number 2: " << num2 << endl;
    
//     int op;
//     cout << "type the operation to perform..." << endl;
//     cin >> op;
//     float ans = 0;

//     switch(op){

//         case 1:
//         ans = num1 + num2;
//         cout << "Addition is: " << ans << endl;
//         break;

//         case 2:
//         ans = num1 - num2;
//         cout << "Subtraction is: " << ans << endl;
//         break;

//         case 3:
//         ans = num1 * num2;
//         cout << "Multiplication is: " << ans << endl;
//         break;

//         default:
//         cout << "Calculator Disfunctional..." << endl;
//         return 0;
//     }

//     cout << "final answer is..." << ans <<endl;

// }

// // ODD EVEN USING SWITCH CASE- my wrong code

// #include<iostream>
// using namespace std;
// int main(){

//     int num;
//     cin >> num;

//     //cout << "Checking what the number is..." << endl;

//     int op;
//     cout << "Checking what the number is..." << endl;
//     // cin >> op;

//     int ans = 0;

//     switch(op){

//         case 1:
//         ans = (num%2 == 0);
//         cout << "it is even number..." << ans << endl;
//         break;

//         case 2:
//         ans = (num%2 == 1);
//         cout << "it is odd number..." << ans << endl;
//         break;

//         default:
//         cout << "it doesn't work that way..." << endl;
//         return 0;
//     }
//     cout << "The answer expected is..." << ans << endl;
// }

// ODD EVEN USING BITWISE OPERATIONS

// REFERENCING

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     cout << n << endl;
//     int &m = n;
//     //++m;
//     ++n;
//     cout << m << endl;
//     //cout << n << endl;
//     return 0;
// }

// // call by value
// #include<iostream>
// using namespace std;

// int incrementby(int n){
//     n = n + 1;
//     return n;
// }

// int main(){   
// int n;
// cin >>n;
// n = incrementby(n);
// cout << n << endl;
// return 0;
// }

// // call by reference

// #include<iostream>
// using namespace std;

// void incrementby(int &j)
// void incrementby(int &n){
//     n = n + 1;
//     return;
// }
// int main(){
//     int n;
//     cin >> n;
//     incrementby(n);
//     cout << n << endl;
//     return 0;
// }