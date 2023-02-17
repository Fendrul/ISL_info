cmake_minimum_required(VERSION 3.24)
project(untitled1)

set(CMAKE_CXX_STANDARD 23)

#undefined reference to `Staff::listStaffSize'
#undefined reference to `Staff::nbStaff'
#undefined reference to `Staff::listStaff'
#undefined reference to `vtable for Staff'

add_executable(untitled1 main.cpp "exo_suppl_heritage/Manager.h" "exo_suppl_heritage/Manager.cpp" "exo_suppl_heritage/Employee.cpp" "exo_suppl_heritage/staff.cpp")