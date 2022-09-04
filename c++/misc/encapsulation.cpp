// OOP - Encapsulation
// The meaning of encapsulation is to make sure that "sensitive"
// data is hidden from users.

#include <iostream>

using namespace std;

class Employee {
    
    private:
        int salary;

    public:

        // Setter
        void setSalary(int employeeSalary) {
            salary = employeeSalary;
        }

        // Getter
        int getSalary() {
            return salary;
        }
};


int main() {
    
    Employee johnDoe;

    johnDoe.setSalary(50000);
    cout << johnDoe.getSalary() << endl;

    return 0;

}
