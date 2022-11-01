
#include "linecommand.h"
#include "point.h"
#include <iostream>

namespace dp = design_pattern;

dp::LineCommand::LineCommand(Point* point, Point* old)
    : Command(point, old)
{
}

void dp::LineCommand::execute()
{
    std::cout << "Line execute() " << m_point->toString() << std::endl;
}

void dp::LineCommand::undo()
{
    std::cout << "Line undo() " << m_old->toString() << std::endl;
}

std::string dp::LineCommand::getLine()
{
    std::string str;
    str += "Line[";
    str += m_old->toString();
    str += "<->";
    str += m_point->toString();
    str += "]";
    return str;
}

