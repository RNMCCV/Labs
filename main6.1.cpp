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
            cout<<"Имя: "<<name<<endl<<"Фамилия: "<<surname<<endl<<"Группа: "<<group<<endl;
        }
};

class Monitor:Student{
    private:
        int num;
    public:
        Monitor(string a, string b, string c, int d):Student(a, b, c), num(d){}
        void getinfom(){
            getinfo();
            cout<<"Номер старосты по списку: "<<num;
        }
};

int main(){
    SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string a, b, c;
	int d;
	cout<<"Введите данные о старосте" << endl;
	cout<<"Введите имя: ";
	cin>>a;
	cout<<"Введите фамилию: ";
	cin>>b;
	cout<<"Введите название группы: ";
	cin>>c;
	cout<<"Введите номер старосты по списку: ";
	cin>>d;
	Monitor g(a,b,c,d);
	cout<<"Информация о старосте:"<<endl;
	g.getinfom();
	return 0;
}
