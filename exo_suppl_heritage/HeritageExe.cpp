//
// Created by Simon on 17/02/2023.
//


#include "Manager.h"
#include "Employee.h"
#include "Commercial.h"
#include "string"
using namespace std;

int startHeritageExe() {

    Employee *employee1 = new Employee("Simon", "Bouvier", 20, 1000, 40);
    Employee *employee2 = new Employee("Rachelle", "Doutier", 20, 1200, 35);
    Employee *employee3 = new Employee("Paul", "Ravier", 20, 850, 62);
    Manager *manager1 = new Manager("Jean", "Dupont", 20, 1500, 30);
    Manager *manager2 = new Manager("Pierre", "Boulard", 20, 2000, 70);

    manager1->addSubordinate(employee1);
    manager1->addSubordinate(employee2);
    manager1->addSubordinate(employee3);
    manager2->addSubordinate(manager1);

    cout << "Direct subordinate of the highest manager\n" << endl;
    manager2->showDirectSubordinates();
    cout << "\n\n\n\n" << endl;

    cout << "Direct and indirect subordinates of the highest manager\n" << endl;
    manager2->showAllSubordinates();

    Commercial *commercial1 = new Commercial("Daniyal", "Yunusau", 26, 1250, 20, 80);
    Commercial *commercial2 = new Commercial("Charlotte", "Meyer", 27, 1500, 30, 60);

    cout << "Le salaire total de tous les employés est " << Staff::calculateAllStaffSalary() << endl;

    return 0;
}