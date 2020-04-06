#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int size = 0;
    // Input an array size
    while (size < 2 || size > 100){
        cout << "Enter size of the array [2 - 100]: ";
        cin >> size;
    }
    // Generate a random array of the given size
    int array[size];
    srand((unsigned)time(0));
    for(int i=0; i<size; i++){
        array[i] = (rand()%100)+1;
    }

    //print array
    cout<< "This is the random unsorted array: "<<endl;
    for (int i = 0; i < size; i++){
        printf("%i ", array[i]);
    }
//compare numbers in array and sort
    int min;
    int temp;
    for (int i = 0; i < size - 1; i++){
        min = i;
        for (int j = i ; j < size; j++){//nested loop to do the comparison for sorting.
            if (array[j] < array[min])
                min = j;
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
    cout<< endl << "This is the random sorted array: "<<endl;
    for (int i = 0; i < size; i++){//print out sorted array
        printf("%i ", array[i]);
    }
}