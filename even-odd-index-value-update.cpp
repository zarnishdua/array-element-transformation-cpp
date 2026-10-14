#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array :"<<endl;
    cin>>n;
int arr[n];
    cout<<"Enter the  element of array :"<<endl;
for(int i=0; i<=n-1; i++){
   cin>>arr[i];
}
for(int i=0; i<=n-1; i++){
if(arr[i]%2==0)
   cout<<arr[i]+10<<" ";
else
    cout<<arr[i]*2<<" ";
}
return 0;
}
