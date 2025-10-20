 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool flag =false;
    for(int i=2;i<=n-1;i++){
       if( n%i==0){
       flag=true;
       break;
       }
    }
    if(n==1) cout<<"neither prime nor composite number";
    else if(flag==false)  cout<<n<<" is prime number ";
    else cout<<n<<" is composite number";
 }