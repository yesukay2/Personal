#include <iostream>
using namespace std;

int result = 0;

    int sum_from_to(int first, int last){
        for(int i = first; i <= last; i++){
            result = result + i;//add to result each time loop runs
        }
        cout<<result<<endl;//print result
    }




void digit_name(int num){
    if(num == 1){
        cout<<"One";
    }
    else if(num == 2){
        cout<< "Two";
    }
     else if(num == 3){
        cout<< "Three";
    }
     else if(num == 4){
        cout<< "Four";
    }
     else if(num == 5){
        cout<< "Five";
    }
     else if(num == 6){
        cout<< "Six";
    }
     else if(num == 7){
        cout<< "Seven";
    }
     else if(num == 8){
        cout<< "Eight";
    }
     else if(num == 9){
        cout<< "Nine";
    }
    else{
        cout<<"digit error"<<endl;//print error code when number is out of bounds
    }
}





char name[100];
int age = 0;

void your_name_age(){
    cout<<"Please enter your name: ";
    cin>> name;//takes input from console
    cout<<"Hello " << name <<" Please enter your age: ";
    cin>> age;//takes age from console
    cout<<name <<" you're " << age << " years old. You still have the chance to change the world"<<endl;
}



int is_prime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){//check the modulo for each number ranging from i to num with num
          return 0;  
        }
    }
    return 1;
    
}

//main funnction to run all functions
int main(){
    sum_from_to(2,5);
    digit_name(0);
    sum_from_to(2,3);
    your_name_age();
    is_prime(7);
    return 0;
}