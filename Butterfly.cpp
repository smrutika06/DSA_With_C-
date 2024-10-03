#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        if(i!=n){
            for(int j=0; j<2*(n-i)-2; j++){
                cout<<" ";
            }
            for(int j=0; j<i+1; j++){
                 cout<<"*";
            }
           
        }
        cout<<endl;
    }
       //Another Section

       for(int i=0; i<n; i++){
       for(int j=0; j<n-i; j++){
        cout<<"*";
       }
       if(i !=n){
        for(int j=0; j<i*2; j++){
            cout<<" ";
           
        }
        for(int j=0; j<n-i; j++)
         cout<<"*";
       }
       cout<<"\n";
       }
    return 0;
}