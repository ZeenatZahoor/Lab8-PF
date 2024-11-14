#include<iostream>
using namespace std;
int main(){
    int num;
    int i=1;
    int prod=1;
    cout<<"Enter the number"<<endl;
    cin>>num;

    while(i<=10){
       prod=num*i;
       
        cout<<num <<"x"<<i<<"="<<prod<<endl;
         i++;
    }
     
}