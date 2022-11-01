
#include "graphic.h"

namespace dp = design_pattern;

int main(int argc, char* argv[])
{
    dp::Graphic graphic = dp::Graphic();

    graphic.lineTo(0, 0);
    graphic.moveTo(1, 2);
    graphic.redo();
    graphic.undo();

    return 0;
}
