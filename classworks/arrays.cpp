#include <iostream>
using namespace std;

void functionGrades(int countGrades, double grades[], double &sumGrades, double &average,double &maxGrade, double &minGrade) {

    for (int i = 0; i < countGrades; i++) {
        cout << "Enter the grade[" << i + 1 << "]: ";
        cin >> grades[i];

        sumGrades += grades[i];

        if (grades[i] > maxGrade) maxGrade = grades[i];
        if (grades[i] < minGrade) minGrade = grades[i];
    }

    average = sumGrades / countGrades;
    cout << "The avg grade is: " << average << endl;
    cout << "The max grade is: " << maxGrade << endl;
    cout << "The min grade is: " << minGrade << endl;
}

int main() {
    int countGrades, numberMaxGrades = 0, listMax[15], numberMinGrades, listMin[15];
    double sumGrades = 0, average;
    double maxGrade = 0;
    double minGrade = 6;

    do {
        cout << "Enter count of students(1-15): ";
        cin >> countGrades;
    } while (countGrades < 1 || countGrades > 15);

    double* grades = new double[countGrades];

    cout << "Enter the grades of the students:\n ";

    functionGrades(countGrades, grades, sumGrades, average, maxGrade, minGrade);

    for (int i = 0; i < countGrades; i++) {
        if (grades[i] == maxGrade) {
            listMax[numberMaxGrades] = i;
            numberMaxGrades++;
        }
    }

    for (int i = 0; i < countGrades; i++) {
        if (grades[i] == minGrade) {
            listMin[numberMinGrades] = i;
            numberMinGrades++;
        }
    }

    cout << "The number of max grades is: " << numberMaxGrades << endl;
    cout << "The number of min grades is: " << numberMinGrades << endl;
    cout << "The indexes of max grades are: ";
    for (int i = 0; i < numberMaxGrades; i++) {
        cout << listMax[i] + 1 << ",";
    }
    cout << "\nThe indexes of min grades are: ";
    for(int i = 0; i < numberMinGrades; i++){
        cout << listMin[i] + 1 << ",";
    }

    delete[] grades;
    return 0;
}
