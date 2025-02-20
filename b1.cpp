
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
bool b1(string a){
    for(int i=0;i<a.size()/2 ;i++){
      if(a[i]!=a[a.size()-1-i]){
          return false;
      }
       
    }
    return true;
}


int main()

{   
    bool kq= b1("MADAM" );
   cout<kq;
    return 0;
}
