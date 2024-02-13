#include "Employee.h"
#include "BussinessOwner.h"
#include <variant>
#include <memory>
#include "Functionalities.h"
int main(){
    std::variant<Employee, BussinessOwner> v1;
    v1 = Employee();

    // /*
    //     visit needs at least 2 parameters

    //     first : Lamda func that explains what to do with item inside the variant
    //     second (and subsequent parameters) : objects of variant class, (object/s on which
    //     visit lamda has to be applied)
    // */
    std::visit(
        [](auto&& val){ val.PayTax(); },
        v1
    );

    // v1 = BussinessOwner();
    // std::visit(
    //     [](auto&& val){ val.PayTax(); },
    //     v1
    // );

    // std::shared_ptr<Employee> e1 = std::make_shared<Employee> ();

    // std::variant< std::shared_ptr<Employee>, std::shared_ptr<BussinessOwner> > v2;

    // v2 = e1; //storing e1 inside the variant. This should be stored in slot

    // std::visit(
    //     [] ( auto&& val ) { 
    //         std::cout << "Hello. ";
    //         val->PayTax(); },
    //     v2
    // );
    Container data;
    CreateObjects(data);
    for(auto ptr : data){
        std::visit(
            []( auto&& val ) {
                val->PayTax();
            },
            ptr
        );
    }
    
}
