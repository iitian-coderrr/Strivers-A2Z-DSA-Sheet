void seeding(int n) {
  // Write your code here.
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<=n-i;j++)
    {
      cout<<"* ";
    }
    cout<<"\n";
  }
  cout<<"*";
}