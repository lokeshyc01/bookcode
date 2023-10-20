#include "book.h"
#include<iostream>
using namespace std;


        BookCode::BookCode(double price)
        {
            this->price = price;
        }

      int BookCode:: getId()
        {
            return this->id;
        }
        string BookCode:: getName()
        {
            return this->name;
        }

        double BookCode:: getPrice()
        {
            return this->price;
        }

        void BookCode:: setId(int id)
        {
            this->id = id;
        }
        void BookCode::setName(string name)
        {
            this->name = name;
        }

        void BookCode::setPrice(double price)
        {
            this->price = price;
        }

        void BookCode :: AcceptBookQuantity(int Quant)
        {
            this->Quant = Quant;
        }

        void BookCode::CalculateBookPrice()
        {
            cout<<this->Quant * this->price<<endl;
        }