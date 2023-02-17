//
// Created by Simon on 17/02/2023.
//

#ifndef UNTITLED1_MANAGER_H
#define UNTITLED1_MANAGER_H

#include "Employee.h"

class Manager : public Employee {

private:
    //create an array of employees
    Employee *subordinates[10];
    int nbSubordinates;

public:
    Manager(const std::string &name, const std::string &surname, int age, int salary, int numberHoursWorked);

    void addSubordinate(Employee *employee);
    void showDirectSubordinates() const;
    void showAllSubordinates() const;
};

#endif //UNTITLED1_MANAGER_H
