#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <algorithm>
#include <unordered_map>

namespace atbash_cipher {
    std::string encode(std::string code);
    std::string decode(std::string code);

}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H