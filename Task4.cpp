#include<iostream>
using namespace std;
int main(){
   
  
   int size;
   cout<<"Enter the size of array"<<endl;
   cin>>size;
    int arr1[size];
   int arr2[size];
   int i=0;
   while(i<size){
       cin>>arr1[i];
       i++;
   }
   int j=0;
   while(j<size)
   {
      arr2[j]=arr1[i];
      j++;
   }
   
   
  int k = size- 1;  
    while (k >= 0) {
         k--;
        cout << arr2[k] << " ";
        
   }
   cout<<endl;
   return 0;
}
   
   
   
   
   
   
   
   


