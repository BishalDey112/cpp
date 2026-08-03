#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout << a << endl;
    cout << (++a) << endl;//  pre increment pehle increment karo uske baad use karlena
    cout << (a++) << endl;// increment toh hoga but print next line me hoga increment wala
    cout << a << endl; //idhar increment wala print hoga
    cout << (--a) << endl;// idhar its pre decrement same like pre increment
    cout << (a--) << endl; // same like post decrement
    cout << a;

    return 0;
}