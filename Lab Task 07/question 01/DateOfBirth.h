//
// Created by rayhan on 3/17/23.
//

#ifndef TASK_01_DATEOFBIRTH_H
#define TASK_01_DATEOFBIRTH_H


class DateOfBirth {
    int day;
    int month;
    int year;
public:
    void setDay(int day);

    void setMonth(int month);

    void setYear(int year);

    int getDay() const;

    int getMonth() const;

    int getYear() const;
};


#endif //TASK_01_DATEOFBIRTH_H
