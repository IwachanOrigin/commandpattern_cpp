
#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <string>
#include <vector>

namespace design_pattern
{

class Point;

class Graphic
{
public:
    explicit Graphic();
    ~Graphic();

    std::string status();
    void moveTo(int x, int y);
    void undo();
    void redo();
private:
    std::vector<Point*> m_history;
    int m_current;

    bool isRedoable();
};

}

#endif // GRAPHIC_H_
