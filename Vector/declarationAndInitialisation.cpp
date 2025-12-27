#include <iostream>
#include<vector>
using namespace std;
int main(){
   // declaration
   //vector<int>v; 

   // intialisation
   
   // with size
   // vector<int>v(5);

   // with size and specfic value
   // vector<int>v(4,5);

    //using intializer list
    vector<int>v={1,4,5,4,2};

    // Access element
    cout<<v[3]<<endl;
    cout<<v.at(3);
    

}