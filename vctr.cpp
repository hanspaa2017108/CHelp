// #include<iostream>
// #include<vector>

// using namespace std;

// // void vecthello(vector<int>hello){
// //     int size = hello.size();
// //     for(int i = 0; i < size; i++){
// //         cout << hello[i] << endl;
// //     }
// // }

// int main(){
//     vector<int>hello;
//     hello.push_back(5);
//     hello.push_back(10);
//     hello.push_back(15);
//     hello.push_back(20);
//     hello.push_back(25);
//     //hello.pop_back();
//     cout << "this is current size..." << hello.size() << endl;
//     cout << "this is current capacity..." << hello.capacity() << endl;

//     //vecthello(hello);
// } 

// #include<iostream>
// using namespace std;

// void vecthello(vector<int>hello){
//     int size = hello.size();
//     for(int i = 0; i < size; i++){
//         cout << hello[i] << endl;
//     }
// }
// int main(){

// vector<int> prc;
// int n;
// cin >> n;
// cout << "first fn call..." << endl;
// for(int i = 0; i < n; i++){
//     int d;
//     cin >> d;
//     prc.push_back(d);
// }  
// vecthello(prc);  
// cout << " 2nd fn call..." << endl;
// for(int i = 0; i<4; i++){
//     prc.push_back(50);
// }
// vecthello(prc);  

// }

// #include<iostream>
// using namespace std;
// int main(){
//     vector<int>hello(5, 6);
//     cout << " size of vector is..." << hello.size() << endl;
//     for(int i = 0; i < hello.size(); i++){
//         cout << hello[i] << " ";
//     }
//     cout << endl << hello.empty() << endl;
//     cout << endl << hello.capacity() << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     vector<int>v1;
//     cout << v1.size() << endl;
//     vector<char>v2;
//     cout << v2.size() << endl;
//     return 0;
// }

// // 2D- VECTOR

// #include<iostream>
// using namespace std;
// int main(){
//     vector< vector<int> > arr (3, vector<int>(3,4));
//     for(int i = 0; i < arr.size(); i++){
//         for(int j = 0; j < arr[i].size(); j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // Jagged Array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector< vector<int> > arr;
//     vector<int> vec(1,2);
//     vector<int> vec1(2,2);
//     vector<int> vec2(3,3);
//     vector<int> vec3(4,4);

//     arr.push_back(vec);
//     arr.push_back(vec1);
//     arr.push_back(vec2);
//     arr.push_back(vec3);

//     for(int i = 0; i < arr.size(); i++){
//         for(int j = 0; j < arr[i].size(); j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/*
TAKE TWO
*/

// static memory allocation

// dynamic memory allocation 

// vector-1 

#include<iostream>
using namespace std;

void print(vector<int> first){
    cout << "printing the vector..." << endl;
    int size = first.size();
    for(int i = 0; i < size; ++i){
        cout << first[i] << " ";
        //cout << first.at(i) << endl;
    }
    cout << endl;
    }
int main(){
    
    vector<int> first;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        int d;
        cin >> d;
        first.push_back(d);
    }
    print(first);
    
    for(int i = 0; i < 5; ++i){
        first.push_back(15);
    }
    print(first);
    
    //first.front();
    //first.back();
    first.pop_back();
    print(first);

    first.clear();
    first.push_back(1);
    print(first);
}

// vector- 2 