
#include "command.h"
#include "point.h"

namespace dp = design_pattern;

dp::Command::Command(Point* point, Point* old)
    : m_point(point)
    , m_old(old)
{
}

dp::Command::~Command()
{
    delete m_point;
}

dp::Point* dp::Command::getPoint()
{
    return m_point;
}
