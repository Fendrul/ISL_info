//
// Created by Simon on 17/02/2023.
//

#ifndef UNTITLED1_STAFF_H
#define UNTITLED1_STAFF_H

#include <string>
#include "StaffStatic.h"

class Staff : public StaffStatic<Staff> {
private:
    std::string name;
    std::string surname;
    int age;

public:
    Staff(const std::string& name, const std::string& surname, int age);

    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getSurname() const;
    void setSurname(const std::string &surname);
    int getAge() const;
    void setAge(int age);

    virtual int calculateSalary();
    static int calculateAllStaffSalary();
};


#endif //UNTITLED1_STAFF_H
