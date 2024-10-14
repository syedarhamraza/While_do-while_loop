#include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a number between 1 and 7 (or 8 to exit): ";
        cin >> number;

        switch (number) {
            case 1:
                cout << "You entered one." << endl;
                break;
            case 2:
                cout << "You entered two." << endl;
                break;
            case 3:
                cout << "You entered three." << endl;
                break;
            case 4:
                cout << "You entered four." << endl;
                break;
            case 5:
                cout << "You entered five." << endl;
                break;
            case 6:
                cout << "You entered six." << endl;
                break;
            case 7:
                cout << "You entered seven." << endl;
                break;
            case 8:
                cout << "Exiting the program." << endl;
                return 0;  // ye pore program ko break kare ga vro
            default:
                cout << "Invalid input! Please enter a number between 1 and 8." << endl;
                break;
        }
    }
    cout<< "This will not print as return 0 in switch breaks the whole program";

    return 0;
}
