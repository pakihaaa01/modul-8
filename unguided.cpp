#include <iostream>
#include <string>
using namespace std;

int binarySearch(string str, char c, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (str[mid] == c)
            return mid;
        if (str[mid] > c)
            return binarySearch(str, c, l, mid - 1);
        return binarySearch(str, c, mid + 1, r);
    }
    return -1;
}

int main() {
    string kalimat;
    char cari;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> cari;
    int result = binarySearch(kalimat, cari, 0, kalimat.length() - 1);
    if (result == -1)
        cout << "Huruf tidak ditemukan dalam kalimat" << endl;
    else
        cout << "Huruf ditemukan pada indeks " << result << endl;
    return 0;
}