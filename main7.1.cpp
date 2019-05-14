#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

class Human{
    protected:
        string name, surname;
        int age;
    public:
        Human(){}
        Human(string a, string b, int c):surname(a), name(b), age(c){}
        virtual void print()=0;
        ~Human(){}
};

class Student:public Human{
    public:
        Student(){}
        Student(string a, string b, int c):Human(a, b, c){}
        void print(){
            cout<<"�������"<<endl;
            cout<<"���: "<<name<<endl;
            cout<<"�������: "<<surname<<endl;
            cout<<"�������: "<<age<<endl;
        }
        ~Student(){}
};

class Boss:public Human{
    private:
        int workers;
    public:
        Boss() {}
        Boss(string a, string b, int c, int d) :Human(a, b, c), workers(d){}
        void print(){
            cout<<"���������"<<endl;
            cout<<"���: "<<name<<endl;
            cout<<"�������: "<<surname<<endl;
            cout<<"�������: "<<age<<endl;
            cout<<"���-�� �����������: "<<workers<<endl;
        }
        ~Boss(){}
};

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string a, b;
	int c, d;
	cout<<"������� ��� ��������: ";
	cin>>a;
	cout<<"������� ������� ��������: ";
	cin>>b;
	cout<<"������� ������� ��������: ";
	cin>>c;
	Student s(a,b,c);
    cout<<endl<<"������� ��� �����: ";
	cin>>a;
	cout<<"������� ������� �����: ";
	cin>>b;
	cout<<"������� ������� �����: ";
	cin>>c;
    cout<<"������� ���������� �����������: ";
    cin>>d;
    Boss B(a,b,c,d);
    s.print();
    B.print();
	return 0;
}
