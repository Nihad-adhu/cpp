#include <iostream>
using namespace std;

int main (){

    int a=50,b=30,swap;
    cout<<"before swappimg : a="<<a<<",b="<<b<<"\n";
    swap=a;
    a=b;
    b=swap;
    cout<<"after swapping : a="<<a<<", b="<<b<<"\n";
}