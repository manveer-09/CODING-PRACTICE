

    int n;
    cout<<"No. of rows :";
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";