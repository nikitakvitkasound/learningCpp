#include <iostream>

std::string GetMonth(const char& ch);
int GetDay(const char& ch);
int GetYear(const char& ch);

int main(){
    std::string expire_date { "ARZM" };

    std::cout << GetMonth(expire_date[0]) << GetDay(expire_date[1]) << GetDay(expire_date[2]) << ' ' << GetYear(expire_date[3]) << '\n';
    
    std::cout << '\n';
    system("pause");
    return 0;
}


// - - - - Declaration - - - - //

std::string GetMonth(const char& ch){
    switch (ch)
    {
    case 'A':
        return "Jan ";
        break;
    case 'B':
        return "Feb ";
        break;
    case 'C':
        return "Mar ";
        break;
    case 'D':
        return "Apr ";
        break;
    case 'E':
        return "May ";
        break;
    case 'F':
        return "Jun ";
        break;
    case 'G':
        return "Jul ";
        break;
    case 'H':
        return "Aug ";
        break;
    case 'I':
        return "Sept ";
        break;
    case 'J':
        return "Oct ";
        break;
    case 'K':
        return "Nov ";
        break;
    case 'L':
        return "Dec ";
        break;
    default:
        return "";
        break;
    }
}

int GetDay(const char& ch){
    const int LETTER_OFFSET { 81 };
    return ch - LETTER_OFFSET;
}

int GetYear(const char& ch){
    const int LETTER_OFFSET { 64 };
    const int YEAR_OFFSET { 1995 };
    return ch - LETTER_OFFSET + YEAR_OFFSET;
}
