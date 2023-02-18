//
// Created by Simon on 18/02/2023.
//

#include "StaffStatic.h"

template <class T>
StaffStatic<T>::StaffStatic() {
    if (!StaffStatic::staffInitialized) {
        StaffStatic::listStaff = new T*[10];
        StaffStatic::listStaffSize = 10;
        StaffStatic::staffInitialized = true;
    }
}

template <class T>
void StaffStatic<T>::resizeListStaff() {
    T *newListStaff[StaffStatic::getNbStaff() + 10];
    for (int i = 0; i < StaffStatic::getNbStaff() - 1; i++) {
        newListStaff[i] = StaffStatic::getListStaff()[i];
    }
    StaffStatic::setListStaff(newListStaff);
    StaffStatic::listStaffSize += 10;
}

template <class T>
T **StaffStatic<T>::getListStaff() {
    return listStaff;
}

template <class T>
void StaffStatic<T>::setListStaff(T **listStaff) {
    StaffStatic::listStaff = listStaff;
}

template <class T>
int StaffStatic<T>::getNbStaff() {
    return nbStaff;
}

template <class T>
void StaffStatic<T>::setNbStaff(int nbStaff) {
    StaffStatic::nbStaff = nbStaff;
}

template <class T>
int StaffStatic<T>::getListStaffSize() {
    return StaffStatic::listStaffSize;
}

template <class T>
void StaffStatic<T>::setListStaffSize(int listStaffSize) {
    StaffStatic::listStaffSize = listStaffSize;

}
