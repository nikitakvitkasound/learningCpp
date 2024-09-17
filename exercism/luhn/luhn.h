#if !defined(LUHN_H)
#define LUHN_H
#include <algorithm>
#include <string>

namespace luhn {
    bool valid(std::string input);
}  // namespace luhn

#endif // LUHN_H