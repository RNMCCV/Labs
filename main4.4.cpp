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
        vector(float x2,float y2,float z2){
            x=x2;
            y=y2;
            z=z2;
        }
        ~vector(){};

        void friend add(vector a, vector b);
        void friend sub(vector a, vector b);

        float getmod();
};

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
    cout<<"Enter the first vector's coords: ";
    cin>>x1>>y1>>z1;
    vector A(x1,y1,z1);
    cout<<"Etner the second vector's coords: ";
    cin>>x1>>y1>>z1;
    vector B(x1,y1,z1);
    cout<<"Abs of the first vector: "<<A.getmod()<<endl;
    cout<<"Abs of the second vector: "<<B.getmod()<<endl;
    cout<<"Summ of the vectors: ";
    add(A, B);
    cout<<"\nSub of the vectors: ";
    sub(A,B);
    A.~vector();
    B.~vector();
    return 0;
}
