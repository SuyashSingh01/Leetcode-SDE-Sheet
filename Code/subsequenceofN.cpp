#include<iostream>
#include<vector>
using namespace std;

void  print(int i,int n,vector<int>v,vector<int>arr){
    if(i>n){
    if(v.size()>0){
    matrix.push_back(v);
    // cout<<endl;
    }
    return ;
    }
    print(i+1 ,n,v,arr);
    v.push_back(arr[i]);
    print(i+1,n,v,arr);
    // v.pop_back();
}

int main() {
  
    int n,sum=0;
    vector<int>v,arr;
    arr={1,2,3};
    vector<vector<int>>matrix;
    print(0 ,2,v,arr);
    for(auto it:matrix){
    for(auto i:it)
    cout<<i<<" ";
    cout<<endl;
    }
    
    // cin>>n;
}
// vector<vector<int>> print(int i, int n, vector<int> v, vector<int> arr, vector<vector<int>>& matrix) {
//     if (i > n) {
//         if (v.size() > 0) {
//             matrix.push_back(v);
//         }
//         return matrix;
//     }
//     print(i + 1, n, v, arr, matrix);
//     v.push_back(arr[i]);
//     print(i + 1, n, v, arr, matrix);
//     v.pop_back();
//     return matrix;
// }

// int main() {
//     vector<int> v, arr = {1, 2, 3};
//     vector<vector<int>> matrix;
//     print(0, arr.size() - 1, v, arr, matrix);

//     for (auto it : matrix) {
//         for (auto i : it)
//             cout << i << " ";
//         cout << endl;
//     }
// }
