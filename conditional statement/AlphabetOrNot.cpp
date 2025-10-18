# include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    // A to Z -> 97 to 122
    // a to z -> 65 to 90
    int ascii=int(ch);
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        cout<<"The character is alphabet.";
    }
    else{
        cout<<"The character is not alphabet.";
    }
}