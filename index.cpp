#include <iostream>

using namespace std;

int main (){

// intialized array
    int array;
            
    cin >> array;


// creating pointer to elOne reference
    int *p = &array;

// * gets value from &elOne reference or array
    cout << *p << endl;

    cout << endl << endl;

// for loop looping through pointer notation of array to show values
    for (int i = 0; i < 5; i++){
        cout << "array [" << i << "] = " <<*(p + i) << endl;

    }



    return 0;
}

// 
// Declare 5 element array of integers and a pointer to the first element of the array.
// Use the pointer and its incrementation instead of array notation, fill the array with
// any integer numbers. Print all of the elements out in the console.
// 
// 
// 
// 


// // referrrence to address of 1st element in array
//     int &elOne = array[0];

// // * gets value from referrence address
//     cout << *&elOne << endl;
