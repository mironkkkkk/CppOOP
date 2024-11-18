#include <iostream>
#include <string>
using namespace std;

struct FIO {
    string surname; // отчество
    string name; // имя
    string lastname; // фамилия
};

struct GroupInfo {
    string university;
    string faculty;
    string groupNumber;

    int course;
};

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    FIO fio;
    GroupInfo group;
    Date birthDate;
};

FIO enterFIO() {
    FIO fio;
    cout << "enter surname: ";
    cin >> fio.surname;
    cout << "enter name: ";
    cin >> fio.name;
    cout << "enter lastname: ";
    cin >> fio.lastname;

    return fio;
}


GroupInfo enterGroup() {
    GroupInfo group;
    cout << "enter university: ";
    cin >> group.university;
    cout << "enter faculty: ";
    cin >> group.faculty;
    cout << "enter group number: ";
    cin >> group.groupNumber;

    return group;
}

Date enterDate() {
    Date date;
    cout << "enter day: ";
    cin >> date.day;
    cout << "enter mounth: ";
    cin >> date.month;
    cout << "enter year: ";
    cin >> date.year;

    return date;
}

int differenceDate(Date& date1, Date& date2) {
    int count1;
    int count2;

    count1 += (date1.year * 360) + (date1.month * 30) + date1.day;
    count2 += (date2.year * 360) + (date2.month * 30) + date2.day;

    return count1 - count2;
}

Date dateDifference(Date& date1, Date& date2) {
    int days = differenceDate(date1, date2);

    Date newDate;
    newDate.year = days / 360;
    days %= 360;
    newDate.month = days / 30;
    newDate.day = days % 30;
    return newDate;
}

Date newDate(Date& date, int day) {
    int dates = date.year * 360 + date.month * 30 + date.day + day;

    Date newDate;
    newDate.year = dates / 360;
    dates %= 360;
    newDate.month = dates / 30;
    newDate.day = dates % 30;

    return newDate;
}

bool boolDate(Date& date1, Date& date2) {
    if (date1.year == date2.year) {
        if (date1.month == date2.month) {
            if (date1.day == date2.day) {
                return false;
            }
            else if (date1.day < date2.day) {
                return true;
            }
            else {
                return false;
            }
        }
        else if (date1.month < date2.month) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (date1.year < date2.year) {
        return true;
    }
    else {
        return false;
    }
}

void showStudent(Student& student) {
    cout << "Студенту " << student.fio.lastname << " " << student.fio.name << " " << student.fio.surname << " " << "сейчас " << (2024 - student.birthDate.year) << " лет, " << student.birthDate.month << " " << "месяцев и " << student.birthDate.day << " дней" << endl;
}

void sortStudentLastname(Student arr[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        if (int((arr[i].fio.lastname)[0]) > int((arr[i + 1].fio.lastname)[0])) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void sortStudentDate(Student arr[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        if (2024 - (arr[i].birthDate.year) > 2024 - (arr[i + 1].birthDate.year)) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void showOldStudent(Student arr[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i].group.course >= 3) {
            showStudent(arr[i]);
        }
    }
}

int main() {

    const int SIZE = 3;

    Student arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i].birthDate = enterDate();
        arr[i].fio = enterFIO();
        arr[i].group = enterGroup();
    }
        
    for (int i = 0; i < SIZE; i++) {
        showStudent(arr[i]);
    }

    sortStudentLastname(arr, SIZE);

    for (int i = 0; i < SIZE; i++) {
        showStudent(arr[i]);
    }

    sortStudentDate(arr, SIZE);

    for (int i = 0; i < SIZE; i++) {
        showStudent(arr[i]);
    }

    showOldStudent(arr, SIZE);
}