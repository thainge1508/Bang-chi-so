#include <iostream>
#include <string>

using namespace std;

void tennv(string x ){
    cout << "=================================\n";
    cout << " CHAO MUNG " << x << " DEN VOI THE GIOI 2D RPG!\n";
    cout << "=================================\n"; 
}
int pt(int x){
    cout << "CHI SO PHONG THU: "<< x << endl;
    return x;
}
int atk(int x){
    cout << "CHI SO TAN CONG: "<< x << endl;
    return x;
}
int dex(int x){
    cout << "CHI SO NE DON: "<< x << endl;
    return x;
}
int main() {
    string a;
    int b, c, d;
    cout << "Nhap ten nhan vat: ";
    getline(cin,a);
    tennv(a);
    cout << "Nhap chi so phong thu: " ;
    cin >> b;
    cout << "Nhap chi so tan cong: " ;
    cin >> c;
    cout << "Nhap chi so ne don: " ;
    cin >> d;
    cout << "=================================\n";
    cout << "THONG TIN NHAN VAT\n";
    cout << "Ten nhan vat: " << a << endl;
    pt(b);
    atk(c);
    dex(d);
    cout << "=================================\n";
    cout << "CHI SO CHUNG LA " <<(b+c+d)/3<<endl;
    return 0;
}