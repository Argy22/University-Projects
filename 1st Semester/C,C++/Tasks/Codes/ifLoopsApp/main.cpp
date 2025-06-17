/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on November 25, 2020, 10:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

void f1() {
    for (int i = 0; i <= 100; i++)
        if (i % 5 == 0)
            cout << i << " ";
    cout << endl;
}

void f2() {
    for (int i = 0; i <= 100; i++)
        if (i % 4 == 0 and i % 6 == 0 and i % 8 == 0)
            cout << i << " ";
    cout << endl;

}

void f3() {
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << " ";
    }
}

void f4() {
    for (int i = 0; i < 100; i++) {
        f3();
    }
}

void f5() {
    for (int i = 0; i < 100; i++) {
        for (char c = 'z'; c >= 'a'; c--) {
            cout << c << " ";
        }
    }
}

void f6() {
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 1) {
            for (char c = 'z'; c >= 'a'; c--) {
                cout << c << " ";
            }
        } else {
            for (char c = 'a'; c <= 'z'; c++) {
                cout << c << " ";
            }
        }
        cout << endl;

    }
}

void f7() {
    int x;
    int c = 0;
    cout << "Dwste enan arithmo" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            c++;
        }
    }
    if (c == 2) {
        cout << "O arithmos " << x << " einai prwtos ";
    } else {
        cout << "O arithmos " << x << " den einai prwtos ";
    }
}

void f8() {
    int cnt = 0;
    bool found = false;
    int A, B, C;
    const int maxvalue = 20;
    for (int a = 0; a < maxvalue and found == false; a++) {
        for (int b = 0; b < maxvalue and found == false; b++) {
            for (int c = 0; c < maxvalue and found == false; c++) {
                double Y = pow(2, a) * pow(3, b) * pow(5, c);
                if (Y == 22500) {
                    A = a;
                    B = b;
                    C = c;
                    found = true;
                }
                cnt++;
            }
        }
    }
    cout << "Counter: " << cnt << endl;
    if (found) {
        cout << "Brethike lusi " << endl;
        cout << "a=" << A << ", b=" << B << ", c=" << C << endl;
    } else {
        cout << "Den brethike lusi " << endl;
    }
}

bool artios(int NUM){
    bool result;
    if (NUM%2==0){
        result=true; 
    }else{
        result=false;   
    }
    return result; 
}

/*
 * 
 */


int main(int argc, char** argv) {
    //f1();
    //f2();
    //f3();
    //f4();
    //f5();
    //f6();
    //f7();
    //f8();
    int K;
    cout << "Dwse enan arithmo: ";
    cin >> K;
    if (artios(K)){
        cout << "O arithmos " << K << " einai artios " << endl;
    }else{
        cout << "O arithmos " << K << " einai perittos " << endl;  
    }
    return 0;
}

