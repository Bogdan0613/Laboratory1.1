#include <iostream>
#include <cmath>
using namespace std;
void notation();
int main() {
    notation();
}
void notation() {
    int size;
    int notation, menu;
    long int number;

    const int is_continue = 1;
    while (is_continue == 1) {
        int number10 = 0, k = 0;
        double power = 0;
        cout << "Enter your number notation(from 2 to 9):";
        cin >> notation;
        if (notation < 2 || notation>9) {
            cout << "You've entered the wrong notation" << endl;
        }
        else {
            cout << "Enter the bitness of your number:";
            cin >> size;
            int* number_notation = new int[size];
            cout << "Enter the number in the notation " << notation << ":" << endl;
            cin >> number;
            for (int i = 0; i < size; i++) {

                number_notation[i] = number % 10;
                number /= 10;
            }
            for (int k = 0; k < size; k++) {
                number10 += (number_notation[k]) * pow(notation, power);
                power++;
            }
            cout << "Your number in the notation 10 is " << number10 << endl;
            cout << "Menu:" << endl << "Press 1 to continue" << endl << "Press 2 to exit" << endl;
            cin >> menu;
            if (menu == 2) break;
            delete[] number_notation;

        }
    }
}







