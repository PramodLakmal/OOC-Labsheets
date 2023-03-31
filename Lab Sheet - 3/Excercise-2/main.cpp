#include <iostream>
#include <iomanip>

using namespace std;

void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

int main()
{
    int marks1[5], marks2[5];
    float CA1[5], CA2[5];

    cout << "Enter the marks for 5 students" << endl;

    for (int i = 0; i < 5; i++) {

        cout << "Enter student " + i + " mark 1 : ";
        cin >> marks1[i];

        cout << "Enter student " + i + " mark 2 : ";
        cin >> marks2[i];

        findMarks (marks1, marks2, CA1, CA2);

    }

    return 0;
}
void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {

    t_CA1 = t_marks1 * 0.2;

    t_CA2 = t_marks2 * 0.3;

}
