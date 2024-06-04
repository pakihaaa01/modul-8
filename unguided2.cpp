#include <iostream>
#include <string>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    int vowels = countVowels(kalimat);
    cout << "Jumlah huruf vokal dalam kalimat: " << vowels << endl;
    return 0;
}