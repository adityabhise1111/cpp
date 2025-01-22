#include <iostream>
#include <cstring>

using namespace std;

class wwesuperstar {
private:
    string moves;
    int height;
    int weight;
    
public:
    char* name;

    // Default constructor
    wwesuperstar() {
        name = new char[100];  // Dynamically allocate memory for name
    }

    //copy constructor (shallow copy) deafaut feature
    
    // wwesuperstar(const wwesuperstar& other) {
    //     // Only copy the pointer (shallow copy)
    //     name = other.name;
    //     cout << "Shallow copy constructor called: name points to " << (void*)name << endl;
    // }
   //  Custom Deep copy constructor 
    // wwesuperstar(const wwesuperstar& other) {
    //     // Allocate new memory and copy the contents (deep copy)
    //     name = new char[strlen(other.name) + 1];  // +1 for null-terminator
    //     strcpy(name, other.name);  // Copy the content of the other object's name
    //     cout << "Deep copy constructor called: name points to " << (void*)name << endl;
    // }

    // Setter for name
    void setName(const char n[]) {
        strcpy(this->name, n);  // Copy the string into name
    }

    // Getter for name
    string getName() const {
        return this->name;  // Return the name
    }

    // Destructor
    ~wwesuperstar() {
        // No need to delete `name` because it is shared
        cout << "Destructor called for name: " << (void*)name << endl;
    }
};

int main() {
    wwesuperstar s1;  // Create object s1
    char name[7] = "aditya";  // Initialize name
    s1.setName(name);  // Set name in s1
    cout << "s1 name: " << s1.getName() << endl;

    wwesuperstar s2(s1);  // Create a shallow copy of s1 into s2
    cout << "s2 name: " << s2.getName() << endl;

    // Modify the name in s1
    char sirname[7] = "bhise";
    s1.setName(sirname);
    cout << "Modified s1 name: " << s1.getName() << endl;
    cout << "s2 name after s1 modification: " << s2.getName() << endl;

    return 0;
}
