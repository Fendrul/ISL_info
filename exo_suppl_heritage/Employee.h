//
// Created by Simon on 17/02/2023.
//

#ifndef UNTITLED1_EMPLOYEE_H
#define UNTITLED1_EMPLOYEE_H

#include <string>
#include <iostream>
#include "Staff.h"

class Employee : public Staff {

private:
    int salary;
    int numberHoursWorked;

public:
    Employee(const std::string& name, const std::string& surname, int age, int salary, int numberHoursWorked);

    int getSalary() const;
    void setSalary(int salary);
    int getNumberHoursWorked() const;
    void setNumberHoursWorked(int nubmerHoursWorked);

    int calculateSalary() override;

    virtual void show() const;
};

#endif //UNTITLED1_EMPLOYEE_H
