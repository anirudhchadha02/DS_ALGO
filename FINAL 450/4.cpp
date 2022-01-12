#include<iostream>
using namespace std;
bool compare(int a,int b){
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a>b;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   for(int i=0;i<n-1;i++){
    if(compare(arr[i],arr[i+1]))
     { 
         swap(arr[i],arr[i+1]);
         
         for(int k= i-1;k>=0;k--){
         if(compare(arr[i],arr[k])){
                continue;
         }
         else
           swap(arr[i],arr[k]);
           i--;
       }
     }
     else 
      continue;
   }

   for(int j=0;j<n;j++){
       cout<<arr[j]<<",";
   }
 return 0;
}