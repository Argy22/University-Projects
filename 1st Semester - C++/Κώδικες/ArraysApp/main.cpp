/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 16, 2020, 10:07 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int sum(int t[], int size) {
    int summary = 0;
    for (int i = 0; i < size; i++) {
        summary = summary + t[i];
    }
    return summary;
}

bool allTrue1(bool t[], int size) {
    int i = 0;
    bool c = true;
    while (i < size and c == true) {
        if (t[i] == false) {
            c = false;
        }
        i++;
    }
    return c;
}

bool allTrue2(bool t[], int size) {
    bool isAllTrue = true;
    for (int i = 0; i < size; i++) {
        if (t[i] == false) {
            isAllTrue = false;
        }
    }
    return isAllTrue;
}

int replace(char t[], int size, char oldChar, char newChar) {
    int totalR = 0;
    for (int k = 0; k < size; k++) {
        if (t[k] == oldChar && oldChar!=newChar) {
            t[k] = newChar;
            totalR = totalR + 1;
        }
    }
    return totalR;
}

void copy(int source[], int target[], int size) {
    // O pinakas prin thn antigrafh.
    for (int k = 0; k < size; k++) {
        if ((k + 1) == size) {
            cout << target[k] << '.';
        } else {
            cout << target[k] << ',';
        }

    }
    cout << endl;
    for (int k = 0; k < size; k++) {
        target[k] = source[k];
    }
    // O pinakas meta thn antigrafh.
    for (int k = 0; k < size; k++) {
        if ((k + 1) == size) {
            cout << target[k] << '.';
        } else {
            cout << target[k] << ',';
        }
    }
    cout << endl;
}

void copy(char source[], char target[], int size) {
    // O pinakas prin thn antigrafh.
    for (int k = 0; k < size; k++) {
        if ((k + 1) == size) {
            cout << target[k] << '.';
        } else {
            cout << target[k] << ',';
        }

    }
    cout << endl;
    for (int k = 0; k < size; k++) {
        target[k] = source[k];
    }
    // O pinakas meta thn antigrafh.
    for (int k = 0; k < size; k++) {
        if ((k + 1) == size) {
            cout << target[k] << '.';
        } else {
            cout << target[k] << ',';
        }
    }
    cout << endl;
}

void print(int t[], int size) {
    for (int k = 0; k < size; k++) {
        cout << t[k] << " ";
    }
    cout << endl;
}

void print(char t[], int size) {
    for (int k = 0; k < size; k++) {
        cout << t[k] << " ";
    }
    cout << endl;
}

int max(int t[], int size) {
    int maxv = t[0];
    int k = 0;
    for (k = 1; k < size; k++) {
        if (maxv < t[k]) {
            maxv = t[k];
        }
    }
    return maxv;
}

int sequentialSearch(int t[], int size, int schElement) {
    bool b = false;
    for (int k = 0; k < size; k++) {
        if (t[k] == schElement) {
            return k;
            b = true;
        }
    }
    if (b == false) {
        return -1;
    }
}

int sequantialSearchTimes(char t[], int size, char schElement, int &times) {
    times = 0;
    for (int k = 0; k < size; k++) {
        if (t[k] == schElement) {
            times = times + 1;
        }
    }
     for (int k = 0; k < size; k++) {
        if (t[k] == schElement) {
            return k;
        }
    }
    if (times==0){
        return -1;
    }
}

void swapTwoChars(char &C1, char &C2) {
    char T = C1;
    C1 = C2;
    C2 = T;
}

void swapTwoInts(int &C1, int &C2) {
    char T = C1;
    C1 = C2;
    C2 = T;
}

void sort(int t[], int size) {
    for (int k = 0; k < size - 1; k++) {
        for (int j = k + 1; j < size; j++) {
            if (t[k] > t[j]) {
                /*int temp = t[k];
                t[k] = t[j];
                t[j] = temp;*/
                swapTwoInts(t[k], t[j]); //einai pio argo apo to panw
            }
        }
    }
}

void sort(int t[], int size, bool ascendant) {
    for (int k = 0; k < size - 1; k++) {
        for (int j = k + 1; j < size; j++) {
            if (ascendant) {
                if (t[k] > t[j]) {
                    int temp = t[k];
                    t[k] = t[j];
                    t[j] = temp;
                }
            } else {
                if (t[k] < t[j]) {
                    int temp = t[k];
                    t[k] = t[j];
                    t[j] = temp;
                }

            }
        }
    }
}

