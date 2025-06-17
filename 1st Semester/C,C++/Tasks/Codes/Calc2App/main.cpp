/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 9, 2020, 10:10 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void calcNumbersV1(char symbol) {
    int a, b;
    double s;
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
        cout << "Give a: ";
        cin >> a;
        cout << endl;
        cout << "Give b: ";
        cin >> b;
        cout << endl;
        if (symbol == '+') {
            s = a + b;
        } else
            if (symbol == '-') {
            s = a - b;
        } else
            if (symbol == '*') {
            s = a*b;
        } else {
            if (symbol == '/' && b != 0) {
                s = a / b;
            }
        }
        cout << a << symbol << b << '=' << s << endl;
    } else {
        cout << " Invalid symbol!!" << endl;
        //return; (Mpakalikos tropos alla polu wraios)
    }
}

void calcNumbersV2(int a, int b, char symbol) {
    double s;
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
        if (symbol == '+') {
            s = a + b;
        } else
            if (symbol == '-') {
            s = a - b;
        } else
            if (symbol == '*') {
            s = a*b;
        } else {
            if (symbol == '/' && b != 0) {
                s = a / b;
            }
        }
        cout << a << symbol << b << '=' << s << endl;
    } else {
        cout << " Invalid symbol!!" << endl;
        //return; (Mpakalikos tropos alla polu wraios)
    }
}

double calcNumbersV3(int a, int b, char symbol) {
    double s;
    switch (symbol) {
        case '+':
        {
            break;
        }
        case '-':
        {
            s = a - b;
            break;
        }
        case '*':
        {
            s = a*b;
            break;
        }
        case '/':
        {
            s = a / b;
            break;
        }
    }
    return s;
}

/*
 * 
 */
int main(int argc, char** argv) {
    //calcNumbersV1('+');
    
    //calcNumbersV2(1,2,'-');
    
    /* int A=5, B=1000;
    char symb='*';
    double S;
    S= calcNumbersV3(A, B, symb);
    cout << S; */

    return 0;
}

