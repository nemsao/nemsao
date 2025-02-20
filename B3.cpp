
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
bool b3(int a[],int target ,int n){
    for(int i=0;i<=n ;i++){
       for(int j=0;j<=n;j++){
           if(a[i]+a[j]==target){
               cout<<"["<<i<<","<<j<<"]"<<endl;
               return true;
           }
       }
       
    }
    return false;
}


int main()

{ 
  // O(n)==n*n;  
  int n=4;
    int a[n]={0,1,2,3,4};
    bool kq= b3(a,3,n );
   //cout<<kq;
    return 0;
}
