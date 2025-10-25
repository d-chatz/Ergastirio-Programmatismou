// Να γραφεί πρόγραμμα που να δέχεται τριψήφιο θετικό ακέραιο από τον χρήστη και να τον επιστρέφει με αντεστραμένα τα ψηφία
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number, hundreds, tens, units;
    cout << "Dwse thetiko akeraio me ws 3 pshfia: ";
    cin >> number;
    hundreds = number / 100;
    number = number - hundreds * 100;
    tens = number / 10;
    units = number - tens * 10;
    number = units * 100 + tens * 10 + hundreds;
    cout << "To antestrameno noumero einai: " << number << endl;

    return 0;
}