//
// Created by Simon on 17/02/2023.
//

#include "Staff.h"

int Staff::nbStaff = 0;
Staff **Staff::listStaff = nullptr;
int Staff::listStaffSize = 0;
bool Staff::staffInitialized = false;

Staff::Staff(const std::string& name, const std::string& surname, int age) {
    Staff::name = name;
    Staff::surname = surname;
    Staff::age = age;

    if (!Staff::staffInitialized) {
        Staff::listStaff = new Staff*[10];
        Staff::listStaffSize = 10;
        Staff::nbStaff = 0;
        staffInitialized = true;
    }

    if (Staff::nbStaff - 1 == Staff::listStaffSize) {
        Staff::resizeListStaff();
    }
    
    Staff::listStaff[nbStaff] = this;
    Staff::nbStaff++;
}

Staff::~Staff() {
    Staff::nbStaff--;
}

void Staff::resizeListStaff() {
    Staff *newListStaff[Staff::getNbStaff() + 10];
    for (int i = 0; i < Staff::getNbStaff() - 1; i++) {
        newListStaff[i] = Staff::getListStaff()[i];
    }
    Staff::setListStaff(newListStaff);
    Staff::listStaffSize += 10;
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
