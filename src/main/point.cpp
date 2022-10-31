
#include "point.h"
#include <sstream>

namespace dp = design_pattern;

dp::Point::Point()
    : m_x(0)
    , m_y(0)
{
}

dp::Point::Point(int x, int y)
    : m_x(x)
    , m_y(y)
{
}

std::string dp::Point::toString()
{
    std::string str;
    std::stringstream ssX, ssY;
    ssX << this->getX();
    ssY << this->getY();
    str += "(";
    str += ssX.str();
    str += ",";
    str += ssY.str();
    str += ")";
    return str;
}
