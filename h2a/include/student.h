#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    private:
        std::string name;
        int studentNumber;
        double average;

    public:
        void setName(std::string);
        void setStudentNumber(int);
        void setAverage(double);

        std::string getName();
        int getStudentNumber();
        double getAverage();
};

#endif