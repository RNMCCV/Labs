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
        tiles(string brand2, int size_h2, int size_w2, int price2){
            brand=brand2;
            size_h=size_h2;
            size_w=size_w2;
            price=price2;
        }
        ~tiles(){};
        void getdata();
};

void tiles::getdata(){
    cout<<brand<<" "<<size_h<<" "<<size_w<<" "<<price<<endl;
}

int main(){
    string brand1;
    int size_h1, size_w1, price1;
    cout<<"Enter the brand, height, width and price of the tile: ";
    cin>>brand1>>size_h1>>size_w1>>price1;
    tiles t1(brand1, size_h1, size_w1, price1);
    cout<<"Data of this tile(brand, height, wideness, price): "<<endl;
    t1.getdata();
    t1.~tiles();
    return 0;
}
