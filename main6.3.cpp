#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Animal{
    protected:
        int age;

    public:
        void setinfo(){
            cout<<"������� �������: ";
            cin>>age;
        }
        void getinfo() {
            cout<<"�������: "<<age<<" ���"<<endl;

        }
};

class Cat:Animal{
    private:
        string breed;
    public:
        void setinfocat() {
            cout<<"������� ������ �����: ";
            cin>>breed;
            setinfo();
        }
        void getinfocat(){
            cout<<"������ �����: "<<breed<<endl;
            getinfo();
        }
};

class Dog:Animal{
    private:
        string breed;
    public:
        void setinfodog(){
            cout<<"������� ������ ������: ";
            cin>>breed;
            setinfo();
        }
        void getinfodog(){
            cout<<"������ ������: "<<breed<<endl;
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