/*
 * 
 */

int main(int argc, char** argv) {        
    
    //Zhtoumeno A.1
    cout << "Ζητούμενο Α.1" << endl;
    cout << "-------------" << endl;
    int test[5] = {10, 10, 10, 5, 5};
    int total = sum(test, 5);
    cout << total << endl;

    int ages[5] = {50, 55, 26, 32, 14};
    int total_ages = sum(ages, 5);
    cout << total_ages << endl;
    cout << endl;

    //Zhtoumeno A.2
    cout << "Ζητούμενο Α.2" << endl;
    cout << "-------------" << endl;
    bool myb[5] = {true, true, true, true, false};
    bool res = allTrue1(myb, 5);
    cout << res << endl;
    cout << endl;

    //Zhtoumeno A.3
    cout << "Ζητούμενο Α.3" << endl;
    cout << "-------------" << endl;
    char t3[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'A', 'A', 'F'};
    int replaces = replace (t3,10,'B','B');
    cout << replaces << endl;
    cout << endl;


    //Zhtoumeno A.4
    cout << "Ζητούμενο Α.4" << endl;
    cout << "-------------" << endl;
    copy(ages, test, 5);
    cout << endl;

    //Zhtoumeno A.5
    cout << "Ζητούμενο Α.5" << endl;
    cout << "-------------" << endl;
    char t1[3] = {'A', 'B', 'C'};
    char t2[3] = {'D', 'E', 'F'};
    copy(t2, t1, 3);
    cout << endl;

    //Zhtoumeno A.6
    cout << "Ζητούμενο Α.6" << endl;
    cout << "-------------" << endl;
    print(ages, 5);
    cout << endl;

    //Zhtoumeno A.7
    cout << "Ζητούμενο Α.7" << endl;
    cout << "-------------" << endl;
    print(t2, 3);
    cout << endl;

    //Zhtoumeno A.8
    cout << "Ζητούμενο Α.8" << endl;
    cout << "-------------" << endl;
    int maxvalue = max(ages, 5);
    cout << maxvalue << endl;
    cout << endl;

    //Zhtoumeno A.9
    cout << "Ζητούμενο Α.9" << endl;
    cout << "-------------" << endl;
    int seiriakh = sequentialSearch(ages, 5, 321);
    cout << seiriakh << endl;
    cout << endl;

    //Zhtoumeno A.10
    cout << "Ζητούμενο Α.10" << endl;
    cout << "--------------" << endl;
    int times;
    int brethike = sequantialSearchTimes(t3, 10, 'B', times);
    if (times==0){
        cout <<"Το στοιχείο δεν βρέθηκε. " << endl;
        cout << brethike << endl;
    }else if (times==1){
        cout <<"Το στοιχείο βρέθηκε " << times << " φορά." << endl;
        cout <<"Το πρώτο στοιχείο βρέθηκε στη θέση " << brethike << " του πίνακα." << endl;
    }else{
        cout <<"Το στοιχείο βρέθηκε " << times << " φορές." << endl;
        cout <<"Το πρώτο στοιχείο βρέθηκε στη θέση " << brethike << " του πίνακα." << endl;
    }
    cout << endl;

    //Zhtoumeno A.11
    cout << "Ζητούμενο Α.11" << endl;
    cout << "--------------" << endl;
    char ch1 = 'A', ch2 = 'B';
    cout << ch1 << " " << ch2 << endl;
    swapTwoChars(ch1, ch2);
    cout << ch1 << " " << ch2 << endl;
    cout << endl;

    //Zhtoumeno A.12
    cout << "Ζητούμενο Α.12" << endl;
    cout << "--------------" << endl;
    int numbers[5] = {0, -124, 87, 71, -32};
    print(numbers, 5);
    sort(numbers, 5);
    print(numbers, 5);
    cout << endl;

    //Zhtoumeno A.13
    cout << "Ζητούμενο Α.13" << endl;
    cout << "--------------" << endl;
    sort(numbers, 5, true);
    print(numbers, 5);
    cout << endl;
    
    return 0;
}

