#include<iostream>
#include<vector>
using namespace std;
int main(){
// int n;
// cout<<"Enter the size of vector :";
// cin>>n;
// vector<int>v(n);

//input with known size
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

// input size not given
vector<int>v;
for(int i=0;i<5;i++){  // i  should not be less than  v.size
    int x;
    cin>>x;
    v.push_back(x);
 }

// output
for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}

}