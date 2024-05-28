#include <iostream>
#include <string>

using namespace std;

//Task 1
//class Fraction {
//private:
//    int numerator;
//    int denominator;
//
//    int gcd(int a, int b) const {
//        while (b != 0) {
//            int temp = b;
//            b = a % b;
//            a = temp;
//        }
//        return a;
//    }
//
//    void reduce() {
//        int divisor = gcd(abs(numerator), abs(denominator)); 
//        numerator /= divisor;  
//        denominator /= divisor;
//        if (denominator < 0) {  
//            numerator = -numerator;
//            denominator = -denominator;
//        }
//    }
//
//public:
//    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
//        if (den == 0) {
//            cerr << "Error: Denominator cannot be zero." << endl;
//            numerator = 0;
//            denominator = 1;
//        }
//        reduce();
//    }
//
//    void setNumerator(int num) {
//        numerator = num;
//        reduce(); 
//    }
//
//    void setDenominator(int den) {
//        if (den == 0) {
//            cerr << "Error: Denominator cannot be zero." << endl;
//            return;
//        }
//        denominator = den;
//        reduce(); 
//    }
//
//    int getNumerator() const {
//        return numerator;
//    }
//
//    int getDenominator() const {
//        return denominator;
//    }
//
//    Fraction operator+(const Fraction& other) const {
//        int new_numerator = numerator * other.denominator + other.numerator * denominator;
//        int new_denominator = denominator * other.denominator;
//        return Fraction(new_numerator, new_denominator);
//    }
//
//    Fraction operator-(const Fraction& other) const {
//        int new_numerator = numerator * other.denominator - other.numerator * denominator;
//        int new_denominator = denominator * other.denominator;
//        return Fraction(new_numerator, new_denominator);
//    }
//
//    Fraction operator*(const Fraction& other) const {
//        int new_numerator = numerator * other.numerator;
//        int new_denominator = denominator * other.denominator;
//        return Fraction(new_numerator, new_denominator);
//    }
//
//    Fraction operator/(const Fraction& other) const {
//        if (other.numerator == 0) {
//            cerr << "Error: Cannot divide by zero." << endl;
//            return Fraction(0, 1); 
//        }
//        int new_numerator = numerator * other.denominator;
//        int new_denominator = denominator * other.numerator;
//        return Fraction(new_numerator, new_denominator);
//    }
//
//    void print() const {
//        cout << numerator << "/" << denominator;
//    }
//};
//
//int main() {
//    Fraction f1(1, 2); 
//    Fraction f2(3, 4); 
//
//    Fraction sum = f1 + f2;
//    Fraction difference = f1 - f2;
//    Fraction product = f1 * f2;
//    Fraction quotient = f1 / f2;
//
//    cout << "Sum: ";
//    sum.print();
//    cout << endl;
//
//    cout << "Difference: ";
//    difference.print();
//    cout << endl;
//
//    cout << "Product: ";
//    product.print();
//    cout << endl;
//
//    cout << "Quotient: ";
//    quotient.print();
//    cout << endl;
//}

