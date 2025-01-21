#include <iostream>
using namespace std;

int main() {
    int grades[5];
    cout << "Enter grades for 5 students: ";
    
    // Loop to take grades input
    for (int i = 0; i <= 5; ++i) { // Array index out of bounds error
        cin >> grades[i];
    }
    
    cout << "Grades entered: ";
    for (int i = 0; i < 5; ++i) {
        cout << grades[i] << " ";
    }
    cout << endl;

    return 0;
}
