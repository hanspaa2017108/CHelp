#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &v){
    int n = v.size();
    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
}

void bubblesort(vector<int> &v){
    int n = v.size();
    // outer loop for iterations
    for(int i = 0; i < n; ++i){
        // inner loop for comparisons
         for(int j = 0; j < n - i - 1; ++j){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
         }
    }
}
int main(){
    vector<int> v = {23,32,24,42,25,52,26,62}; 
    bubblesort(v);
    print(v);
    return 0;
}