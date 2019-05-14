#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class vector{
    private:
        float x;
        float y;
        float z;
    public:
        void setx(float t);
        void sety(float t);
        void setz(float t);

        void friend add(vector a, vector b);
        void friend sub(vector a, vector b);

        float getmod();
};

void vector::setx(float t){
    x=t;
}

void vector::sety(float t){
    y=t;
}

void vector::setz(float t){
    z=t;
}

void add(vector a, vector b){
    cout<<a.x+b.x<<" "<<a.y+b.y<<" "<<a.z+b.z;
}

void sub(vector a, vector b){
    cout<<a.x-b.x<<" "<<a.y-b.y<<" "<<a.z-b.z;
}

float vector::getmod(){
    return sqrt(x*x+y*y+z*z);
}

int main(){
    float x1,y1,z1;
    vector A,B;
    cout<<"Enter the first vector's coords: ";
    cin>>x1>>y1>>z1;
    A.setx(x1);
    A.sety(y1);
    A.setz(z1);
    cout<<"Etner the second vector's coords: ";
    cin>>x1>>y1>>z1;
    B.setx(x1);
    B.sety(y1);
    B.setz(z1);
    cout<<"Abs of the first vector: "<<A.getmod()<<endl;
    cout<<"Abs of the second vector: "<<B.getmod()<<endl;
    cout<<"Summ of the vectors: ";
    add(A, B);
    cout<<"\nSub of the vectors: ";
    sub(A,B);
    return 0;
}
