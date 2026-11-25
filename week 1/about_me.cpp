#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;

    cout << "==================" << endl;
    cout << "welcome to your first program!" << endl;
    cout << "==================" << endl;
    cout << endl;

    cout << "1. what is your name?" << endl;
    getline(cin, name);

    cout << "2. what course are you doing? (BBIT/BCS)" << endl;
    getline(cin, course);

    cout << "3. what is your hobby?" << endl;
    getline(cin, hobby);

    cout << "4. why did you choose this course?" << endl;
    getline(cin, reason);

    cout << "5. what do you expect to learn in programming?" << endl;
    getline(cin, expectation);

    cout << "6. in your own words, what is programming?" << endl;
    getline(cin, definition);

    cout << endl;
    cout << "===================" << endl;
    cout << "your profile summary" << endl;
    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason: " << reason << endl;
    cout << "Expectation: " << expectation << endl;
    cout << "Programming is: " << definition << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << " Thank you for completing this!" << endl;
    cout << "========================================" << endl;

    return 0;
}
