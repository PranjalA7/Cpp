#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <memory>
#include "Product.h"
#include <functional>
#include <vector>

using Pointer = std::shared_ptr<Product>;

using Container = std::vector<Pointer>;

void CreateObjects(Container& data);

void DisplayContainer(const Container& data);

auto AverageProductPriceOfGivenType = [](const Container& data, const Product_Type type, float& ans){
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }
    ans = 0.0f;
    int count = 0;

    for (const Pointer& ptr : data)
    {
        if (ptr->getProductType() == type)
        {
            ans += ptr->getProductPrice();
            count++;
        }
    }
    
    if (count == 0)
    {
        throw std::runtime_error("No product matching with given type");
    }
    ans = ans/count;
};

auto TaxOfProductWithMaximumPrice = [](const Container& data){
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }

    float max = (*data.begin())->getProductPrice();
    for (const Pointer& ptr : data)
    {
        float current = ptr->getProductPrice(); 
        if (max < current)
        {
            max = current;
        }
    }

    return max * 0.05;
};

auto LastNInstancesOfContainer = [](const Container& data, int N){
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }
    if (N < 0 || N >= data.size())
    {
        throw std::runtime_error("N out of bound");
    }

    Container result;

    for (auto itr = data.rbegin(); N > 0 ; N--, itr++)
    {
        result.emplace_back(*itr);
    } 
    
    return result;
};

auto ProductsWithUniqueBrands = [](const Container& data){
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    } 

    Container result;

    for (int i = 0; i < data.size(); i++)
    { 
        std::string current = data[i]->getProductBrand();

        bool flag = true;
        for (int j = 0; j < i; j++)
        {
            if (current == data[j]->getProductBrand())
            {
                flag = false;
            }   
        }
        if (flag)
        {
            result.emplace_back(data[i]);
        } 
    }
    

    return result;
};

auto CountOfFoodProductsAndDomestic = [](const Container& data){
    
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }

    int Fcount = 0;
    int Dcount = 0;
    for (const Pointer& ptr : data)
    {
        if (ptr->getProductType() == Product_Type::FOOD)
        {
            Fcount++;
        }
        if (ptr->getProductOrigin() == Product_Origin::DOMESTIC)
        {
            Dcount++;
        }
    }
    return std::array<int, 2>  {Fcount, Dcount};
};

auto AddresssesOfProductSameAsGivenBrand = [](const Container& data, std::string brand){
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }

    Container result;
    for (const Pointer& ptr : data){
        if (ptr->getProductBrand() == brand)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("No match found");
    }
    return result;

};

void DisplayAddresses(const Container &data);


#endif // FUNCTIONALITIES_H