// Task 2
//class Contact {
//private:
//    char* name;
//    char* homePhone;
//    char* workPhone;
//    char* mobilePhone;
//    char* additionalInfo;
//
//    char* copyString(const char* source) {
//        char* dest = new char[strlen(source) + 1];
//        for (size_t i = 0; i < strlen(source) + 1; ++i) {
//            dest[i] = source[i];
//        }
//        return dest;
//    }
//
//public:
//    Contact(const char* name, const char* homePhone, const char* workPhone,
//        const char* mobilePhone, const char* additionalInfo) {
//        this->name = copyString(name);
//        this->homePhone = copyString(homePhone);
//        this->workPhone = copyString(workPhone);
//        this->mobilePhone = copyString(mobilePhone);
//        this->additionalInfo = copyString(additionalInfo);
//    }
//
//    Contact(const Contact& other) {
//        name = copyString(other.name);
//        homePhone = copyString(other.homePhone);
//        workPhone = copyString(other.workPhone);
//        mobilePhone = copyString(other.mobilePhone);
//        additionalInfo = copyString(other.additionalInfo);
//    }
//
//    Contact& operator=(const Contact& other) {
//        if (this != &other) {
//            delete[] name;
//            delete[] homePhone;
//            delete[] workPhone;
//            delete[] mobilePhone;
//            delete[] additionalInfo;
//
//            name = copyString(other.name);
//            homePhone = copyString(other.homePhone);
//            workPhone = copyString(other.workPhone);
//            mobilePhone = copyString(other.mobilePhone);
//            additionalInfo = copyString(other.additionalInfo);
//        }
//        return *this;
//    }
//
//    ~Contact() {
//        delete[] name;
//        delete[] homePhone;
//        delete[] workPhone;
//        delete[] mobilePhone;
//        delete[] additionalInfo;
//    }
//
//    inline const char* getName() const { return name; }
//    inline const char* getHomePhone() const { return homePhone; }
//    inline const char* getWorkPhone() const { return workPhone; }
//    inline const char* getMobilePhone() const { return mobilePhone; }
//    inline const char* getAdditionalInfo() const { return additionalInfo; }
//
//    void print() const {
//        cout << "Name: " << name << "\nHome Phone: " << homePhone
//            << "\nWork Phone: " << workPhone << "\nMobile Phone: " << mobilePhone
//            << "\nAdditional Info: " << additionalInfo << "\n";
//    }
//};
//
//class PhoneBook {
//private:
//    Contact** contacts;
//    int size;
//    int capacity;
//
//    void resize() {
//        capacity *= 2;
//        Contact** newContacts = new Contact * [capacity];
//        for (int i = 0; i < size; ++i) {
//            newContacts[i] = contacts[i];
//        }
//        delete[] contacts;
//        contacts = newContacts;
//    }
//
//public:
//    PhoneBook() : size(0), capacity(10) {
//        contacts = new Contact * [capacity];
//    }
//
//    ~PhoneBook() {
//        for (int i = 0; i < size; ++i) {
//            delete contacts[i];
//        }
//        delete[] contacts;
//    }
//
//    void addContact(const Contact& contact) {
//        if (size == capacity) {
//            resize();
//        }
//        contacts[size++] = new Contact(contact);
//    }
//
//    void removeContact(const char* name) {
//        for (int i = 0; i < size; ++i) {
//            if (strcmp(contacts[i]->getName(), name) == 0) {
//                delete contacts[i];
//                for (int j = i; j < size - 1; ++j) {
//                    contacts[j] = contacts[j + 1];
//                }
//                --size;
//                cout << "Contact removed.\n";
//                return;
//            }
//        }
//        cout << "Contact not found.\n";
//    }
//
//    void searchContact(const char* name) const {
//        for (int i = 0; i < size; ++i) {
//            if (strcmp(contacts[i]->getName(), name) == 0) {
//                contacts[i]->print();
//                return;
//            }
//        }
//        cout << "Contact not found.\n";
//    }
//
//    void showAllContacts() const {
//        for (int i = 0; i < size; ++i) {
//            contacts[i]->print();
//            cout << "-------------------------\n";
//        }
//    }
//};
//
//int main() {
//    PhoneBook phoneBook;
//    phoneBook.addContact(Contact("John Doe", "123-456-7890", "234-567-8901", "345-678-9012", "Friend from work"));
//    phoneBook.addContact(Contact("Jane Smith", "987-654-3210", "876-543-2109", "765-432-1098", "College friend"));
//
//    cout << "All Contacts:\n";
//    phoneBook.showAllContacts();
//
//    cout << "\nSearching for Jane Smith:\n";
//    phoneBook.searchContact("Jane Smith");
//
//    cout << "\nRemoving John Doe:\n";
//    phoneBook.removeContact("John Doe");
//
//    cout << "\nAll Contacts after removal:\n";
//    phoneBook.showAllContacts();
//}
