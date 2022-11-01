
#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <string>
#include <vector>

namespace design_pattern
{

class Point;
class Command;

class Graphic
{
public:
    explicit Graphic();
    ~Graphic();

    std::string status();
    void moveTo(int x, int y);
    void undo();
    void redo();
    void lineTo(int x, int y);

private:
    std::vector<Command*> m_history;
    int m_current;

    bool isRedoable();
    Command* getCurrentCommand();
    void addHistory(Command* command);
};

}

#endif // GRAPHIC_H_
