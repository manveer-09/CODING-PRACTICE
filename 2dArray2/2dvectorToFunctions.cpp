#include<iostream>
#include<vector>
using namespace std;
int change2Dvector(vector< vector<int> > &v){
    v[0][2]=98;
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);

    vector<int> v2 ;
    v2.push_back(5);
    v2.push_back(6);

    vector<int> v3;
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);

    vector< vector<int> >v; // {{1,3,2},{5,6},{7,8,9,10,11}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][2]<<endl;
    change2Dvector(v);
    cout<<v[0][2]<<endl;

}