#include <iostream>
#include <string>
#define courses 3
using namespace std;
struct studentData
{
    string studentName;
    double Marks[3];
};
void FLUSH();
void GetData(studentData Students[], int Quantity);
void DisplayData(studentData Students[], int Quatity);
void Average(studentData Students[], int Quatity);
void UpdateMarks(studentData Students[], int Quatity);
int main()
{
    int Quantity = 0;
    cout << "\nEnter the Numbers of Students: ", cin >> Quantity, cout << endl;
    studentData Students[Quantity];
    GetData(Students, Quantity);
    while (1)
    {
        int option;
        cout << "Menu:\n1. Display Student Data\n2. Calculate Average marsks\n3. Change Marks.\n4. Exit\n=>", cin >> option;
        while (1)
        {
            switch (option)
            {
            case 1:
                DisplayData(Students, Quantity);
                break;
            case 2:
                Average(Students, Quantity);
                break;
            case 3:
                UpdateMarks(Students, Quantity);
                break;
            case 4:
                return 0;
                break;
            default:
                cout << "\nEnter Valid Input.\n";
                break;
            }
            break;
        }
    }
}
void GetData(studentData Students[], int Quantity)
{
    for (int i = 0; i < Quantity; i++)
    {
        FLUSH();
        cout << "Enter Name of Student no " << (i + 1) << " : ", getline(cin, Students[i].studentName);
        for (int j = 0; j < courses; j++)
        {
            cout << "\tEnter Student marks of Course no " << (j + 1) << " : ", cin >> Students[i].Marks[j];
        }
        cout << endl;
    }
    FLUSH();
    cout << endl;
}
void DisplayData(studentData Students[], int Quatity)
{
    cout << "\n\n\t\t-------DATA-------" << endl;
    for (int i = 0; i < Quatity; i++)
    {
        cout << "Name of Student : " << Students[i].studentName;
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "\t\tMarks of Course no " << (j + 1) << " : " << Students[i].Marks[j] << endl;
        }
        cout << endl;
    }
    cout << endl;
}
void Average(studentData Students[], int Quatity)
{
    int option;
    double sum;
    cout << "\n\tEnter the student no: ", cin >> option;
    for (int i = 0; i < courses; i++)
    {
        sum += Students[option - 1].Marks[i];
    }

    cout << "\tAverage :" << sum / 2 << endl;
}
void UpdateMarks(studentData Students[], int Quatity)
{
    int option, course;
    double marks;
    cout
        << "Enter the student no: ",
        cin >> option;
    cout << "Enter the course no: ", cin >> course;
    cout << "marks: ", cin >> marks;
    Students[option-1].Marks[course-1] = marks;
}
void FLUSH()
{
    while (getchar() != '\n')
    {
    }
}
