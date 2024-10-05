#ifndef msr_airlib_common_utils_StringUtils_hpp
#define msr_airlib_common_utils_StringUtils_hpp

#include <string>
#include <algorithm>
#include <cctype>

namespace common_utils
{
inline std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) { 
        return static_cast<char>(std::tolower(static_cast<unsigned char>(c))); 
    });
    return result;
}

inline bool iequals(const std::string& a, const std::string& b)
{
    return toLower(a) == toLower(b);
}
}

#endif //msr_airlib_common_utils_StringUtils_hpp