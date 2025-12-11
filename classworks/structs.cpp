#include <iostream>
using namespace std;

struct student {
    char firstName[20];
    char secondName[20];
    char lastName[20];
    double diplomnaGrade;
    double mathGrade;
    double physicsGrade;
    double score;
};

double checkGrade(){

double grade;
do{
    cout<< "Enter grade(3-6): ";
    cin >> grade;
}while(grade < 3 || grade >6);
return grade;

}


int main() {
    int n;
    do {
        cout << "Enter count of students: ";
        cin >> n;
    } while (!(n > 0 && n <= 100));

    student a[100];

    cout << "Enter students data:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent [" << i + 1 << "] first name: ";
        cin >> a[i].firstName;

        cout << "Second name: ";
        cin >> a[i].secondName;

        cout << "Last name: ";
        cin >> a[i].lastName;

        cout << "Diplomna grade: ";
       a[i].diplomnaGrade = checkGrade();

        cout << "Math grade: ";
       a[i].mathGrade = checkGrade();

        cout << "Physics grade: ";
       a[i].physicsGrade = checkGrade();

         a[i].score = a[i].diplomnaGrade + a[i].mathGrade + a[i].physicsGrade;
    }
      for (int i = 0; i < n; i++) {

        cout << "\nStudent [" << i + 1 << "] data: " << endl;
        cout << "First name: "<<a[i].firstName<<endl;
        cout << "Second name: "<<a[i].secondName<<endl;
        cout << "Last name: "<<a[i].lastName<<endl;
        cout << "Diplomna grade: " <<a[i].diplomnaGrade<<endl;
        cout << "Math grade: "<<a[i].mathGrade<<endl;
        cout <<  "Physics grade: "<<a[i].physicsGrade<<endl;
        cout << "The score of student["    << i + 1 << "] is: "<< a[i].score << endl;


      }

    return 0;
}
