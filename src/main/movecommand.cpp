
#include "movecommand.h"
#include "point.h"
#include <iostream>

namespace dp = design_pattern;

dp::MoveCommand::MoveCommand(Point* point, Point* old)
    : Command(point, old)
{
}

void dp::MoveCommand::execute()
{
    std::cout << "Move execute() " << m_point->toString() << std::endl;
}

void dp::MoveCommand::undo()
{
    std::cout << "Move undo() " << m_old->toString() << std::endl;
}

std::string dp::MoveCommand::getLine()
{
    return "";
}


