// BubbleShort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

#include <iostream
using namespace std;

int a[20]; //deklarasi array dengan ukuran 20
int n;     // deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {  // procedure untuk input
    while (true) {  // looping
        cout, , "Masukkan banyaknya elemen pada array: "; // output ke layar
        cin >> n;    //input dari pengguna
        if (n <= 20)   // jika n kurang dari atau sama dengan 20
            break;    // keluar dari loop
        else {    //jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar

        }
    }
    cout << endl;    // output baris kosong
    cout << "====================" << endl;   // output ke layar
    cout << "Masukkan Elemen Array" << endl;    // output ke layar
    cout << "====================" << endl;   // output ke layar
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> a[i];


void display(){
    cout << endl;
    cout << "===============================" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "===============================" << endl;


    for (int j = 0; j < n; j++) {   // looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;    // output ke layar
    }
    cout << endl;     // output baris kosong
