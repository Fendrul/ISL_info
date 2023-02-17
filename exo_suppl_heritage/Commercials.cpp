//
// Created by Simon on 17/02/2023.
//

#include "Commercial.h"

Commercials::Commercials(const std::string &name, const std::string &surname, int age, int fixedSalary, int commission, int sales)
            : Staff(name, surname, age) {
    Commercials::fixedSalary = fixedSalary;
    Commercials::commission = commission;
    Commercials::sales = sales;
}

Commercials::~Commercials() = default;

int Commercials::getFixedSalary() const {
    return fixedSalary;
}

void Commercials::setFixedSalary(int fixedSalary) {
    Commercials::fixedSalary = fixedSalary;
}

int Commercials::getCommission() const {
    return commission;
}

void Commercials::setCommission(int commission) {
    Commercials::commission = commission;
}

int Commercials::getSales() const {
    return sales;
}

void Commercials::setSales(int sales) {
    Commercials::sales = sales;
}

int Commercials::calculateSalary() {
    return fixedSalary + (commission * sales);
}