
#ifndef LINE_COMMAND_H_
#define LINE_COMMAND_H_

#include "command.h"

namespace design_pattern
{

class LineCommand : public Command
{
public:
    explicit LineCommand(Point* point, Point* old);
    virtual ~LineCommand() = default;

    void execute();
    void undo();
    std::string getLine();
};

}

#endif // LINE_COMMAND_H_
