#ifndef PRODUCTCLASS_H
#define PRODUCTCLASS_H
#include <QString>

class ProductClass
{
public:
    ProductClass();
    ProductClass(const QString& name, int pricePerOne, int count);

    // Геттеры
    QString getName() const;
    int getPricePerOne() const;
    int getCount() const;
    int getTotalPrice() const;

    // Сеттеры
    void setName(const QString& name);
    void setPricePerOne(int pricePerOne);
    void setCount(int count);

    // Вычисление общей цены
    void calculateTotalPrice();
protected:
    QString name;
    int pricePerOne;
    int count;
    int totalPrice;



};

#endif // PRODUCTCLASS_H
