#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(1);
    v.push_back(4);
    int idx=-1;
    int x=4;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx=i;
    //     }
   // }

   for(int i=v.size()-1;i>0;i--){
     if(v[i]==x){
           idx=i;
           break;
        }
   }
    cout<<idx;

}