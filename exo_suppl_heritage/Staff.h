//
// Created by Simon on 17/02/2023.
//

#ifndef UNTITLED1_STAFF_H
#define UNTITLED1_STAFF_H

#include <string>

class Staff {
private:
    std::string name;
    std::string surname;
    int age;
    static int nbStaff;
    static Staff **listStaff;
    static int listStaffSize;
    bool staffInitialized = false;

    static void resizeListStaff();

public:
    Staff(const std::string& name, const std::string& surname, int age);

    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getSurname() const;
    void setSurname(const std::string &surname);
    int getAge() const;
    void setAge(int age);

    static Staff **getListStaff();
    static void setListStaff(Staff **listStaff);

    static int getNbStaff();
    static void setNbStaff(int nbStaff);

    virtual int calculateSalary();
    static int calculateAllStaffSalary();
};


#endif //UNTITLED1_STAFF_H
