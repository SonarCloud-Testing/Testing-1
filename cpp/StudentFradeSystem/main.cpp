#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> grades;
    cout << "Enter grades for 5 students: ";
    
    // Loop to take grades input
    for (int i = 0; i < 5; ++i) {
        cin >> grades[i];
    }
    
    cout << "Grades entered: ";
    for (int i = 0; i < 5; ++i) {
        cout << grades[i] << " ";
    }
    cout << endl;

    return 0;
}