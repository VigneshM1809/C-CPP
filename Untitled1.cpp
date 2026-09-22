#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    char name[50];
    char dob[20];
    char bloodGroup[10];

public:
    void getPerson() {
        cout << "Enter Name: ";
        cin.getline(name, 50);
        cout << "Enter Date of Birth (DD-MM-YYYY): ";
        cin.getline(dob, 20);
        cout << "Enter Blood Group: ";
        cin.getline(bloodGroup, 10);
    }

    void showPerson() {
        cout << "\nName: " << name;
        cout << "\nDOB: " << dob;
        cout << "\nBlood Group: " << bloodGroup;
    }
};

// Derived Class 1
class Mensure : public Person {
protected:
    float height, weight;

public:
    void getMensure() {
        getPerson();
        cout << "Enter Height (in cm): ";
        cin >> height;
        cout << "Enter Weight (in kg): ";
        cin >> weight;
        cin.ignore(); // clear input buffer
    }

    void showMensure() {
        showPerson();
        cout << "\nHeight: " << height << " cm";
        cout << "\nWeight: " << weight << " kg";
    }
};

// Derived Class 2
class Contact : public Person {
protected:
    char address[100];
    char phoneNumber[15];

public:
    void getContact() {
        getPerson();
        cout << "Enter Address: ";
        cin.getline(address, 100);
        cout << "Enter Phone Number: ";
        cin.getline(phoneNumber, 15);
    }

    void showContact() {
        showPerson();
        cout << "\nAddress: " << address;
        cout << "\nPhone Number: " << phoneNumber;
    }
};

int main() {
    Mensure m;
    Contact c;

    cout << "--- Enter Physical Info ---\n";
    m.getMensure();

    cout << "\n--- Enter Contact Info ---\n";
    c.getContact();

    cout << "\n--- Displaying Physical Info ---";
    m.showMensure();

    cout << "\n\n--- Displaying Contact Info ---";
    c.showContact();

    return 0;
}

