//
// Created by Simon on 17/02/2023.
//

#include "Commercial.h"

Commercial::Commercial(const std::string name, const std::string surname, int age, int fixedSalary, int commission, int sales)
            : Staff(name, surname, age) {
    Commercial::fixedSalary = fixedSalary;
    Commercial::commission = commission;
    Commercial::sales = sales;
}

Commercial::~Commercial() = default;

int Commercial::getFixedSalary() const {
    return fixedSalary;
}

void Commercial::setFixedSalary(int fixedSalary) {
    Commercial::fixedSalary = fixedSalary;
}

int Commercial::getCommission() const {
    return commission;
}

void Commercial::setCommission(int commission) {
    Commercial::commission = commission;
}

int Commercial::getSales() const {
    return sales;
}

void Commercial::setSales(int sales) {
    Commercial::sales = sales;
}

int Commercial::calculateSalary() {
    return fixedSalary + (commission * sales);
}