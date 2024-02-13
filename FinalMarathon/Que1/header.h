#ifndef HEADER_H
#define HEADER_H

#include<iostream>
//class
class Inventory
{
    std::string descricption_of_product;
    int Balancestock;
    int Productcode;
    //declarations
    public:
    Inventory();
    Inventory(std::string, int , int);
    std::string get_desc();
    int get_balance();
    int get_code();
    void accept();
    void set_balance(int);
    void set_balancem(int);
    friend void purchase(Inventory*);
    friend void sale(Inventory*);
    friend void search(Inventory*);
    friend std::ostream& operator<<(std::ostream&, Inventory);
};

#endif // HEADER_H
