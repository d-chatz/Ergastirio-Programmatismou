/*Να γραφεί πρόγραμμα που να διαβάζει και να εισάγει 10 ints σε πίνακα και να βρίσκει τον μεγαλύτερο υποπίνακα του οποίου τα στοιχεία έχουν συνεχόμενη αύξουσα σειρά.
Δηλαδή να ισχύει arr[i] <= arr[i+1] */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int size = 10, i, max = 0, counter = 1, stopCounter = 0;
    int array[size], stop[size] = {0};
    for (i = 0; i < size; i++) {
        cout << "Dwse int gia array[" << i << "]: ";
        cin >> array[i];
    }
    for (i = 0; i < size - 1; i++) {
        if (array[i] <= array[i + 1]) {
            counter++;
            if (i == size - 2) {
                if (max <= counter) {
                    max = counter;
                    stop[stopCounter] = i + 1;
                    stopCounter++;
                }
                counter = 1;
            }
        } else {

            if (max <= counter) {
                max = counter;
                stop[stopCounter] = i;
                stopCounter++;
                if (i == size - 2) {
                    stop[stopCounter] = i + 1;
                }
            }
            counter = 1;
        }
    }
    cout << "---------------------------" << endl;

    for (i = 0; i < size; i++) {
        if ((stop[i] - stop[i - 1] == max && i > 0) || stop[i] == max - 1) {
            cout << "Max = " << max << " in cells [" << stop[i] - max + 1 << "..." << stop[i] << "]" << endl;
        }
    }

    return 0;
}