/*Q.No. 3
Create a class 'Student' with three data members which are name, age and address. The constructor of the
class assigns default values to name as "unknown", age as '0' and address as "not available". It has two
functions with the same name 'setInfo'. First function has two parameters for name and age and assigns
the same whereas the second function takes has three parameters which are assigned to name, age and
address respectively. Print the name, age and address of 10 students.
 Use array of objects.*/


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string address;

public:
   
    Student() : name("unknown"), age(0), address("not available") {}

   
    void setInfo(const string& studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    
    void setInfo(const string& studentName, int studentAge, const string& studentAddress) {
        name = studentName;
        age = studentAge;
        address = studentAddress;
    }

    
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents]; 

   
    for (int i = 0; i < numStudents; ++i) {
        string name;
        int age;
        string address;

        cout << "Enter name for student " << (i + 1) << ": ";
        cin >> name;
        cout << "Enter age for student " << (i + 1) << ": ";
        cin >> age;
        cout << "Enter address for student " << (i + 1) << ": ";
        cin.ignore(); 
        getline(cin, address); 

        
        students[i].setInfo(name, age, address); 
    }

    
    cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayInfo();
    }

    return 0; 
}
