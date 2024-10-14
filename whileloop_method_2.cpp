#include <iostream>
using namespace std;

int main() {
    int number;
    bool isRunning = true;

    while (isRunning) {  
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
                isRunning = false; //ye loop ko break krega
                break;
            default:
                cout << "Invalid input! Please enter a number between 1 and 8." << endl;
                break;
        }
    }

    cout << "This will print as the loop ended not program" << endl; 
    return 0;
}
