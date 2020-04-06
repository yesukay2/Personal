#include <iostream>

using namespace std;

int sign;
float num1;
float num2;
float result;
string decision;
float newNum;

//executiion continues from here when user enters "c"
int loop(){
            num1 = result;//initial result is set to the first input to. continue your calculation
            cout << "Choose corresponding number for operator: " <<endl;
            cout << "1. Addition(+)" <<endl;
            cout << "2. Subtraction(-)" << endl;
            cout << "3. Multiplication(*)" <<endl;
            cout << "4. Division(/)" <<endl;
            cin >> sign;

            cout << "Enter another number: " <<endl;
            cin >> num2;
//Conditions for all operations
            if (sign == 1){
                result = num1 + num2;
                //cout << endl << result <<endl;
            }

            else if (sign == 2){
                result = num1 - num2;
                //cout << endl << result;
            }

            else if (sign == 3){
                result = num1 * num2;
                //cout << endl << result << endl;
            }

            else if (sign == 4){
                result = num1 / num2;
                //cout << endl << result << endl;
            }
//Adress wrong or invalid input
            else{
                cout << endl << "Wrong input. Please check your inputs..." << endl;
                loop();
            }
//Ask user again he/she wants to continue with the calculation
            cout << endl << "Enter C to continue or Enter F to print final result: " << endl;
            cin >> decision;
             while (decision == "c" || decision == "C"){
                 loop();
             }
        }


int main(){
//asks user for first number
    cout << "Enter number: " <<endl;
    cin >> num1;
    cout << "Choose corresponding number for operator: " <<endl;//asks user to choose operation based on the corresponding number to the operation.
    cout << "1. Addition(+)" <<endl;
    cout << "2. Subtraction(-)" << endl;
    cout << "3. Multiplication(*)" <<endl;
    cout << "4. Division(/)" <<endl;
    cin >> sign;

    cout << "Enter another number: " <<endl;//asks for second number
    cin >> num2;
//conditions for operations
    if (sign == 1){
        result = num1 + num2;
        //cout << result;
    }

    else if (sign == 2){
        result = num1 - num2;
        //cout << result;
    }

    else if (sign == 3){
        result = num1 * num2;
       // cout << result;
    }

    else if (sign == 4){
        result = num1 / num2;
        //cout << result;
    }

    else{
        cout << "Wrong input. Please check your inputs..."<<endl;//adress invalid input
    }

    cout << endl << "Enter C to continue or Enter F to print final result: "<<endl;//asks user if he/she wants to continue the calculation
    cin >> decision;

    while (decision == "c" || decision == "C"){
        loop();//starts loop when user enters c
    }
    cout << result << endl;//prints results when user enters f

    return 0;
}