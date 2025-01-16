// whlie loop and exit value
// print() - book review, print() - final coast
// funcs: need to order, total cost
// get all dm through cin

#include <iostream>

struct Book
{
    int m_book_code {};
    float m_book_price {};
    int m_book_on_hand {};
    int m_book_need_to {};
    int m_book_reqd {}; //  1 - required, 0 - optional
    int m_book_new {}; //  1 - new, 0 - used
};

void SetBookInfo(Book& book);
void GetBookInfo(const Book& book);

int main(){
    Book book;
    int keep_going { 1 };
    while(keep_going){
        SetBookInfo(book);
        GetBookInfo(book);
        
        std::cout << "\nEnter '1' to do another book, '0' to stop: ";
        std::cin >> keep_going;
    }

    std::cout << '\n';
    system("pause");
    return 0;
}


// - - - - Definition - - - - //

void SetBookInfo(Book& book){
    std::cout << "> Enter the book code: ";
    std::cin >> book.m_book_code;

    std::cout << "> Enter single copy price: ";
    std::cin >> book.m_book_price;

    std::cout << "> Enter number on hand of this book: ";
    std::cin >> book.m_book_on_hand;

    std::cout << "> Enter prospective enrollment to class: ";
    std::cin >> book.m_book_need_to;

    std::cout << "> Enter '1' for 'required' or '0' for 'optional' book status: ";
    std::cin >> book.m_book_reqd;
    
    std::cout << "> Enter '1' for 'new' or '0' for 'used' book status: ";
    std::cin >> book.m_book_new;
}

void GetBookInfo(const Book& book)
{
    std::cout << "\n*****************************************************\n";
    std::cout << "\tBook code: " << book.m_book_code << '\n';
    std::cout << "\tBook price: $" << book.m_book_price << '\n';
    std::cout << "\tInventory: " << book.m_book_on_hand << " (on students' hands)\n";
    std::cout << "\tClass enrollment: " << book.m_book_need_to << '\n';
    std::cout << "\tThis book is ";
    if(book.m_book_reqd){
        std::cout << "'required' and ";
    }
    else{
        std::cout << "'optional' and ";
    }
    if(book.m_book_new){
        std::cout << "'new'.";
    }
    else{
        std::cout << "'used'.";
    }
    std::cout << "\n*****************************************************\n";
}
