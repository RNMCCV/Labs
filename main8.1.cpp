#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <vector>

using namespace std;

class Student{
    private:
        string name, surname;
        int number;
    public:
        void setinfo(){
            cout<<"������� ��� ��������: ";
            cin>>name;
            cout<<"������� ������� ��������: ";
            cin>>surname;
            cout<<"������� ����� �������� �� ������: ";
            cin>>number;
            cout<<endl;
        }
        void getinfo(){
            cout<<"���: "<<name<<endl;
            cout<<"������: "<<surname<<endl;
            cout<<"����� �� ������: "<<number<<endl<<endl;
        }
};

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	vector<Student> a(2);
	for (int i=0;i<a.size();i++){
		a[i].setinfo();
	}
	for (int i = 0;i<a.size();i++){
		a[i].getinfo();
	}
	return 0;
}
