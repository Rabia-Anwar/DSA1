#include<iostream>
using namespace std;
int main (){
    int a , *pa;
    pa=&a;
    cout<<" pa = "<< pa<<", pa * 2 = "<<(pa*2)<<endl;
}