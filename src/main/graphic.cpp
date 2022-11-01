
#include "graphic.h"
#include "point.h"
#include "movecommand.h"
#include "linecommand.h"

namespace dp = design_pattern;

dp::Graphic::Graphic()
    : m_current(0)
{
    m_history.push_back(new MoveCommand(new Point(0, 0), new Point(0, 0)));
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
    str += this->getCurrentCommand()->getPoint()->toString();
    str += "]\n";

    Command* command = nullptr;
    for (int i = 0; i < m_current; i++)
    {
        command = (Command*)m_history[i];
        str += command->getLine();
    }
    return str;
}

void dp::Graphic::moveTo(int x, int y)
{
    this->addHistory(new MoveCommand(new Point(x, y), this->getCurrentCommand()->getPoint()));
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
        this->getCurrentCommand()->undo();
        m_current--;
    }
}

void dp::Graphic::redo()
{
    if (this->isRedoable())
    {
        m_current++;
        this->getCurrentCommand()->execute();
    }
}

dp::Command* dp::Graphic::getCurrentCommand()
{
    auto it = m_history.begin();
    it += m_current;
    return (*it);
}


void dp::Graphic::addHistory(dp::Command* command)
{
    if (this->isRedoable())
    {
        auto it = m_history.begin();
        it += m_current + 1;
        while (it != m_history.end())
        {
            m_history.erase(it);
            delete (*it++);
        }
    }
    m_history.push_back(command);
    m_current++;
    command->execute();
}

void dp::Graphic::lineTo(int x, int y)
{
    this->addHistory(new LineCommand(new Point(x, y), this->getCurrentCommand()->getPoint()));
}
