/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 23, 2020, 10:17 AM
 */

#include <iostream>
using namespace std;

void basicOfPointers() {
    int age = 30;
    const double Pi = 3.1416;

    //Use & to find the address in memory.
    cout << "Integer age is located at: " << &age << endl;
    cout << "Double Pi is located at: " << &Pi << endl;
    int*pointsToInt = &age; //pointer initialized to &age.

    //Displaying the value of pointer.
    cout << "Integer age is at: " << pointsToInt << endl;

    //Displaying the value at the pointed location.
    cout << "*pointsToInt = " << *pointsToInt << endl;

    //Use the same pointer to another variable.
    int dogsAge = 9;
    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now" << endl;
    cout << "pointsToInt = " << pointsToInt << endl;
    cout << "*pointsToInt = " << *pointsToInt << endl;

    int* pointsToAnAge = &dogsAge;
    cout << "pointsToAnAge points to dogsAge" << endl;
    cout << "Enter an age for your dog: ";


    //Store input at the memory pointed to by pointsToAnAge.
    cin >> *pointsToAnAge;

    //Displaying the address where age is stored.
    cout << "Input stored at " << pointsToAnAge << endl;
    cout << "Integer dogsAge = " << *pointsToAnAge << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;

    //SIZE OF.
    cout << "sizeof fundamental types -" << endl;
    cout << "sizeof(char) = " << sizeof (char) << endl;
    cout << "sizeof(double) = " << sizeof (double) << endl;
    cout << "sizeof pointers to fundamental types -" << endl;
    cout << "sizeof(char*) = " << sizeof (char*) << endl;
    cout << "sizeof(double*) = " << sizeof (double*) << endl;
}

void dynamicVar() {
    //Request for memory space for an int.
    int* pointsToAnAge = new int;
    //Use the allocated memory to store a number.
    cout << "Enter your dog’s age: ";
    //Use indirection operator* to access value.
    cin >> *pointsToAnAge;
    cout << "Age " << *pointsToAnAge << " is stored at 0x" << pointsToAnAge << endl;
    delete pointsToAnAge; // release memory
}

void dynamicArray() {
    cout << "How many integers shall I reserve memory for?" << endl;
    int numEntries = 0;
    cin >> numEntries;
    int* myNumbers = new int[numEntries];
    cout << "Dynamic array created." << endl << endl;

    cout << "Memory allocated at: 0x" << myNumbers << endl;
    for (int i = 0; i < numEntries; i++) {
        cout << "Please enter dynamic array element: ";
        cin >> myNumbers[i]; //OR cin >> *(myNumbers + i);

    }

    cout << "Display dynamic array items....: ";
    for (int i = 0; i < numEntries; i++) {
        cout << myNumbers[i] << " , "; //OR cout << *(myNumbers + i);
    }
    //De-allocate before exiting.
    delete[] myNumbers;
    cout << "\n\nDynamic array destroyed." << endl << endl;
}

void printC(char *t, int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i] << "";
    }
    cout << endl;
}

void printI(int *t, int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

void printD(double *t, int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

void printB(bool *t, int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

/*
 * 
 */

int main(int argc, char** argv) {
    basicOfPointers();
    dynamicVar();
    dynamicArray();

    char * tbl = new char[4];

    tbl[0] = 'J';
    *(tbl + 1) = 'O';
    *(tbl + 2) = 'H';
    tbl[3] = 'N';

    printC(tbl, 4);

    delete[] tbl;
    return 0;
}

