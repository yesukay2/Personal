#include <iostream>
#include "restaurant.cpp"//import the restaurant code

using namespace std;

int main(){
    int days = 10;
    int gallons = 10;
    for (int i = 0; i < 10; i++){
        days--;
        cout << "Its day " << i << endl;
        gallons--;

        wash();
        clean();
        boil(days);
        sanitizer(gallons);

   }
}