#include<iostream>

using namespace std;

int diff(int a,int b){
    return (b-a);
}
int summ(int a,int b){
    return (a+b);
}
int main(){
    setlocale(LC_ALL, "rus");
    int x,y;
    char zn;
    cout<<"������� 2 �����: ";
    cin>>x>>y;
    cout<<"������� ���� �������� '+,-': ";
    cin>>zn;
    int (*pr)(int a,int b);
    switch(zn){
        case '+':{
            pr=diff;
            break;
        }
        case '-':{
            pr=summ;
            break;
        }
        default:{
            cout<<"Error.";
        }
    }
    cout<<pr(x,y);
    return 0;
}
