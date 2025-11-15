// Να γραφεί πρόγραμμα που υλοποιεί bubblesort σε πίνακα 5 ακεραίων σε αύξουσα σειρά

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[5], i, j, temp;
    for (i = 0; i < 5; i++) {
        cout << "Dwse akeraio: ";
        cin >> array[i];
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}