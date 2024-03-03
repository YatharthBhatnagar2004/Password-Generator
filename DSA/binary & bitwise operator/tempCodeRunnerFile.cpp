    int n=0;
    cin>>n;
    n=n*(-1);
    float ans=0;
    int i=0;
    while (n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        ++i;
    }
    int ans1=ans;
    int newans=(~ans1);
    newans=newans+1;
    cout<<newans;