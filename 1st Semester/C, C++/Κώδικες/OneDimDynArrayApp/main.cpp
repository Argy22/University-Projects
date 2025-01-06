/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Giannis Argyropoulos
 *
 * Created on December 23, 2020, 11:48 AM
 */

#include <iostream>
#include <stdio.h>
using namespace std;

void halfAlphabet(bool upper) {
    char *semi = new char[13];
    char ch;
    if (upper)
        ch = 'B';
    else
        ch = 'b';
    for (int k = 0; k < 13; k++) {
        semi[k] = ch;
        ch += 2;
    }
    for (int k = 0; k < 13; k++) {
        cout << semi[k] << " ";
    }
    cout << endl;
    delete[] semi;
}

char *halfAlphabet2(bool upper) {
    char *semi = new char[13];
    char ch;
    if (upper)
        ch = 'B';
    else
        ch = 'b';
    for (int k = 0; k < 13; k++) {
        semi[k] = ch;
        ch += 2;
    }
    return semi;
}

void f30(int N) {
    int *table3 = new int[30];
    for (int i = 0; i < 30; i++) {
        if (i % 2 == 0) {
            table3[i] = i;
        } else {
            table3[i] = i*N;
        }
    }
    for (int i = 0; i < 30; i++) {
        cout << table3[i] << " ";
    }
    delete []table3;
}

int *f30b(int N) {
    int *table4 = new int [30];
    for (int i = 0; i < 30; i += 2) {
        table4[i] = N;
    }
    for (int i = 1; i < 30; i += 2) {
        table4[i] = i*N;
    }
    return table4;
}

double *fillArray(int N) {
    double *table5 = new double[N];
    double x;
    cout << "Εκχωρήστε τις τιμές που επιθυμείτε" << endl;
    for (int i = 0; i < N; i++) {

        cin >> x;
        table5[i] = x;
    }
    return table5;
}

double *multiply2Arrays(double *table6a, double *table6b, int size) {
    double *table6c = new double[size];
    for (int k = 0; k < size; k++) {
        table6c[k] = table6a[k] * table6b[k];
    }
    return table6c;
}

bool shiftArrayOne(bool *table7b) {
    int temp;
    int temp1;
    for (int i = 0; i < (10 - 1); i++) {
        temp = table7b [10 - 1];
        table7b[10 - 1] = table7b[i];
        table7b[i] = temp;
    }
    return table7b;
}

bool shiftArrayMany(bool *table8b, int steps) {
    int temp;
    for (int i = 0; i < (10 - steps); i++) {
        temp = table8b[i + steps];
        table8b[i + steps] = table8b[i];
        table8b[i] = temp;
    }
    return table8b;
}

void showSquareArray(bool table9b[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << table9b[i][j] << " ";
        }
    }
}

void reverseDiagonal(bool table10b[5][5]) {
    int temp, temp2, x = 4;
    bool table10c[5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                temp = table10b[i][j];
            }
        }
        table10c[i] = temp;
    }
    cout << "Η κύρια διαγώνιος πριν την αντιστροφή: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                cout << table10b[i][j] << " ";
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                table10b[i][j] = table10c[x];
                x = x - 1;
            }
        }
    }
    cout << endl;
    cout << "Η κύρια διαγώνιος μετά την αντιστροφή: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                cout << table10b[i][j] << " ";
            }
        }
    }
}

bool noneZero(int *table11, int size) {
    int cnt = 0;
    for (int k = 0; k < size; k++) {
        if (table11[k] == 0) {
            cnt = cnt + 1;
        }
    }
    if (cnt != 0) {
        return false;
    } else {
        return true;
    }
}

int findTrueCount(bool *table12, int size) {
    int cnt = 0;
    for (int k = 0; k < size; k++) {
        if (table12[k] == true) {
            cnt = cnt + 1;
        }
    }
    return cnt;
}

int multiplyInRange(int *table13, int N, int max, int min) {
    int pr = 1, c = 0;
    for (int i = 0; i < N; i++) {
        if (table13[i] > min and table13[i] < max) {
            pr = pr + pr * table13[i];
            c = c + 1;
        }
    }
    if (c == 0) {
        return -1;
    } else {
        return pr;
    }
}

bool positiveNegativeCount(double *d, int size, int &posCount, int &negCount) {
    for (int i = 0; i < size; i++) {
        if (d[i] > 0) {
            posCount = posCount + 1;
        } else if (d[i] < 0) {
            negCount = negCount + 1;
        }
    }
    if (posCount == 0 and negCount == 0) {
        return false;
    } else {
        return true;
    }
}

bool expandTrue(bool* &t, int oldSize, int times, int & newSize) {
    delete []t;
    t = new bool[9];
    int cnt = 0;
    int k = 0;
    for (k = 0; k < oldSize; k++) {
        if (t[k] == 1) {
            cnt = cnt + 1;
        }
    }
    if (cnt != oldSize) {
        return false;
    } else {
        for (k = 0; k < (oldSize + times); k++) {
            t[k] = true;
        }
        newSize = k - 1;
        return true;
    }

}

/*
 * 
 */

