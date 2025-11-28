#include<iostream>
using namespace std;

int power(int x,int y=4){
   return x*power(x*4-1)
}

int main(){
   return 0;
}