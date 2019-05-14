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
            cout<<"Студент"<<endl;
            cout<<"Имя: "<<name<<endl;
            cout<<"Фамилия: "<<surname<<endl;
            cout<<"Возраст: "<<age<<endl;
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
            cout<<"Начальник"<<endl;
            cout<<"Имя: "<<name<<endl;
            cout<<"Фамилия: "<<surname<<endl;
            cout<<"Возраст: "<<age<<endl;
            cout<<"Кол-во подчиненных: "<<workers<<endl;
        }
        ~Boss(){}
};

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string a, b;
	int c, d;
	cout<<"Введите имя студента: ";
	cin>>a;
	cout<<"Введите фамилию студента: ";
	cin>>b;
	cout<<"Введите возраст студента: ";
	cin>>c;
	Student s(a,b,c);
    cout<<endl<<"Введите имя босса: ";
	cin>>a;
	cout<<"Введите фамилию босса: ";
	cin>>b;
	cout<<"Введите возраст босса: ";
	cin>>c;
    cout<<"Введите количество подчиненных: ";
    cin>>d;
    Boss B(a,b,c,d);
    s.print();
    B.print();
	return 0;
}
