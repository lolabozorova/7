#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

class person{
protected:
    string name, phone, email;
};

class student : public person {
    friend mirea;
private:
    int student_number, average_mark;
};

class worker : public person {
    friend mirea;    
private:
    int exp, hours, salary, premy;
};

class mirea {
private:
    vector<student> all_students;
    vector<worker> all_workers;
public:


    void setNST(student& stud, string name1) {
        stud.name = name1;
    }
    string getNST(student& stud) {
        return stud.name;
    }
    void setPhoneST(student& stud, string phone1) {
        stud.phone = phone1;
    }
    string getPhoneST(student& stud) {
        return stud.phone;
    }
    void setEmailST(student& stud, string email1) {
        stud.email = email1;
    }
    string getEmailST(student& stud) {
        return stud.email;
    }


    void set_mark(student& stud, int average_mark1) {
        stud.average_mark = average_mark1;
    }
    int get_mark(student& stud) {
        return stud.average_mark;
    }
    void set_number(student& stud, int student_number1) {
        stud.student_number = student_number1;
    }
    int get_number(student& stud) {
        return stud.student_number;
    }



    void setNW(worker& work, string name2) {
        work.name = name2;
    }
    string getNW(worker& work) {
        return stud.name;
    }
    void setPhoneW(worker& work, string phone2) {
        work.phone = phone2;
    }
    string getPhoneW(worker& work) {
        return stud.phone;
    }
    void setEmailW(worker& work, string email2) {
        work.email = email2;
    }
    string getEmailW(worker& work) {
        return work.email;
    }


    void setH(worker& work, int hours1) {
        work.hours = hours1;
    }
    void setE(worker& work, int exp1) {
        work.exp = exp1;
    }
    void setS(worker& work, int salary1) {
        work.salary = salary1;
    }
    void setP(worker& work, int premy1) {
        work.premy = premy1;
    }
    int getE(worker& work) {
        return work.exp;
    }
    int getH(worker& work) {
        return work.hours;
    }
    int getS(worker& work) {
        return work.salary;
    }
    int getP(worker& work) {
        return work.premy;
    }

    void AddStudent(student& stud)
    {
        all_students.push_back(stud);
    }
    void AddWorker(worker& work)
    {
        all_workers.push_back(work);
    }

    void student_count(){
        cout << all_students.size();
    }
    void worker_count(){
        cout << all_workers.size();
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    return 0;
}
