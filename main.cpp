#include <iostream>
#include <string>
#include <map>

using namespace std;

class Location {
    public:
        string name;
        string description;
        map<string, string> exits; //key: Direction, Value: Room Name
        Location() {}
        Location(string n, string d) {
            name = n;
            description = d;
        }

        void display() {
            cout << "---" << name << " ---" << endl;
            cout << description << endl;
            cout << "Exits ";
            for(auto pair : exits){
                cout << pair.first << "";
            
            }
            cout << endl;
        }

};

int main() {
    // The master Map: holds all rooms by name
    map<string, Location> world;

    //Create Rooms
    world["Start"] = Location("Start Room", "A cold, stone room.");
    world["Forest"] = Location("Dark forest", "Trees surround you.");

    //Link Rooms
    world["Start"].exits["North"] = "Forest";
    world["Forest"].exits["South"] = "Start";

    // Test it manually
    world["Start"].display();

    return 0;
}