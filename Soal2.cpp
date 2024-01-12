#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double median(vector<int> v) {
    int n = v.size();
    if (n % 2 == 0) {
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
    else {
        return v[n / 2];
    }
}

int main() {
    int data[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
    vector<int> vect(data, data + sizeof(data) / sizeof(int));

    // menampilkan vector
    cout << "Isi vector awal: \n";
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " | ";
    }

    // sorting vector dari besar ke kecil
    sort(vect.begin(), vect.end(), greater<int>());

    // menampilkan sorting vector
    cout << "\n\nIsi vector sorting DESC: \n";
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " | ";
    }

    // mencari nilai median
    double med = median(vect);
    cout << "\n\nNilai median dari vector: " << med << endl;

    return 0;
}