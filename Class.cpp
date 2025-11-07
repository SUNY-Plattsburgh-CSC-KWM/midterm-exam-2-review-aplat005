#include "Class.hpp"
#include <iostream>

Class::Class(const string& name, int number, const vector<int>& secs, int max, int current)
    : courseName(name), courseNumber(number), sections(secs), maxStudents(max), currentStudents(current) {}

ostream& operator<<(ostream& os, const Class& c) {
    os << "Course Name: " << c.courseName << endl;
    os << "Course Number: " << c.courseNumber << endl;
    os << "Max Students: " << c.maxStudents << endl;
    os << "Current Students: " << c.currentStudents << endl;
    os << "Sections: ";
    for (int crn : c.sections) {
        os << crn << " ";
    }
    os << endl;
    return os;
}

bool Class::operator<(const Class& other) const {
    return currentStudents < other.currentStudents;
}

Class Class::operator+(const Class& other) const {
    Class merge = *this;
    merge.sections.insert(merge.sections.end(), other.sections.begin(), other.sections.end());
    return merge;

}    




