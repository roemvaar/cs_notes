// C++ - Exceptions
// When an error occurs, C++ will normally stop and generate an error message.
// The technical term for this is: C++ will throw an exception (throw an error)
//
// C++ - Exception handling: try and catch

#include <iostream>

using namespace std;

void checkAge(int age);

int main() {
    
    for(int i = 15; i < 22; i++) {
        checkAge(i);
    }

    return 0;
}


void checkAge(int age) {
    
    try {
        if(age >= 18) {
            cout << "Access granted - you're old enough" << endl;
        }
        else {
            throw(age);
        }
    }

    catch(...) {
        cout << "Access denied - You must be at least 18 years old." << endl;
        cout << "Kiddo, you're only " << age << endl;
    }
}

