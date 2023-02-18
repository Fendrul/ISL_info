//
// Created by Simon on 18/02/2023.
//

#ifndef UNTITLED1_STAFFSTATIC_H
#define UNTITLED1_STAFFSTATIC_H

template <class T>
class StaffStatic {
private:
    static int nbStaff;
    static  T **listStaff;
    static int listStaffSize;
    static bool staffInitialized;

public:
    StaffStatic();

    static void resizeListStaff();

    static T **getListStaff();
    static void setListStaff(T **listStaff);

    static int getListStaffSize();
    static void setListStaffSize(int listStaffSize);

    static int getNbStaff();
    static void setNbStaff(int nbStaff);
};


#endif //UNTITLED1_STAFFSTATIC_H
