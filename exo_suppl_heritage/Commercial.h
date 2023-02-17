//
// Created by Simon on 17/02/2023.
//

#ifndef UNTITLED1_COMMERCIAL_H
#define UNTITLED1_COMMERCIAL_H

#include "Staff.h"
#include "string"

class Commercial : public Staff {
    int fixedSalary;
    int commission;
    int sales;

public:
    Commercial(const std::string &name, const std::string &surname, int age, int fixedSalary, int commission, int sales);
    ~Commercial();

    int getFixedSalary() const;
    void setFixedSalary(int fixedSalary);
    int getCommission() const;
    void setCommission(int commission);
    int getSales() const;
    void setSales(int sales);

    int calculateSalary() override;

    void show() const;
};


#endif //UNTITLED1_COMMERCIAL_H
