#include "Class.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    Class test1("Object Oriented Programming", 319, {1, 2}, 30, 10);
    Class test2("Javascript", 313, {1, 2}, 30, 25);

    cout << test1 << endl;
    cout << test2 << endl;

    Class merge = test1 + test2;
    cout << "The merged class is: " << endl;
    cout << merge << endl;

    vector<Class> allClasses = {test1, test2};
    sort(allClasses.begin(), allClasses.end());
    cout << "Sorted Classes: " << endl;
    for (const auto& c : allClasses) {
        cout << c;
    }

    return 0;
}





