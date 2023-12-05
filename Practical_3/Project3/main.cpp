// create a class called employee with 3 data members (emp .no, name, address) a
// method called read data() to take int the details of the employee from user,
// and a function called display data() to display the details of the employer.
// in main create 2 objects of class
//  employee and display the details of the employee read data () and display
//  data() methods
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
  int empl_no;
  string name;
  string addr;

public:
  void readData() {
    cout << "Type the employee no, name and address : ";
    cin >> this->empl_no >> this->name >> this->addr;
  }
  void displayData() {
    cout << "Employee no :\t" << this->empl_no << endl;
    cout << "Name :\t\t" << this->name << endl;
    cout << "Address :\t" << this->addr << endl;
  }
};

int main() {
  Employee e1, e2;
  e1.readData();
  cout << endl;
  e2.readData();
  cout << endl;
  e1.displayData();
  cout << endl;
  e2.displayData();
  return 0;
}
