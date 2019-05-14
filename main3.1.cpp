#include <iostream>
#include <string>

using namespace std;

class child{
    private:
        string name;
        string surname;
        int age;
    public:
        void setage(int a);
        void setname(string s);
        void setsurname(string s);
        int getage();
        string getname();
        string getsurname();

};

void  child::setage(int a){
    age=a;
}

void child::setname(string s){
    name=s;
}

void child::setsurname(string s){
    surname=s;
}

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
    int n,age1;
    string name1, surname1;
    cout<<"Enter the number of children: ";
    cin>>n;
    child mas[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter the surname, name and age of child number "<<i+1<<": ";
        cin>>surname1>>name1>>age1;
        mas[i].setage(age1);
        mas[i].setname(name1);
        mas[i].setsurname(surname1);
    }
    for(int i=0;i<n;i++){
        cout<<"Child "<<i+1<<": "<<mas[i].getsurname()<<" "<<mas[i].getname()<<" "<<mas[i].getage()<<endl;
    }
return 0;
}
