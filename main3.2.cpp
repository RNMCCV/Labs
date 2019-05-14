#include <iostream>
#include <string>

using namespace std;

class tiles{
    private:
        string brand;
        int size_h;
        int size_w;
        int price;
    public:
        void setbrand(string s);
        void setsizeh(int a);
        void setsizew(int a);
        void setprice(int a);

        void getdata();
};

void tiles::setbrand(string s){
    brand=s;
}

void tiles::setsizeh(int a){
    size_h=a;
}

void tiles::setsizew(int a){
    size_w=a;
}

void tiles::setprice(int a){
    price=a;
}

void tiles::getdata(){
    cout<<brand<<" "<<size_h<<" "<<size_w<<" "<<price<<endl;
}

int main(){
    string brand1;
    int size_h1, size_w1, price1,n;
    cout<<"Enter the number of brands: ";
    cin>>n;
    tiles mas[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter the brand, height, width and price of tile number "<<i+1<<": ";
        cin>>brand1>>size_h1>>size_w1>>price1;
        mas[i].setbrand(brand1);
        mas[i].setsizeh(size_h1);
        mas[i].setsizew(size_w1);
        mas[i].setprice(price1);
    }
    for(int i=0;i<n;i++){
        cout<<"Data of this tile(brand, height, wideness, price): "<<endl;
        mas[i].getdata();
    }
}
