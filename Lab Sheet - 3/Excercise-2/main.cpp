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

        cout << "Enter student " << i + 1 << " mark 1 : ";
        cin >> marks1[i];

        cout << "Enter student " << i + 1 << " mark 2 : ";
        cin >> marks2[i];

        findMarks (marks1[i], marks2[i], CA1[i], CA2[i]);

    }
    cout << "Student" << setw(15) << "Marks1" << setw(15) << "Marks2" << setw(15) << "CA_1" << setw(15) << "CA_2" << endl;

    for (int i = 0; i < 5; i++) {

        cout << i + 1 << setw(17) << marks1[i] << setw(15) << marks2[i] << setiosflags(ios::fixed) << setprecision(2) << setw(20) << CA1[i] << setw(15) << CA2[i] << endl;
    }

    return 0;
}
void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {

    t_CA1 = t_marks1 * 0.2;

    t_CA2 = t_marks2 * 0.3;

}
