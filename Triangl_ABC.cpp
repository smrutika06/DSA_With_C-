#include<iostream>
using namespace std;

int main(){
    int num=5;
    char ch='A';

    for(int i=0; i<num; i++){

        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        
          cout<<endl;  
          ch++;
        }
       return 0;
    }
   