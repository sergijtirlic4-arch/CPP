#include <iostream>

using namespace std;

int main() {
    char choice;
    int n;

    while (true) {
        cout << "=== MENU ===" << endl;
        cout << "a. Figure A" << endl;
        cout << "b. Figure B" << endl;
        cout << "c. Figure C" << endl;
        cout << "d. Figure D" << endl;
        cout << "e. Figure E" << endl;
        cout << "f. Figure F" << endl;
        cout << "g. Figure G" << endl;
        cout << "h. Figure H" << endl;
        cout << "i. Figure I" << endl;
        cout << "j. Figure J" << endl;
        cout << "q. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'q' || choice == 'Q') {
            break;
        }

        cout << "Enter size (odd number recommended): ";
        cin >> n;

        switch (choice) {
        case 'a':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j <= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i >= j) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i <= j && i + j <= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i >= j && i + j >= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'e':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if ((i <= j && i + j <= n - 1) || (i >= j && i + j >= n - 1)) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'f':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if ((i >= j && i + j <= n - 1) || (i <= j && i + j >= n - 1)) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'g':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i >= j && i + j <= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'h':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i <= j && i + j >= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'i':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j <= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        case 'j':
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j >= n - 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        cout << endl;
    }

}
