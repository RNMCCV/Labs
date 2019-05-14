#include <iostream>
#include <string>

using namespace std;

class child{
    private:
        string name;
        string surname;
        int age;
    public:
        child(int a, string name2, string surname2){
            age=a;
            name=name2;
            surname=surname2;
        }
        ~child(){};
        int getage();
        string getname();
        string getsurname();

};

string child::getname(){
    return name;
}

string child::getsurname(){
    return surname;
}

int child::getage(){
    return age;
}

int main(){
    int age1;
    string name1, surname1;
    cout<<"Enter surname, name and age of the first child: ";
    cin>>surname1>>name1>>age1;
    child ch1(age1, name1, surname1);
    cout<<"\nChild: "<<ch1.getsurname()<<" "<<ch1.getname()<<" "<<ch1.getage()<<endl;
    ch1.~child();
    return 0;
}
