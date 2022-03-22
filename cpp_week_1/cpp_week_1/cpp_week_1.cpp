#include <iostream>
#include <vector>

using namespace std;

//Задание №1
//Реализуйте класс “Студент”.Необходимо хранить в переменных - членах класса : ФИО, дату рождения, контактный телефон,
//город, страну, название учебного заведения, город и страну(где
//    находится учебное заведение), номер группы.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте
//    аксессоры для доступа к отдельным переменным - членам.

class Student
{
private:
    const char*  fullname;
    const char*  city;
    const char*  country;
    const char*  university;
    const char*  locationsUniversity;
    const char*  numberGroups;

    int    day_birthday;
    int    monht_birthday;
    int    year_birthday;
    int    phoneNumbers;
public:
    void setBirthday(int&, int&, int&);
    void setPhoneNumbers(int&);
    void setfullName(const char&);
    void setInfoAboutUniversity(const char&, const char&, const char&);
    void setYourLocations(const char&, const char&);
    char getfullName();
};

void Student::setBirthday(int& day_birthday, int& monht_birthday, int& year_birthday)
{
    this->day_birthday = day_birthday;
    this->monht_birthday = monht_birthday;
    this->year_birthday = year_birthday;
}
void Student::setPhoneNumbers(int &phoneNumbers)
{
    this->phoneNumbers = phoneNumbers;
}
void Student::setfullName(const char& fullname)
{
    this->fullname = new char[sizeof(fullname)];
}
char Student::getfullName()
{
    return *fullname;
}



int main()
{
  


}


