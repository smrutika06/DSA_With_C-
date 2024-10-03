#include<iostream>
using namespace std;

int minOfFun(int a, int b){
     if(a<b){
        // cout<<a<<"is grater than"<<b;
        return a;
     }
        else{
            // cout<<b<<"is not greater than"<<a;
            return b;
            }
     }

int main(){
cout<<"min:-"<<minOfFun(21,6)<<endl;
return 0;
}