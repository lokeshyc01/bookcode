#include<string>
#include<iostream>
using namespace std;


class BookCode
{
    private:
    int id;
    string name;
    double price;
    int Quant;

    public:
        BookCode(double price);
        int getId();
        string getName();
        double getPrice();

        void setId(int id);
        void setName(string name);
        void setPrice(double price);
        void CalculateBookPrice();
        void AcceptBookQuantity(int Quant);
};