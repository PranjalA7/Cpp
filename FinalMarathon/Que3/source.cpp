#include <iostream>
#include <cstring>
#include "header.h"
// Default constructor
Customer::Customer()
{
    strcpy(customername, "Pranjal");
}
Customer::Customer(char *nm)
{
    strcpy(customername, nm);
}
// copy contru
Customer::Customer(Customer &c1)
{
    strcpy(customername, c1.customername);
}

int Customer::operator==(Customer &c1)
{
    
    if (customername == c1.customername)
    {
        return 1;
    }
    return 0;
}
// get set func
char *Customer::get_name()
{
    return customername;
}
void Customer::set_name(char *nm)
{
    strcpy(customername, nm);
}
void Customer::accept()
{
    // char* nm;
    std::cout << "Enter customer name: ";
    std::cin >> customername;
}
Customer::~Customer()
{
}

std::ostream &operator<<(std::ostream &os, Customer &c1)
{
    os << "Customer Name: " << c1.customername << "\n";
    return os;
}
void Customer::display()
{
    std::cout<<"Customer Name: "<<customername<<"\n";
}

// default constr
Date::Date()
{
    day = 1;
    month = 1;
    year = 2001;
}
Date::Date(int d, int m, int y):day(d),month(m),year(y){};
// get set func
int Date::get_day()
{
    return day;
}
int Date::get_month()
{
    return month;
}
int Date::get_year()
{
    return year;
}
Date::~Date()
{}
void Date::set_day(int d)
{
    day = d;
}
void Date::set_month(int m)
{
    month = m;
}
void Date::set_year(int y)
{
    year = y;
}
// input func
void Date::accept()
{
    std::cout << "Enter Month: ";
    std::cin >> month;
    if(month==2)
    {
        std::cout<<"Enter Day: ";
        std::cin>>day;
        if (day>0&&day<29)
        {
            std::cout<<"Enter Year: ";
            std::cin>>year;
        }
        else
        {
            std::cout<<"Enter correct values\n";
            accept();
        }
    }
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        std::cout<<"Enter Day: ";
        std::cin>>day;
        if (day>0&&day<32)
        {
            std::cout<<"Enter Year: ";
            std::cin>>year;
        }
        else
        {
            std::cout<<"Enter correct values\n";
            accept();
        }
    }
    else if (month==4||month==6||month==9||month==11)
    {
        std::cout<<"Enter Day: ";
        std::cin>>day;
        if (day>0&&day<31)
        {
            std::cout<<"Enter Year: ";
            std::cin>>year;
            
        }
        else
        {
            std::cout<<"Enter correct values\n";
            accept();
        }
    }
    else
    {
        std::cout<<"Enter correct values\n";
        accept();
    }
}
//operator overload
std::ostream &operator<<(std::ostream &out, Date &d1)
{
    out << "Date: "<<d1.day<<" ";
    out << d1.month<<" ";
    out << d1.year<<"\n";
    return out;
}
void Date::display()
{
    std::cout << "Date: "<<day<<" ";
    std::cout << month<<" ";
    std::cout << year<<"\n";
}
//default
Bill::Bill()
{
    billnumber=1;
    billamount=100;
}
Bill::~Bill()
{}
//get set
int Bill::get_biln()
{
    return billnumber;
}
void Bill::set_billn(int b)
{
    billnumber=b;
}
//input
void Bill::accept()
{
    std::cout<<"Enter BillNo.: ";
    std::cin>>billnumber;
    std::cout<<"Enter Name:";
    char* nm=new char[100];
    std::cin>>nm;
    customerinfo.set_name(nm);
    int d, m, y;
    std::cout<<"Enter Day: ";
    std::cin>>d;
    std::cout<<"Enter Month: ";
    std::cin>>m;
    std::cout<<"Enter Year: ";
    std::cin>>y;
    billdate.set_day(d);
    billdate.set_month(m);
    billdate.set_year(y);
    std::cout<<"Enter BillAmo.: ";
    std::cin>>billamount;
}
//operator<<
std::ostream &operator<<(std::ostream &os, Bill &d1)
{
    os << "Billnumber: "<<d1.billamount<<"\n";
    os<<d1.customerinfo;
    os<<d1.billdate;
    os<< "Bill Amount: "<<d1.billamount<<"\n";
    return os;
}
//search
void search(Bill* arr)
{
    std::cout<<"Enter Customer Name to search: ";
    char* sname= new char[100];
    std::cin>>sname;
    Customer temp;
    temp.set_name(sname);
    int z;
    for (z = 0; z < 3; z++)
    {
        if (strcmp(arr[z].customerinfo.get_name(),temp.get_name()))
        {
            std::cout<<arr[z];
            break;
        }
    }
    if (z==3)
    {
        std::cout<<"Not found\n";
    }
    
}
int Bill::get_ba()
{
    return billamount;
}