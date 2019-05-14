#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Animal{
    protected:
        int age;

    public:
        void setinfo(){
            cout<<"Введите возраст: ";
            cin>>age;
        }
        void getinfo() {
            cout<<"Возраст: "<<age<<" лет"<<endl;

        }
};

class Cat:Animal{
    private:
        string breed;
    public:
        void setinfocat() {
            cout<<"Введите породу кошки: ";
            cin>>breed;
            setinfo();
        }
        void getinfocat(){
            cout<<"Порода кошки: "<<breed<<endl;
            getinfo();
        }
};

class Dog:Animal{
    private:
        string breed;
    public:
        void setinfodog(){
            cout<<"Введите породу собаки: ";
            cin>>breed;
            setinfo();
        }
        void getinfodog(){
            cout<<"Порода собаки: "<<breed<<endl;
            getinfo();
        }
};

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Cat a;
	Dog b;
	a.setinfocat();
	cout<<endl;
	b.setinfodog();
	cout<<endl;
	a.getinfocat();
	cout<<endl;
	b.getinfodog();
	return 0;
}
