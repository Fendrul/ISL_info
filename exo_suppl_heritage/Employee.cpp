//
// Created by Simon on 17/02/2023.
//

#include "Employee.h"

//undefined reference to `Staff::Staff(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)'
Employee::Employee(const std::string name, const std::string surname, int age, int salary, int numberHoursWorked)
        : Staff(name, surname, age) {
    Employee::salary = salary;
    Employee::numberHoursWorked = numberHoursWorked;
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    Employee::salary = salary;
}

int Employee::getNumberHoursWorked() const {
    return numberHoursWorked;
}

void Employee::setNumberHoursWorked(int nubmerHoursWorked) {
    Employee::numberHoursWorked = nubmerHoursWorked;
}

int Employee::calculateSalary() {
    return salary * numberHoursWorked;
}

void Employee::show() const {
//    std::cout << "Name: " << getName() << std::endl;
//    std::cout << "Surname: " << getSurname() << std::endl;
//    std::cout << "Age: " << getAge() << std::endl;
//    std::cout << "Salary: " << salary << std::endl;
//    std::cout << "Number of hours worked: " << numberHoursWorked << std::endl;
//    std::cout << "\n" << std::endl;
}