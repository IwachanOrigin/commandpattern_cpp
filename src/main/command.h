
#ifndef COMMAND_H_
#define COMMAND_H_

#include <string>

namespace design_pattern
{

class Point;

class Command
{
public:
    explicit Command(Point* point, Point* old);
    virtual ~Command();

    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual std::string getLine() = 0;
    Point* getPoint();

protected:
    Point* m_point;
    Point* m_old;
};

}

#endif // COMMAND_H_
