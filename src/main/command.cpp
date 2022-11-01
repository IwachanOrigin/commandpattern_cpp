
#include "command.h"

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
