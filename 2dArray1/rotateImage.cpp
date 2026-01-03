#include<iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        // transpose 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                // swap i,j and j,i
                int temp=matrix [i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        // reverse each row
        for(int k=0;k<n;k++){
            int i=0;
            int j=n-1;
            while(i<=j) {// swapping k,i and k,j
            int temp=matrix[k][i];
            matrix[k][i]=matrix[k][j];
            matrix[k][j]=temp;
            i++;
            j--;
            }
        }
        return;
    }
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }
}