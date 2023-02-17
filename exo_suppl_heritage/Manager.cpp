//
// Created by Simon on 17/02/2023.
//

#include "Manager.h"
using namespace std;

Manager::Manager(const std::string &name, const std::string &surname, int age, int salary, int numberHoursWorked)
        : Employee(name, surname, age, salary, numberHoursWorked) {
    nbSubordinates = 0;
}

void Manager::addSubordinate(Employee *employee) {
    subordinates[nbSubordinates] = employee;
    nbSubordinates++;
}

void Manager::showDirectSubordinates() const {
    for (int i = 0; i < nbSubordinates; i++) {
        subordinates[i]->show();
    }
}

void Manager::showAllSubordinates() const {
    for (int i = 0; i < nbSubordinates; i++) {
        subordinates[i]->show();
        Manager *manager = dynamic_cast<Manager *>(subordinates[i]);
        if (manager != nullptr) {
            manager->showAllSubordinates();
        }
    }
}