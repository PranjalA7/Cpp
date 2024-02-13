#include "Product.h"

Product::Product(std::string id, Product_Type type, float price, std::string brand, Product_Origin origin)
    :productId(id), productType(type), productPrice(price), productBrand(brand),productOrigin(origin)
{
    productTaxAmount = 0.05 * productPrice;
}

std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "productId: " << rhs.productId
       << " productType: " << static_cast<int> (rhs.productType)
       << " productPrice: " << rhs.productPrice
       << " productBrand: " << rhs.productBrand
       << " productOrigin: " << static_cast<int> (rhs.productOrigin)
       << " productTaxAmount: " << rhs.productTaxAmount;
    return os;
}
