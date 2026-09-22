#include <iostream>
#include <fstream>
using namespace std;

// Define the class
class Student {
private:
    int roll;
    char name[50];

public:
    void readFromFile(ifstream &fin) {
        fin >> roll;
        fin.get(); // to skip the space
        fin.getline(name, 50);
    }

    void displayData() {
        cout << "Roll Number: " << roll << "\nName: " << name << endl;
    }
};

int main() {
    Student s;
    ifstream fin("students.txt");

    if (!fin) {
        cout << "Error opening file!";
        return 1;
    }

    cout << "\n--- Student Records from File ---\n";

    while (fin.peek() != EOF) {
        s.readFromFile(fin);
        if (fin) { // check if valid data was read
            s.displayData();
            cout << "---------------------------\n";
        }
    }

    fin.close();
    return 0;
}
