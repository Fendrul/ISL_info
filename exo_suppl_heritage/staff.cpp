//
// Created by Simon on 17/02/2023.
//

#include "Staff.h"

Staff::Staff(const std::string& name, const std::string& surname, int age) {
    Staff::name = name;
    Staff::surname = surname;
    Staff::age = age;

    if (!staffInitialized) {
        Staff::listStaff = new Staff*[10];
        staffInitialized = true;
    }

    nbStaff++;

    if (nbStaff = listStaffSize) {
        Staff::resizeListStaff();
    }
    Staff::listStaff[nbStaff] = this;

}

void Staff::resizeListStaff() {
    Staff *newListStaff[Staff::getNbStaff() + 10];
    for (int i = 0; i < Staff::getNbStaff(); i++) {
        newListStaff[i] = Staff::getListStaff()[i];
    }
    Staff::setListStaff(newListStaff);
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

Staff **Staff::getListStaff() {
    return listStaff;
}

void Staff::setListStaff(Staff **listStaff) {
    Staff::listStaff = listStaff;
}

int Staff::getNbStaff() {
    return nbStaff;
}

void Staff::setNbStaff(int nbStaff) {
    Staff::nbStaff = nbStaff;
}

int Staff::calculateAllStaffSalary() {
    int totalSalary = 0;
    for (int i = 0; i < Staff::getNbStaff(); i++) {
        totalSalary += Staff::getListStaff()[i]->calculateSalary();
    }
    return totalSalary;
}
