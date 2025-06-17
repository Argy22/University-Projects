/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 17, 2020, 7:39 PM
 */

#include <iostream>
using namespace std;

double ginomeno(double g[], int size) {
    int pr = 1;
    for (int k = 0; k < size; k++) {
        pr = pr * g[k];
    }
    return pr;
}

bool allNative(int g[], int size) {
    int cnt = 0;
    bool b = false;
    for (int k = 0; k < size; k++) {
        if (g[k] < 0) {
            cnt = cnt + 1;
        }
    }
    if (cnt == size) {
        return true;
    } else {
        return false;
    }
}

int sumPositive(int g[], int size) {
    int sum = 0;
    for (int k = 0; k < size; k++) {
        if (g[k] > 0) {
            sum = sum + g[k];
        }
    }
    return sum;
}

int countZero(int g[], int size) {
    int cnt = 0;
    for (int k = 0; k < size; k++) {
        if (g[k] == 0) {
            cnt = cnt + 1;
        }
    }
    return cnt;
}

int whichCharCount(char g[], char ch, int size) {
    int cnt = 0;
    for (int k = 0; k < size; k++) {
        if (g[k] == ch) {
            cnt = cnt + 1;
        }
    }
    return cnt;
}

void reverse(char source[], char target[], int size) {
    int j = size;
    for (int k = 0; k < size; k++) {
        do {
            target[k] = source[j - 1];
            j--;
        } while (j < 0);
    }
}

void swap(double source[], double target[], int size) {
    int j = 0;
    double temp;
    for (int k = 0; k < size; k = k + 2) {
        do {
            temp = source[j];
            target[k] = source[j + 1];
            target[k + 1] = temp;
            j = j + 2;
        } while (j > size);
    }
}

/*
 * 
 */

int main(int argc, char** argv) {

    //Zhtoumeno B.1
    cout << "Ζητούμενο Β.1" << endl;
    cout << "-------------" << endl;
    double t1[5] = {2.5, 8, 5, 10.2, 3};
    double product = ginomeno(t1, 5);
    cout << product << endl;
    cout << endl;

    //Zhtoumeno B.2
    cout << "Ζητούμενο Β.2" << endl;
    cout << "-------------" << endl;
    int t2[5] = {-12, -157, -32, -1, 0};
    bool einaideneinai = allNative(t2, 5);
    cout << einaideneinai << endl;
    cout << endl;

    //Zhtoumeno B.3
    cout << "Ζητούμενο Β.3" << endl;
    cout << "-------------" << endl;
    int t3[5] = {10, 25, 68, 39, 12};
    int athroismaThetikwn = sumPositive(t3, 5);
    cout << athroismaThetikwn << endl;
    cout << endl;

    //Zhtoumeno B.4
    cout << "Ζητούμενο Β.4" << endl;
    cout << "-------------" << endl;
    int t4[10] = {1, 14, 0, 45, 98, 71, 0, 1325, 0, 0};
    int mhdenika = countZero(t4, 10);
    cout << mhdenika << endl;
    cout << endl;

    //Zhtoumeno B.5
    cout << "Ζητούμενο Β.5" << endl;
    cout << "-------------" << endl;
    char t5[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'F', 'F', 'A'};
    int emfaniseis = whichCharCount(t5, 'W', 9);
    cout << emfaniseis << endl;
    cout << endl;

    //Zhtoumeno B.6
    cout << "Ζητούμενο Β.6" << endl;
    cout << "-------------" << endl;
    char t6[9] = {'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char t7[9];
    cout << "Ο πίνακας πριν τη μετρατροπή: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << t6[i];
    }
    cout << endl;
    reverse(t6, t7, 9);
    cout << endl;
    cout << "Ο πίνακας μετά τη μετρατροπή: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << t6[i];
    }
    cout << endl << endl;

    //Zhtoumeno B.7
    cout << "Ζητούμενο Β.7" << endl;
    cout << "-------------" << endl;
    double t8[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double t9[10];
    swap(t8, t9, 10);
    for (int i = 0; i < 10; i++) {
        cout << t9[i] << endl;
    }
    cout << endl;

    return 0;
}

