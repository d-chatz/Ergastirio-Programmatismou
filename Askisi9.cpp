/*
Να δημιουργήσετε μια κλάση παραλληλόγραμμο, η οποία θα αποτελείται:

από δύο μεταβλητές-μέλη (ιδιότητες) που θα αντιπροσωπεύουν το μήκος και το πλάτος του (κινητής υποδιαστολής διπλής ακρίβειας)

από έναν constructor με δύο παραμέτρους, οι οποίες θα καθορίζουν τις τιμές του μήκους και του πλάτους

από μια συνάρτηση υπερφόρτωσης του τελεστή +, η οποία θα αναλαμβάνει να προσθέσει τα μήκη δύο παραλληλογράμμων μεταξύ τους και τα πλάτη μεταξύ τους.
Π.χ. με την εντολή:
Παραλληλόγραμμο3 = Παραλληλόγραμμο1 + Παραλληλόγραμμο2;
το Παραλληλόγραμμο3 θα πρέπει να έχει μήκος ίσο με το άθροισμα των μηκών του Παραλληλόγραμμο1 και του Παραλληλόγραμμο2. Το ίδιο να ισχύει για το πλάτος.
Η συνάρτηση αυτή να είναι συνάρτηση-μέλος της κλάσης.

από μια συνάρτηση υπερφόρτωσης του τελεστή ==, η οποία θα αναλαμβάνει να συγκρίνει τα μήκη δύο παραλληλογράμμων μεταξύ τους και τα πλάτη μεταξύ τους.
Π.χ. με την εντολή:
Παραλληλόγραμμο1 == Παραλληλόγραμμο2
στην περίπτωση που τα μήκη και πλάτη των δύο παραλληλογράμμων είναι ίσα, να επιστρέφει «αληθές» αλλιώς να επιστρέφει «ψευδές».
Η συνάρτηση αυτή να είναι συνάρτηση-μέλος της κλάσης.

από μια, φιλική προς την κλάση κύκλου, συνάρτηση υπερφόρτωσης του τελεστή >>, η οποία θα αναλαμβάνει να διαβάσει από το πληκτρολόγιο τις διαστάσεις ενός παραλληλογράμμου στη μορφή: μήκος x πλάτος.
Π.χ.: 3 x 4
από μια, φιλική προς την κλάση κύκλου, συνάρτηση υπερφόρτωσης του τελεστή <<, η οποία θα αναλαμβάνει να εμφανίσει στην οθόνη τις διαστάσεις ενός παραλληλογράμμου στη μορφή: μήκος x πλάτος.
Π.χ.: 3 x 4
• Να γράψετε ένα πρόγραμμα που:

να δημιουργεί 3 αντικείμενα της κλάσης παραλληλογράμμου, όλα με αρχική τιμή μήκους 0 και πλάτους 0.

να ζητά από τον χρήστη να δώσει νέες διαστάσεις για το 1ο και το 2ο παραλληλόγραμμο

να προσθέτει το 1ο παραλληλόγραμμο με το 2ο παραλληλόγραμμο και να αποθηκεύει το αποτέλεσμα στο 3ο παραλληλόγραμμο

να εμφανίζει τις διαστάσεις του 3ου παραλληλόγραμμου στην οθόνη

να συγκρίνει το 1ο παραλληλόγραμμο με το 2ο παραλληλόγραμμο για ισότητα και να εμφανίζει μήνυμα για το αν είναι ίδια ή όχι
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class Parallhlogrammo {
private:
    double length;
    double height;

public:
    Parallhlogrammo(double its_length, double its_height);
    Parallhlogrammo operator+(Parallhlogrammo P2);
    bool operator==(Parallhlogrammo P2);
    friend istream &operator>>(istream &input, Parallhlogrammo &P);
    friend ostream &operator<<(ostream &output, Parallhlogrammo &P);
};
Parallhlogrammo::Parallhlogrammo(double its_length, double its_height) {
    length = its_length;
    height = its_height;
}
Parallhlogrammo Parallhlogrammo::operator+(Parallhlogrammo P2) {
    Parallhlogrammo temp(0, 0);
    temp.length = this->length + P2.length;
    temp.height = this->height + P2.height;
    return temp;
}
bool Parallhlogrammo::operator==(Parallhlogrammo P2) {
    if (this->length == P2.length && this->height == P2.height) {
        return true;
    } else {
        return false;
    }
}
istream &operator>>(istream &input, Parallhlogrammo &P) {
    char placeholder;
    input >> P.length >> placeholder >> P.height;
    return input;
}
ostream &operator<<(ostream &output, Parallhlogrammo &P) {
    output << P.length << " x " << P.height;
    return output;
}

int main() {
    Parallhlogrammo P1(0, 0), P2(0, 0), P3(0, 0);
    cout << "Dwse length x height gia to Parallhlogrammo P1: ";
    cin >> P1;
    cout << "Dwse length x height gia to Parallhlogrammo P2: ";
    cin >> P2;
    P3 = P1 + P2;
    cout << "To Parallhlogrammo P3 exei diastaseis: " << P3 << endl;
    if (P1 == P2) {
        cout << "Ta P1 kai P2 einai idia" << endl;
    } else {
        cout << "Ta P1 kai P2 den einai idia" << endl;
    }

    return 0;
}