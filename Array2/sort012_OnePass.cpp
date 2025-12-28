#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& v){
   int low =0;
   int mid=0;
   int high=v.size()-1;
   while(mid<high){
    if(v[mid]==2){
        int temp=v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
    }
    else if (v[mid]==0){
        int temp=v[mid];
        v[mid]=v[low];
        v[low]=temp;
        mid++;
        low++;
    }
    else{
         mid++;
    }
   }
   return;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size :";
    cin>>n;
    cout<<"Enter element :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort012(v);   // dutch flag algo
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
}