#ifndef CLASS_HPP
#define CLASS_HPP

#include <string>
#include <vector>
#include <ostream>
using namespace std;

class Class {
    private:
    string courseName;
    int courseNumber;
    vector<int> sections;
    int maxStudents;
    int currentStudents;

    public:
    Class(const string& name = "", int number = 0, const vector<int>& secs = {}, int max = 0, int current = 0);

    friend ostream& operator<<(ostream& os, const Class& c);

    bool operator<(const Class& other) const;

    Class operator+(const Class& other) const;

};

#endif // CLASS_HPP