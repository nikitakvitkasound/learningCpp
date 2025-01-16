#include <iostream>

struct Shop
{
    const double PCT_SALES_REQD_NEW { 0.9 };
    const double PCT_SALES_REQD_USED { 0.65 };
    const double PCT_SALES_OPT_NEW { 0.4 };
    const double PCT_SALES_OPT_USED { 0.2 };

    const double PCT_OFFLIST_PAY_BY_SHOP { 0.8 };
};

struct Book
{
    int m_book_code {};
    double m_book_price {};
    int m_book_on_hand {};
    int m_book_need_to {};
    int m_book_reqd {}; //  1 - required, 0 - optional
    int m_book_new {}; //  1 - new, 0 - used
    
    int m_book_to_order {};
    double m_total_cost {};
    double m_profit {};
};

void SetBookInfo(Book& bk);
void GetBookInfo(const Book& bk);
int GetApproxSellNumbers(const Book& bk, const Shop& shp);
void GetOrderInfo(Book& bk, const Shop& shp);
void GetProfitInfo(Book& bk, const Shop& shp);


int main(){
    Shop shop;
    Book book;

    int keep_going { 1 };
    while(keep_going){
        SetBookInfo(book);

        GetBookInfo(book);
        GetOrderInfo(book, shop);

        std::cout << "\nEnter '1' to do another book, '0' to stop: ";
        std::cin >> keep_going;
    }
    GetProfitInfo(book, shop);

    std::cout << '\n';
    system("pause");
    return 0;
}


// - - - - Definition - - - - //

void SetBookInfo(Book& bk){
    std::cout << "> Enter the book code: ";
    std::cin >> bk.m_book_code;

    std::cout << "> Enter single copy price: ";
    std::cin >> bk.m_book_price;

    std::cout << "> Enter number on hand of this book: ";
    std::cin >> bk.m_book_on_hand;

    std::cout << "> Enter prospective enrollment to class: ";
    std::cin >> bk.m_book_need_to;

    std::cout << "> Enter '1' for 'required' or '0' for 'optional' book status: ";
    std::cin >> bk.m_book_reqd;
    
    std::cout << "> Enter '1' for 'new' or '0' for 'used' book status: ";
    std::cin >> bk.m_book_new;
}

void GetBookInfo(const Book& bk)
{
    std::cout << "\n*****************************************************\n";
    std::cout << "\tBook code: " << bk.m_book_code << '\n';
    std::cout << "\tBook price: $" << bk.m_book_price << '\n';
    std::cout << "\tInventory: " << bk.m_book_on_hand << " (on students' hands)\n";
    std::cout << "\tClass enrollment: " << bk.m_book_need_to << '\n';
    std::cout << "\tThis book is ";
    if(bk.m_book_reqd){
        std::cout << "'required' and ";
    }
    else{
        std::cout << "'optional' and ";
    }
    if(bk.m_book_new){
        std::cout << "'new'.";
    }
    else{
        std::cout << "'used'.";
    }
    std::cout << "\n*****************************************************\n";
}

int GetApproxSellNumbers(const Book& bk, const Shop& shp){
    if(bk.m_book_reqd){
        if(bk.m_book_new){
            return static_cast<int>(bk.m_book_need_to * shp.PCT_SALES_REQD_NEW);
        }
        return static_cast<int>(bk.m_book_need_to * shp.PCT_SALES_REQD_USED);
    }
    else{
        if(bk.m_book_new){
            return static_cast<int>(bk.m_book_need_to * shp.PCT_SALES_OPT_NEW);
        }
        return static_cast<int>(bk.m_book_need_to * shp.PCT_SALES_OPT_USED);
    }
}

void GetOrderInfo(Book& bk, const Shop& shp){
    bk.m_book_to_order = GetApproxSellNumbers(bk, shp) - bk.m_book_on_hand;
    bk.m_total_cost = bk.m_book_to_order * bk.m_book_price;

    std::cout << "\n*****************************************************\n";
    std::cout << "\tNeed to order: " << bk.m_book_to_order << " book(s).\n";
    std::cout << "\tTotal order cost: $" << bk.m_total_cost << '\n';
    std::cout << "*****************************************************\n";
}

void GetProfitInfo(Book& bk, const Shop& shp){
    bk.m_profit = bk.m_total_cost - (bk.m_total_cost * shp.PCT_OFFLIST_PAY_BY_SHOP);

    std::cout << "\n*****************************************************\n";
    std::cout << "\tTotal for all orders: $" << bk.m_total_cost << '\n';
    std::cout << "\tProfit: $" << bk.m_profit << '\n';
    std::cout << "*****************************************************\n";
}
