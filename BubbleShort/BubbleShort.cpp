#include <iostream
using namespace std;


int a[20];                   //Deklarasi array dengan ukuran 20
int n;                      // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {  // Procedure untuk input
    while (true) {  // looping
        cout, , "Masukkan banyaknya elemen pada array: "; // output ke layar
        cin >> n;                      //input dari pengguna
        if (n <= 20)                    // jika n kurang dari atau sama dengan 20
            break;                    // keluar dari loop
        else {                       //jika n lebih dari 20
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



        void display() {
            cout << endl;
            cout << "===============================" << endl;   //output kelayar
            cout << "Elemen array yang telah tersusun" << endl;   // output ke layar
            cout << "===============================" << endl;  // output ke layar
            for (int j = 0; j < n; j++) {   // looping dengan j dimulai dari 0 hingga n-1
                cout << a[j] << endl;    // output ke layar
            }
            cout << endl;     // output baris kosong
        }
void bubbleSortArray() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - n i; j++) {   //
             if (a[j] a[j+1]){  //
                 int temp = a[j];  //
                 a[j] = a[j + 1];  //
                 a[j + 1] temp;    //





int main()  {
    input();    // Memanggil read()
    bubbleSortArray();  // memanggil bubbleSortArray()
    display();   // memanggil display
    return 0;
            