#include <iostream>
#include "vector"
#include <string>
#include <cctype>
#include <algorithm>
//#include<bits/stdc++.h>
using namespace std;
void decryption9() {
    int j = 0;
    int e = 0;
    int key;
    int jump;
    int jump2;
    string decrypted;
    cout << "ENTER ENCRYPTION KEY....";
    cin >> key;
    cin.ignore();
    cout << "ENTER THE ENCRYPTED MESSAGE TO BE DECRYPTED .....";
    string message;
    getline(cin, message, '\n');
    char matrix[key][message.length()];
    for (int a = 0; a < key; a++) {
        for (int b = 0; b < message.length(); b++) {
            matrix[a][b] = '*';
        }
    }

    for (int i = 0; i < message.length(); i++) {
        matrix[j][i] = '-';

        if (j == key - 1) {
            jump = 0;
        } else if (j == 0)
            jump = 1;

        if (jump == 1) {
            j++;

        }
        if (jump == 0) {
            j--;
        }

    }
    int message_iterator=0; // to pin the message index to the last known value and not iterate over it from the beginning each loop
    for (int z = 0; z < key; z++) {
        for (int k = 0; k < message.length(); k++) {
            if (matrix[z][k] != '*') {
                matrix[z][k] = message[message_iterator++];
            }
        }
    }

    for (int p = 0; p < message.length(); p++) {
        cout << matrix[e][p];

        if ( e == key - 1) {
            jump2 = 0;
        } else if (e == 0)
            jump2 = 1;

        if (jump2 == 1) {
            e++;

        }
        if (jump2 == 0) {
            e--;
        }

    }
}

void encryption9() {

    int j = 0;
    int key;
    int jump;
    string encrypted =" ";
    cout << "ENTER ENCRYPTION KEY....";
    cin >> key;
    cin.ignore();
    cout << "ENTER THE MESSAGE TO BE ENCRYPTED.....";
    string message;
    getline(cin, message, '\n');
    char matrix[key][message.length()];
    for (int a = 0; a < key; a++) {
        for (int b = 0; b < message.length(); b++) {
            matrix[a][b] = '*';
        }
    }

    for (int i = 0; i < message.length(); i++) {
        matrix[j][i] = message[i];


        if (j == key-1) {
            jump = 0;
        } else if (j ==0)
            jump = 1;

        if (jump == 1) {
            j++;

        }
        if (jump == 0) {
            j--;
        }

    }

    for (int z = 0; z < key; z++) {
        for (int k = 0; k < message.length(); k++) {
            if (matrix[z][k] != '*') {
                encrypted += matrix[z][k];
            }
        }
    }
    cout << "ENCRYPTED MESSAGE:"<< encrypted<<'\n';

}



int main() {


}