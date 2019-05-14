#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;

class Complex{
    private:
        double re, im;
    public:
        Complex(double a, double b):re(a), im(b){}
        Complex(){}
        ~Complex(){}
        friend istream& operator>>(istream &cin, Complex &h){
            cout<<"Действительная часть комлексного числа: ";
            cin>>h.re;
            cout<<"Мнимая часть комплексного числа: ";
            cin>>h.im;
            cout<<endl;
            return cin;
        }
        friend ostream& operator<<(ostream &cout, Complex &h){
            cout<<h.re<<" + "<<h.im<<"i"<<endl;
            cout<<endl;
            return cout;
        }
        friend bool operator==(const Complex &n, const Complex &k){
            if (n.re==k.re&&n.im==k.im)
                return 1;
            else return 0;
        }
        friend const Complex operator++(Complex &m, int){
            Complex Value(m.re, m.im);
            m.re++;
            return Value;
        }
        friend const Complex operator--(Complex &g, int){
            Complex Value(g.re, g.im);
            g.re--;
            return Value;
        }
        friend const Complex operator+(const Complex &l, const Complex &r){
            return Complex(l.re+r.re, l.im+r.im);
        }
        double mod(){
            return sqrt(re*re+im*im);
        }
};

void comp(Complex &a, Complex &b, Complex &c){
	if ((a==b)&&(b==c))
		cout<<"Все комплексные числа равны"<<endl;
	else if (a==b)
		cout<<"Первое и второе комплексное числа равны"<<endl;
	else if (b==c)
		cout<<"Второе и третье комплексное числа равны"<<endl;
	else if (a==c)
		cout<<"Первое и третье комплексное числа равны"<<endl;
}
void mod1(Complex &a){
	cout<<"Модуль числа = "<<a.mod()<<endl;
}

void inc(Complex &a){
	cout<<"Инкремент первого комплексного числа: ";
	a++;
	cout<<a;
}

void dec(Complex &a) {
	cout<<"Декремент второго комплексного числа: ";
	a--;
	cout << a;
}

void add(Complex &a, Complex &b){
	Complex res;
	res=a+b;
	cout<<"Сложение первого и второго комплексного числа: "<<res;
}

int main(){
	setlocale(LC_ALL, "rus");
	Complex A[3];
	cout<<"Введите комплексные числа"<<endl;
	for (int i=0;i<3;i++){
		cin>>A[i];
		mod1(A[i]);
		cout<<endl;
	}
	comp(A[0],A[1],A[2]);
	inc(A[0]);
	dec(A[1]);
	add(A[0],A[1]);
	return 0;
}
