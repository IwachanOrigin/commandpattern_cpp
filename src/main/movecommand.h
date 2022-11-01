
#ifndef MOVE_COMMAND_H_
#define MOVE_COMMAND_H_

#include "command.h"

namespace design_pattern
{

class MoveCommand : public Command
{
public:
    explicit MoveCommand(Point* point, Point* old);
    virtual ~MoveCommand() = default;

    void execute();
    void undo();
    std::string getLine();
};

}

#endif // MOVE_COMMAND_H_
