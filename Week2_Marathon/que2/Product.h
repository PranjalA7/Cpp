#ifndef PRODUCT_H
#define PRODUCT_H

#include "ProductType.h"
#include "ProductOrigin.h"
#include <ostream>

class Product
{
private:
    std::string productId {""};
    Product_Type productType {Product_Type::APPLIANCE};
    float productPrice {0.0f};
    std::string productBrand {""};
    Product_Origin productOrigin {Product_Origin::DOMESTIC};
    float productTaxAmount;

public:
    Product() = default;
    Product(const Product&) = delete;
    Product& operator=(const Product&) = delete;
    Product(Product&&) = delete;
    Product& operator=(Product&&) = delete;
    ~Product() = default;

    Product(std::string id, Product_Type type, float price, std::string brand, Product_Origin origin);

    std::string getProductId() const { return productId; }
    void setProductId(const std::string &productId_) { productId = productId_; }

    Product_Type getProductType() const { return productType; }
    void setProductType(const Product_Type &productType_) { productType = productType_; }

    float getProductPrice() const { return productPrice; }
    void setProductPrice(float productPrice_) { productPrice = productPrice_; }

    std::string getProductBrand() const { return productBrand; }
    void setProductBrand(const std::string &productBrand_) { productBrand = productBrand_; }

    Product_Origin getProductOrigin() const { return productOrigin; }
    void setProductOrigin(const Product_Origin &productOrigin_) { productOrigin = productOrigin_; }

    float getProductTaxAmount() const { return productTaxAmount; }
    void setProductTaxAmount(float productTaxAmount_) { productTaxAmount = productTaxAmount_; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
};

#endif // PRODUCT_H
