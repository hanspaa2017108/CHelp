// #include<iostream>
// using namespace std;

// int main(){
//     char ch[10];
//     //cin >> ch;
//     // // using this i/p method to get space vala input datastream as input
//     cin.getline(ch, 500);
//     cout << "this is the char..." << ch << endl;
//     char temp =  ch[7];
//     int value = int(temp);
//     cout << "ascii value is: " << value << endl;
// }


// Finding the length of String
#include<iostream>
#include<strings.h>
using namespace std;

// int findLength(char ch[], int size){
//     // writing custom function using for, if-else...
//     int length = 0;
//     for(int i = 0; i < size; i++){
//         if(ch[i] == '\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     return length;
// }

int findLength(char ch[], int size){
    
    //int len = 0;
    int index = 0;
    while(ch[index] != '\0'){
       // len++;
        index++;
    }
    //return len;
    return index;
}
void reverseString(char ch[], int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cout << "Enter your String here..." << " ";
    cin.getline(ch, 250);
    //cout << "String Length using In-built function is: " << strlen(ch) << endl;
    //cout << "Now, getting the String Length using custom function..." << endl;
    int length = findLength(ch, 100);
    //cout << "String Length using custom function is: " << length << endl;
    cout << "Input string is..." << ch << endl;
    //reverseString(ch, 100); // isko use karne se blank ayega kyuki... refer notebook (hamko char aur length pass karwana hai)
    reverseString(ch, length);
    cout << "Reverse string is..." << ch << endl;
}