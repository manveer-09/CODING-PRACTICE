#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans,string org,int idx,vector<string>& v,bool flag ){
    if(idx==org.length()){
       v.push_back(ans);
        return;
    }
    char ch=org[idx];
    if(org.length()==1){
       if(flag==true) storeSubset(ans+ch,org,idx+1,v,true);
        storeSubset(ans,org,idx+1,v,true);
        return;
    }
    char dh=org[idx+1];
    if(ch==dh){
        if(flag==true) storeSubset(ans+ch,org,idx+1,v,true);
        storeSubset(ans,org,idx+1,v,false);
    }
    else{
        if(flag==true) storeSubset(ans+ch,org,idx+1,v,true);
        storeSubset(ans,org,idx+1,v,true);
    }
}
int main(){
    string str="aab";
    vector<string>v;
    storeSubset("",str,0,v,true);
    for(string ele:v){
        cout<<ele<<endl;
    }
}