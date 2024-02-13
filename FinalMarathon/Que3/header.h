#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<cstring>
class Customer
{
    char *customername=new char[100];
    public:
    Customer();
    Customer(char* );
    Customer(Customer&);
    char* get_name();
    void set_name(char*);
    void accept();
    void display();
    int operator==(Customer &r3);
    friend std::ostream& operator<<(std::ostream& , Customer&);
    ~Customer();
};
class Date
{
    int day;
    int month;
    int year;
    public:
    Date();
    ~Date();
    Date(int d, int m, int y);
    int get_day();
    int get_month();
    int get_year();
    void set_day(int);
    void set_month(int);
    void set_year(int);
    void accept();
    void display();
    friend std::ostream& operator<<(std::ostream& , Date&);
};
class Bill
{
    int billnumber;
    Customer customerinfo;
    Date billdate;
    int billamount;
    public:
    Bill();
    ~Bill();
    int get_biln();
    void set_billn(int );
    int get_ba();
    void accept();
    friend void search(Bill*);
    friend std::ostream &operator<<(std::ostream &out, Bill &d1);
};
#endif // HEADER_H



