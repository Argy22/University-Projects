/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on October 21, 2020, 1:16 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

void addNumbers(){
    double a,b,s;
    cout << "Give a: ";
    cin >> a;
    cout << "Give b: ";
    cin >> b;
    s=a+b;
    cout << "Result is: " << s << endl;
}


void subtractNumbers(){
    double a,b,s;
    cout << "Give a: ";
    cin >> a;
    cout << "Give b: ";
    cin >> b;
    s=a-b;
    cout << "Result is: " << s << endl;  
}


void multiplyNumbers(){
    double a,b,s;
    cout << "Give a: ";
    cin >> a;
    cout << "Give b: ";
    cin >> b;
    s=a*b;
    cout << "Result is: " << s << endl;
}


void devideNumbers(){
    double a,b,s;
    cout << "Give a: ";
    cin >> a;
    cout << "Give b: ";
    cin >> b;
    s=a/b;
    cout << "Result is: " << s << endl;
}


/*
 * 
 */


int main(int argc, char** argv) {
    
    //addNumbers();
    //subtractNumbers();
    //multiplyNumbers();
    //devideNumbers();
    
    return 0;
}

