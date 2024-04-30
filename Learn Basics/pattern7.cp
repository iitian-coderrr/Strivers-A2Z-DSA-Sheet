void nStarTriangle(int n) {
    // Write your code here.
    int spaces=n-1;
    int stars=1;
    while(n>0){
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        for(int i=0;i<stars;i++){
            cout<<"*";
        }
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        cout<<"\n";
        spaces--;
        stars+=2;
        n--;
    }
}