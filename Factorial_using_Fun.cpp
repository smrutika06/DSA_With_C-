#include<iostream>
using namespace std;

int  keyFrame(int n){
   int  fact = 1;
   for(int i=1; i<=n; i++){
    fact *= i;
   } 
   return fact;
}


int main(){
    cout<<keyFrame(4)<<endl;
    return 0;
}
