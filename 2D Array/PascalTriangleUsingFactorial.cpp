#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int pascal = factorial(i)/(factorial(j)*factorial(i-j));
            cout<<pascal<<" ";
        }
        cout<<endl;
    }
    return 0;
}