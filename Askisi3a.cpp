/*Να γραφεί πρόγραμμα που να τυπώνει τα παρακάτω σχήματα με κενά και αστερίσκους με την χρήση 2 for loops.
1ο σχήμα:
*****
 ****
  ***
   **
    *
2ο Σχήμα:
  *
 ***
*****
3ο σχήμα:
*
**
***
****
*****
*****
****
***
**
*

*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (j <= 2 + i && j >= 2 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 5; j++) {
            if (i < 5) {
                if (j <= i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                if (j < 10 - i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}