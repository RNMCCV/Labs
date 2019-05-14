#include <iostream>
#include <conio.h>
#include <queue>
#include <string>
#include <windows.h>

using namespace std;

class Auto{
    public:
        string brand, color;
        void setinfo(){
            cout<<"Введите марку авто: ";
            cin>>brand;
            cout<<"Введите цвет авто: ";
            cin>>color;
            cout<<endl;
        }
        void getinfo(){
            cout<<"Авто"<<endl;
            cout<<"Цвет: "<<color<<endl;
            cout<<"Марка: "<<brand<<endl<<endl;
        }
};

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	queue<Auto> a;
	for (int i=0;i<3;i++){
		Auto b;
		b.setinfo();
		a.push(b);
	}
	cout<<"Автомобили в очереди:"<<endl<<endl;
	for(int i=0;i<3;i++){
		Auto b=a.front();
		b.getinfo();
		a.pop();
	}
	return 0;
}
