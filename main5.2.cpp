#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;

class Vector{
    private:
        double x, y;
    public:
        Vector(){}
        Vector(double a, double b):x(a), y(b){}
        Vector(const Vector& f){
            x=f.x;
            y=f.y;
        }
        double mod(){
            return sqrt(x*x+y*y);
        }
        friend istream& operator>>(istream &cin, Vector &h){
            cout<<"x = ";
            cin>>h.x;
            cout<<"y = ";
            cin>>h.y;
            return cin;
        }
        friend ostream& operator<<(ostream &cout, Vector &h){
            cout<<"("<<h.x<<", "<<h.y<<")"<<endl;
            return cout;
        }
        friend bool operator==(const Vector &k, const Vector &m){
            if (k.x==m.x&&k.y==m.y)
                return 1;
            else
                return 0;
        }
        friend const Vector operator+(const Vector &l, const Vector &r){
            return Vector(l.x+r.x,l.y+r.y);
        }
        ~Vector(){}
};



int main(){
	setlocale(LC_ALL, "rus");
	cout<<"2 вектора"<<endl;
	Vector a, b;
	cout<<"Введите координаты векторов"<<endl;
	cout<<"Вектор a"<<endl;
	cin>>a;
	cout<<"Вектор b"<<endl;
	cin>>b;
	Vector c;
	c=a+b;
	if (a==b)
		cout<<"Векторы равны"<<endl;

	else
        cout<<"Векторы не равны"<<endl;
    cout<<"Модуль вектора a = "<<a.mod()<<endl;
    cout<<"Модуль вектора b = "<<b.mod()<<endl;
	cout<<"Координаты вектора с = "<<c;
	cout<<endl;
	return 0;
}
