#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

class Complex{
    public:
        double re, im;
        void setinfo(){
            cout<<"������� ����������� �����"<<endl;
            cout<<"�������������� �����: ";
            cin>>re;
            cout<<"������ �����: ";
            cin>>im;
            cout<<endl;
        }
        void getinfo(){
            cout<<re<<"+"<<im<<"i"<<endl ;
        }
};

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	list<Complex> a;
	for (int i=0;i<2;i++){
		Complex b;
		b.setinfo();
		a.push_back(b);
	}
	cout<<endl<<"����������� �����: "<<endl;
	for (Complex c:a)
		c.getinfo();
	return 0;
}
