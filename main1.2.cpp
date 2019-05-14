#include <iostream>
#include <fstream>
#include "compnum.h"
#include "compnum.cpp"
#include <string>
#include <cstdlib>

using namespace std;

int main (){
    int n;
    float max=-1;
    complex z;
    z.c1=0;
    z.c2=0;
    fstream fin("complex.txt");
    fin>>n;
    complex *p=new complex [n];
    for(int i=0;i<n;i++){
        fin>>p[i].c1;
        fin>>p[i].c2;
    }
    for(int i=0;i<n;i++){
        if (mod(&p[i])>max){
            max=mod(&p[i]);
            z.c1=p[i].c1;
            z.c2=p[i].c2;
        }
    }
    cout<<z.c1<<"+"<<z.c2<<"i"<<endl;
    delete []p;
    system("pause");
    return 0;
}
