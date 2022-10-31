
#ifndef POINT_H_
#define POINT_H_

#include <string>

namespace design_pattern
{

class Point
{
public:
    Point();
    Point(int x, int y);
    int getX() { return m_x; }
    int getY() { return m_y; }
    std::string toString();
private:
    int m_x;
    int m_y;
};

}

#endif // POINT_H_
