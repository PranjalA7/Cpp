#include "Functionalities.h"
#include <future>

int main() {
    Container Data;
    CreateObjects(Data);

    
    try{
        std::cout << "Function1" << "\n";
        std::cout << "Average price" << "\n\n";
        float ans;
        AverageProductPriceOfGivenType(Data,Product_Type::FOOD, ans);
        std::cout << ans << "\n";
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }


    std::cout << "Function2" << "\n";
    std::cout << "\n\nMaximum Tax" << "\n";
    std::future<double> ft = std::async (TaxOfProductWithMaximumPrice,Data);
    std::cout << ft.get() << "\n";

    // try{
    //     std::cout << "Function2" << "\n";
    //     std::cout << "Maximum Tax" << "\n\n";
    //     std::cout << TaxOfProductWithMaximumPrice(Data) << "\n";
    // }catch (const std::runtime_error& ex){
    //     std::cout << ex.what() << "\n";
    // }
    
    try{
        std::cout << "Function3" << "\n";
        std::cout << "Last 2 instances" << "\n\n";
        DisplayContainer(LastNInstancesOfContainer(Data, 2));
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function4" << "\n";
        std::cout << "Unique brands" << "\n\n";

        DisplayContainer(ProductsWithUniqueBrands(Data));
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function5" << "\n";
        std::cout << "Count of food and domestic" << "\n\n";
        std::array<int, 2> arr = CountOfFoodProductsAndDomestic(Data);
        std::cout << arr[0] << " " << arr[1] << "\n";    
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function6" << "\n";
        std::cout << "Addresses container" << "\n\n";
        Container result = AddresssesOfProductSameAsGivenBrand(Data, "Nestle");
        DisplayAddresses (result);
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

}