#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "compnum.h"

using namespace std;

float mod(complex *a){
     return (sqrt(pow(a->c1, 2) + pow(a->c2, 2)));
}

void oper(char zn, complex *a, complex *b){
    switch(zn){

        case'+':{
            cout<<a->c1+b->c1<<"+"<<a->c2+b->c2<<"i"<<endl;
            break;
        }

        case'-':{
            cout<<a->c1-b->c1<<"+"<<a->c1-b->c2<<"i"<<endl;
            break;
        }

        case'*':{
            cout<<a->c1*b->c1-a->c2*b->c2<<"+"<<a->c1*b->c2+b->c1*a->c2<<"i"<<endl;
            break;
        }

        case'/':{
            if((b->c1!=0)&&(b->c2!=0))
            cout<<(a->c1*b->c1+a->c2*b->c2)/(pow(b->c1,2)+pow(b->c2,2))<<"+"<<(b->c1*a->c2-a->c1*b->c2)/(pow(b->c1,2)+pow(b->c2,2))<<"i"<<endl;
        }

        default:{
            cout<<"Error."<<endl;
        }
    }
}
