//
// Created by Simon on 17/02/2023.
//

#include "Staff.h"

Staff::Staff(const std::string& name, const std::string& surname, int age){
    //Call the constructor of the super class inside this constructor

    Staff::name = name;
    Staff::surname = surname;
    Staff::age = age;

    if (Staff::getNbStaff() - 1 == Staff::getListStaffSize()) {
        Staff::resizeListStaff();
    }
    
    Staff::getListStaff()[Staff::getNbStaff()] = this;
    Staff::setNbStaff(Staff::getNbStaff() + 1);
}

const std::string &Staff::getName() const {
    return name;
}

void Staff::setName(const std::string &name) {
    Staff::name = name;
}

const std::string &Staff::getSurname() const {
    return surname;
}

void Staff::setSurname(const std::string &surname) {
    Staff::surname = surname;
}

int Staff::getAge() const {
    return age;
}

void Staff::setAge(int age) {
    Staff::age = age;
}

int Staff::calculateAllStaffSalary() {
    int totalSalary = 0;
    for (int i = 0; i < Staff::getNbStaff(); i++) {
        totalSalary += Staff::getListStaff()[i]->calculateSalary();
    }
    return totalSalary;
}
