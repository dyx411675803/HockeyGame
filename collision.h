#ifndef COLLISION_H
#define COLLISION_H

#include <math.h>
#include "gameobjects.h"

namespace Hockey{
    class Collision{

    public:

        Collision();

    public:

        int checkCls();

        void bounce();
        void col_RR();
        void col_GR();

        static Collision* getInstance();

    private:

        static Collision* col;

    };
}

#endif // COLLISION_H
