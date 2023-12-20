#include "book.h"
#include <iostream>
using namespac;

int main()
{
    BookCode *bobj = new BookCode(23.4);

    bobj->AcceptBookQuantity(45);
    bobj->CalculateBookPrice();
    return 0;
}