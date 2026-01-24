/*• Να δημιουργήσετε μια κλάση, η οποία να αντιπροσωπεύει έναν κύκλο.
Συγκεκριμένα, να αποτελείται
• από μια μεταβλητή-μέλος (ιδιότητα), που θα αντιπροσωπεύει την ακτίνα του (κινητής υποδιαστολής διπλής ακρίβειας), η οποία να μπορεί να προσπελαστεί απ’ ευθείας από τους απογόνους του και
• από μια συνάρτηση-μέλος (μέθοδο), που θα υπολογίζει και επιστρέφει την περίμετρό του.

• Επιπλέον να δημιουργήσετε έναν constructor, ο οποίος θα έχει μια παράμετρο σαν «είσοδο», η τιμή της οποίας θα αρχικοποιεί την ακτίνα. Η παράμετρος να έχει εξ’ ορισμού τιμή το 1.

• και έναν destructor, ο οποίος θα εμφανίζει το μήνυμα:
"KATASTROFHKYKLOY"

• Να δημιουργήσετε μια ακόμη κλάση, η οποία να αντιπροσωπεύει έναν κύλινδρο και να προέρχεται από την κλάση (να έχει σαν βασική της κλάση) την κλάση του κύκλου.
Συγκεκριμένα, να αποτελείται
• από μια μεταβλητή-μέλος (ιδιότητα), που θα αντιπροσωπεύει το ύψος του (κινητής υποδιαστολής διπλής ακρίβειας),
• από μια μεταβλητή-μέλος (ιδιότητα), που θα αντιπροσωπεύει την πυκνότητα του υλικού του (κινητής υποδιαστολής διπλής ακρίβειας), και
• από μια συνάρτηση-μέλος (μέθοδο), που θα υπολογίζει και επιστρέφει τη μάζα του (όγκος × πυκνότητα), όπου όγκος = εμβαδό βάσης × ύψος.

• Επιπλέον να δημιουργήσετε έναν constructor, ο οποίος θα έχει 3 παραμέτρους σαν «είσοδο», η 1η θα αρχικοποιεί την ακτίνα, η 2η το ύψος και η 3η την πυκνότητα του κυλίνδρου. Η 2η και η 3η
παράμετρος να έχουν εξ’ ορισμού τιμή το 1.

• και έναν destructor, ο οποίος θα εμφανίζει το μήνυμα:
"KATASTROFHKYLINDROY"

Να γράψετε ένα πρόγραμμα, στο οποίο:
• Να δημιουργήσετε ένα αντικείμενο της κλάσης κυλίνδρου, με αρχική τιμή ακτίνας το 20, πυκνότητας το 2 και αρχική τιμή του ύψους το 5.

• Στη συνέχεια, το πρόγραμμά σας να υπολογίζει (χωρίς ο χρήστης να δώσει καμία τιμή από το πληκτρολόγιο):
◦ την περίμετρο της βάσης του κυλίνδρου καθώς και
◦ τη μάζα του κυλίνδρου

και να τα εμφανίζει στην οθόνη σε ξεχωριστές γραμμές με ανάλογα μηνύματα.*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Circle {
protected:
    double radius;

public:
    double get_perimeter();
    Circle(double its_radius = 1);
    ~Circle();
};
double Circle::get_perimeter() {
    return 2 * 3.14 * radius;
}
Circle::Circle(double its_radius) {
    radius = its_radius;
}
Circle::~Circle() {
    cout << "KATASTROFHKYKLOY" << endl;
}

class Cylinder : public Circle {
private:
    double height;
    double density;

public:
    double get_mass();
    Cylinder(double its_radius, double its_height = 1, double its_density = 1);
    ~Cylinder();
};
double Cylinder::get_mass() {
    return radius * radius * 3.14 * height * density;
}
Cylinder::Cylinder(double its_radius, double its_height, double its_density) {
    radius = its_radius;
    height = its_height;
    density = its_density;
}
Cylinder::~Cylinder() {
    cout << "KATASTROFHKYLINDROY" << endl;
}

int main() {
    Cylinder A(20, 5, 2);
    cout << "H perimetros tou kulindrou A einai: " << A.get_perimeter() << " monades mhkous." << endl;
    cout << "H maza tou kulindrou A einai: " << A.get_mass() << " monades mazas." << endl;

    return 0;
}