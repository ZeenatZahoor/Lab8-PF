// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
    }
    return 0 ;
}