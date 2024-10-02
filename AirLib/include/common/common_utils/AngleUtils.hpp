
#ifndef msr_airlib_common_utils_AngleUtils_hpp
#define msr_airlib_common_utils_AngleUtils_hpp

#include <math.h>

namespace common_utils {

inline float radToDeg(const float radians)
{
    return radians * 180.0f / static_cast<float>(M_PI);
}

inline double radToDeg(const double radians)
{
    return radians * 180.0 / M_PI;
}

inline float degToRad(const float degrees)
{
    return degrees * static_cast<float>(M_PI) / 180.0f;
}

inline double degToRad(const double degrees)
{
    return degrees * M_PI / 180.0;
}

}

#endif //msr_airlib_common_utils_AngleUtils_hpp