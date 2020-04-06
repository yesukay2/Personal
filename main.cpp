#include <iostream>
using namespace std;

//Basic activities a human being performs everyday.
void wash(){
    cout << "I washed the dishes this morning so it can be used." << endl;
}

void clean(){
    cout << "The manager said the table should be clean always" << endl;
}

int boil(int days){
    cout << "I didn't forget boil the catlery" << endl;
    cout << "I have " << days << " more day(s) to go" <<endl;
}

int sanitizer(int gallons){
    cout << "I disinfected the place today. I used 1 gallon of sanitizer" << endl;
    cout << "We have " << gallons <<" gallons of sanitizer left"<<endl;
}

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