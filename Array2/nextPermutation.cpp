#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& v){
    int n=v.size();
    // finding pivot index
    int idx=-1;
    for(int i=n-2;i>=0;i--){
         if(v[i]<v[i+1]){
            idx=i;
            break;
         }
    }

    if(idx==-1){  // if array is already greater
        reverse(v.begin(),v.end());
        return;
    }

    // reverse/sorting
    reverse(v.begin()+idx+1,v.end());

    // finding the just greater element than idx
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }

    // swapping idx and j
    int temp=v[idx];
    v[idx]=v[j];
    v[j]= temp;
    return;
}
int main(){
    vector<int> arr={1,4,3,2};

    for(int i=0;i<=arr.size()-1;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;

    nextPermutation(arr);
      
    for(int i=0;i<=arr.size()-1;i++){
      cout<<arr[i]<<" ";
    }
}