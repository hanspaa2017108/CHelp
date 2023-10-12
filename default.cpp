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
        
//     }
//     cout << " the value of i taken is---" << i << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     if(true){
//         //int i = 5;
//         cout << "value of i at first loop is- " << i << endl;
    
//     if(true){
//         //int i = 6;
//         cout << "value of i at first loop is- " << i << endl;
//     }
//     }
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