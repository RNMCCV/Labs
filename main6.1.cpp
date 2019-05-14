#include <iostream>
#include <string>
#include <clocale>
#include <windows.h>
#include <conio.h>

using namespace std;

class Student{
    protected:
        string name, surname, group;
    public:
        Student(string a, string b, string c):name(a), surname(b), group(c){}
        void getinfo(){
            cout<<"���: "<<name<<endl<<"�������: "<<surname<<endl<<"������: "<<group<<endl;
        }
};

class Monitor:Student{
    private:
        int num;
    public:
        Monitor(string a, string b, string c, int d):Student(a, b, c), num(d){}
        void getinfom(){
            getinfo();
            cout<<"����� �������� �� ������: "<<num;
        }
};

int main(){
    SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string a, b, c;
	int d;
	cout<<"������� ������ � ��������" << endl;
	cout<<"������� ���: ";
	cin>>a;
	cout<<"������� �������: ";
	cin>>b;
	cout<<"������� �������� ������: ";
	cin>>c;
	cout<<"������� ����� �������� �� ������: ";
	cin>>d;
	Monitor g(a,b,c,d);
	cout<<"���������� � ��������:"<<endl;
	g.getinfom();
	return 0;
}
