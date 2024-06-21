#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int baris, kolom;
    cout << "Masukkan banyaknya baris = ";
    cin >> baris;
    cout << "Masukkan banyaknya kolom = ";
    cin >> kolom;

    // int** matriks = (int**) malloc (baris * sizeof(int));
    int** matriks = new int*[baris];
    // vector<vector<int>> matriks(baris, vector<int>(kolom));

    for (int i = 0; i < baris; i++) {
        // string elemenKolom;
        matriks[i] = new int[kolom];
        cout << "Masukkan elemen baris " << i+1 << " = ";
        // while(vector<int>(kolom).size() < kolom || vector<int>(kolom).size() > kolom) {
        //     cout << "Wrong size. Please input again" << endl;
        // }
        // cin >> elemenKolom;
        // remove(elemenKolom.begin(), elemenKolom.end(), ' ');
        // while (elemenKolom.size() < kolom || elemenKolom.size() > kolom) {
        //     cout << "Wrong size. Please input again.";
        //     cout << "Masukkan elemen baris " << i+1 << " = ";
        // }
        for (int j = 0; j < kolom; j++) {
            cin >> matriks[i][j];
        }
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << " " << endl;
    }
}