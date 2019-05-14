#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class complex{
    private:
        float re;
        float im;
    public:
        void setre(float a);
        void setim(float a);

        float getarg();

        float getmod();
};

void complex::setre(float a){
    re=a;
}

void complex::setim(float a){
    im=a;
}

float complex::getarg(){
    return atan(im/re);
}

float complex::getmod(){
    return sqrt(pow(re,2)+pow(im,2));
}

int main(){
    complex A;
    float re1, im1;
    cout<<"Enter real part: ";
    cin>>re1;
    cout<<"Enter imaginary part: ";
    cin>>im1;
    A.setre(re1);
    A.setim(im1);
    cout<<"Abs of this complex number: "<<A.getmod()<<endl;
    cout<<"Arg of this complex number: "<<A.getarg();
    return 0;
}
