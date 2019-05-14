#include <iostream>
#include <cstdlib>
#include "compnum.h"
#include "compnum.cpp"

using namespace std;

int main(){
    complex A,B;
    string s;
    char q;
    cout<<"Enter real part of the first complex number: ";
    cin>>A.c1;
    cout<<"Enter imagine part of the first complex number: ";
    cin>>A.c2;
    cout<<"Enter the operation '+,-,*,/,abs': ";
    cin>>s;
    if(s=="abs")
        cout<<mod(&A)<<endl;
    else{
        cout<<"Enter real part of the second number: ";
        cin>>B.c1;
        cout<<"Enter imagine part of the second number: ";
        cin>>B.c2;
        q=s[0];
        oper(q, &A, &B);
    }
    system("pause");
    return 0;
}
