/*Να γραφεί πρόγραμμα στο οποίο ο χρήστης θα εισάγει int τιμές που αντιστοιχούν στους συντελεστές a,b,c δευτεροβάθμιας εξίσωσης.
Στην συνέχεια να υπολογίζονται οι ρίζες της εξίσωσης με την χρήση sqrt() και typecast*/

#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b, c, D;
    double x1, x2;
    cout << "Dwse times a,b,c gia triwnumo:" << endl;
    cin >> a >> b >> c;
    cout << "To poluwnumo einai: (" << a << ")x² + (" << b << ")x + (" << c << ")" << endl;
    if (a == 0) {
        if (b != 0) {
            x1 = -1 * (double)c / (double)b;
            cout << "To poluwnumo einai prwtou vathmou kai exei riza x = " << x1 << endl;
        } else if (b == 0) {
            cout << "H ekfrash y = " << c << " den eksartatai apo to x." << endl;
        } else {
            cout << "Kati phge strava." << endl;
        }
    } else if (a > 0 || a < 0) {
        D = b * b - 4 * a * c;
        if (D > 0) {
            x1 = (-1 * (double)b + sqrt((double)D)) / (2 * (double)a);
            x2 = (-1 * (double)b - sqrt((double)D)) / (2 * (double)a);
            cout << "Rizes :\nx1 = " << x1 << "\nx2 = " << x2 << endl;
        } else if (D == 0) {
            x1 = (-1 * (double)b) / (2 * (double)a);
            cout << "Diplh riza sto x = " << x1 << endl;

        } else if (D < 0) {
            cout << "To poluwnumo den exei pragmatikes rizes" << endl;
        } else {
            cout << "Kati phge strava." << endl;
        }
    } else {
        cout << "Kati phge strava." << endl;
    }
    return 0;
}