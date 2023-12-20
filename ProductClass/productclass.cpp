#include "productclass.h"

ProductClass::ProductClass()
    : pricePerOne(0), count(0), totalPrice(0)
{
}

ProductClass::ProductClass(const QString& name, int pricePerOne, int count)
    : name(name), pricePerOne(pricePerOne), count(count), totalPrice(0)
{
    calculateTotalPrice();
}

QString ProductClass::getName() const
{
    return name;
}

int ProductClass::getPricePerOne() const
{
    return pricePerOne;
}

int ProductClass::getCount() const
{
    return count;
}

int ProductClass::getTotalPrice() const
{
    return totalPrice;
}

void ProductClass::setName(const QString& name)
{
    this->name = name;
}

void ProductClass::setPricePerOne(int pricePerOne)
{
    this->pricePerOne = pricePerOne;
    calculateTotalPrice();
}

void ProductClass::setCount(int count)
{
    this->count = count;
    calculateTotalPrice();
}

void ProductClass::calculateTotalPrice()
{
    totalPrice = pricePerOne * count;
}
