#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str="Hello World";
    // cout<<str.size();
    // cout<<str.length();

    // string str="abcde";
    // cout<<str<<endl;
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str;

    // string str="abcde";
    // cout<<str<<endl;
    // str.pop_back();
    // str.pop_back();
    // cout<<str;

    // string s="abc";
    // cout<<s<<endl;
    // //string t="def";
    // //s =s + t;
    // s = "xyz" + s;
    // cout<<s;

    string s="abcdef"; // 0,1,2,3,4,5
    cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // reverse(s.begin()+2,s.end());  // abfedc
    //reverse(s.begin()+1,s.end()-1);   // aedcbf
    reverse(s.begin()+2,s.begin()+5);  // 2 to 4  abedcf
    cout<<s;
}