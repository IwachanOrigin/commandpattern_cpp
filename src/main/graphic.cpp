
#include "graphic.h"
#include "point.h"

namespace dp = design_pattern;

dp::Graphic::Graphic()
    : m_current(0)
{
    m_history.push_back(new Point());
}

dp::Graphic::~Graphic()
{
    auto it = m_history.begin();
    while (it != m_history.end())
    {
        delete (*it);
        it++;
    }
    m_history.clear();
}

std::string dp::Graphic::status()
{
    std::string str;
    str += "current[";
    str += m_history[m_current]->toString();
    str += "]";
    return str;
}

void dp::Graphic::moveTo(int x, int y)
{
    if (this->isRedoable())
    {
        auto it = m_history.begin();
        it += m_current + 1;
        it += m_current + 1;
        while (it != m_history.end())
        {
            m_history.erase(it);
            delete (*it);
            it++;
        }
    }
    m_history.push_back(new Point(x, y));
    m_current++;
}

bool dp::Graphic::isRedoable()
{
    if (m_current < (int)m_history.size() - 1)
    {
        return true;
    }
    return false;
}

void dp::Graphic::undo()
{
    if (m_current > 0)
    {
        m_current--;
    }
}

void dp::Graphic::redo()
{
    if (this->isRedoable())
    {
        m_current++;
    }
}
