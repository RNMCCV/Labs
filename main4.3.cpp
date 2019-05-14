#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class complex{
    private:
        float re;
        float im;
    public:
        complex(int re2, int im2){
            re=re2;
            im=im2;
        }
        ~complex(){};

        float getarg();

        float getmod();
};

float complex::getarg(){
    return atan(im/re);
}

float complex::getmod(){
    return sqrt(pow(re,2)+pow(im,2));
}

int main(){
    float re1, im1;
    cout<<"Enter real part: ";
    cin>>re1;
    cout<<"Enter imaginary part: ";
    cin>>im1;
    complex A(re1,im1);
    cout<<"Abs of this complex number: "<<A.getmod()<<endl;
    cout<<"Arg of this complex number: "<<A.getarg();
    A.~complex();
    return 0;
}