int main(int argc, char** argv) {

    cout << "Ζητούμενο Β.1" << endl;
    cout << "-------------";
    cout << endl;

    halfAlphabet(true);
    halfAlphabet(false);

    cout << endl;



    cout << "Ζητούμενο Β.2" << endl;
    cout << "-------------";
    cout << endl;

    char *miso = halfAlphabet2(true);
    for (int k = 0; k < 13; k++) {
        cout << miso[k] << " ";
    }
    delete[] miso;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.3" << endl;
    cout << "-------------";
    cout << endl;

    f30(5);

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.4" << endl;
    cout << "-------------";
    cout << endl;

    int *table4b = f30b(5);
    for (int i = 0; i < 30; i++) {
        cout << table4b[i] << " ";
    }
    delete []table4b;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.5" << endl;
    cout << "-------------";
    cout << endl;

    int N5;
    cout << "Εισάγετε το μέγεθος πίνακα" << endl;
    cin >> N5;
    while (N5 <= 0) {
        cout << "Δώστε έναν έγκυρο αριθμό" << endl;
        cin >> N5;
    }

    double *table5b = fillArray(N5);
    for (int i = 0; i < N5; i++) {
        cout << table5b[i] << " ";
    }
    delete []table5b;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.6" << endl;
    cout << "-------------";
    cout << endl;

    int size = 5;
    double *table6a = new double [size];
    double *table6b = new double [size];
    for (int k = 0; k < size; k++) {
        table6a[k] = k + 1;
        table6b[k] = k + 6;
    }
    double *table6d = multiply2Arrays(table6a, table6b, size);
    for (int k = 0; k < 5; k++) {
        cout << table6d[k] << " ";
    }
    delete []table6d;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.7" << endl;
    cout << "-------------";
    cout << endl;

    bool *table7a = new bool [10];
    cout << "Ο πίνακας πριν:" << endl;
    for (int k = 0; k < 10; k++) {
        cout << table7a[k] << " ";
    }
    //Οποιοσδήποτε θετικός αριθμός ισούται με το 1, δηλαδή σημαίνει true.
    cout << endl;
    cout << endl;
    shiftArrayOne(table7a);
    cout << "Ο πίνακας μετά:" << endl;
    for (int k = 0; k < 10; k++) {
        cout << table7a[k] << " ";
    }
    delete []table7a;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.8" << endl;
    cout << "-------------";
    cout << endl;

    bool *table8a = new bool[10];
    int steps = 5;
    cout << "Ο πίνακας πριν:" << endl;
    for (int k = 0; k < 10; k++) {
        cout << table8a[k] << " ";
    }
    cout << endl;
    cout << endl;
    shiftArrayMany(table8a, steps);
    cout << "Ο πίνακας μετά:" << endl;
    for (int k = 0; k < 10; k++) {
        cout << table8a[k] << " ";
    }
    delete []table8a;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.9" << endl;
    cout << "-------------";
    cout << endl;

    bool table9a[5][5] = {
        {true, true, true, false, true},
        {false, false, true, false, false},
        {false, true, false, true, false},
        {true, false, false, true, true},
        {false, false, false, false, false}
    };
    showSquareArray(table9a);

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.10" << endl;
    cout << "-------------";
    cout << endl;

    bool table10a[5][5] = {
        {0, 0, 0, 1, 1},
        {0, 0, 1, 1, 1},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}
    };
    reverseDiagonal(table10a);

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.11" << endl;
    cout << "-------------";
    cout << endl;

    int test = 0;
    int size1 = 5;
    int *table11b = new int [size];
    for (int i = 0; i < size; i++) {
        table11b[i] = i + test;
    }
    bool naihoxi = noneZero(table11b, size);
    cout << naihoxi << endl;
    delete []table11b;

    cout << endl;



    cout << "Ζητούμενο Β.12" << endl;
    cout << "-------------";
    cout << endl;

    int size12 = 10;
    bool *table12b = new bool [size12];
    for (int k = 0; k < (size - 6); k++) {
        table12b[k] = true;
    }
    for (int k = 4; k < size; k++) {
        table12b[k] = false;
    }
    int metrhthsAlhtheias = findTrueCount(table12b, size);
    cout << metrhthsAlhtheias;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.13" << endl;
    cout << "-------------";
    cout << endl;

    int N = 20;
    int *table13 = new int[N];
    int max = 20;
    int min = 5;
    int ginomeno = multiplyInRange(table13, N, max, min);
    cout << ginomeno;
    delete []table13;

    cout << endl;
    cout << endl;



    cout << "Ζητούμενο Β.14" << endl;
    cout << "-------------";
    cout << endl;

    int size14 = 2;
    int thetikoi, arnhtikoi;
    double *table14 = new double[size14];
    bool trueorfalse = positiveNegativeCount(table14, size14, thetikoi, arnhtikoi);
    for (int k = 0; k < size14; k++) {
        cout << table14[k] << " ";
    }
    cout << endl;
    cout << trueorfalse << endl;
    cout << thetikoi << endl;
    cout << arnhtikoi << endl;
    delete []table14;

    cout << endl;
    // Με στατικό πίνακα δούλεψε εξαιρετικά. Με δυναμικό δεν ξέρω αν είναι σωστό.



    cout << "Ζητούμενο Β.15" << endl;
    cout << "-------------";
    cout << endl;

    int N15 = 10;
    int x;
    bool *table15 = new bool [N];
    bool deikse = expandTrue(table15, 10, 20, x);
    cout << deikse;

    cout << endl;


    return 0;
}

