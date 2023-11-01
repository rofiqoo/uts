#include <iostream>
#include <string>
using namespace std;

string convertPassword(string password) {
    string convertedPassword = "";
    for (char c : password) {
        if (isalpha(c)) {
            char convertedChar = c + 2;
            convertedPassword += convertedChar;
        } else if (isdigit(c)) {
            char convertedChar = (c - '0') * 2 + '0';
            convertedPassword += convertedChar;
        }
    }
    return convertedPassword;
}

bool checkValidPassword(string password) {
    if (password.length() != 8) {
        return false;
    }
    if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") == string::npos) {
        return false;
    }
    if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        return false;
    }
    if (password.find_first_of("0123456789") == string::npos) {
        return false;
    }
    for (int i = 0; i < password.length() - 1; i++) {
        for (int j = i + 1; j < password.length(); j++) {
            if (password[i] == password[j]) {
                return false;
            }
        }
    }
    if (password.find(' ') != string::npos) {
        return false;
    }
    return true;
}

int main() {
    string inputPassword;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    if (checkValidPassword(inputPassword)) {
        string convertedPassword = convertPassword(inputPassword);
        cout << "Password yang dimasukkan: " << inputPassword << endl;
        cout << "Password yang tersimpan: " << convertedPassword << endl;
    } else {
        cout << "Password tidak valid!" << endl;
    }

    return 0;
}