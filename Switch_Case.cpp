#include<iostream>
using namespace std;

int switchCase(){

int n = 2;
switch (n){
case 1:
cout<<"Blue";
break;
case 2:
cout<<"orange";
break;
case 3:
cout<<"yellow";
break;
default:
cout<<"this color not available here";
}
}

int main(){
    switchCase();
return 0;
}
