#include <iostream>
#include <string>
#include <map>

using namespace std;

class Location {
    public:
        string name;
        string description;
        Location() {}
        Location(string n, string d) {
            name = n;
            description = d;
        }

        void display() {
            cout << "---" << name << " ---" << endl;
            cout << description << endl;
        }

};

int main() {
    cout << "Welcome to the adventure!" << endl;

    Location myRoom("kitchen", "it smells like food");
    myRoom.display();

    Location dentistOffice("Office", "Its loud in here");
    dentistOffice.display();

    Location livingRoom("Sofa", "Its soft");
    livingRoom.display();

    return 0;
}