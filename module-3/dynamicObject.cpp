#include <bits/stdc++.h>

using namespace std;

class student {
    public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main () {
        student *rohim = new student(23, 7, 4.44);
    cout<< rohim->roll << " " << rohim->cls << " " << rohim->gpa << endl;
    return 0;
}