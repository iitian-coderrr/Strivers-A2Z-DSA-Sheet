#include<iostream>
using namespace std;

int main() {
  // Write your code here
  int digit;
  cin>>digit;
  int evenSum=0,oddSum=0;
  while(digit!=0)
  {
    int unitDigit=digit%10;
    if(unitDigit%2==0)
    {
      evenSum+=unitDigit;
    }
    else{
      oddSum+=unitDigit;
    }
    digit/=10;

  }
  cout<<evenSum<<" "<<oddSum;
}
