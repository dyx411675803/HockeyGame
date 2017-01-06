#include "runthread.h"
#include "gameobjects.h"
#include "collision.h"

namespace Hockey
{
    RunThread::RunThread(){

    }

    void RunThread::run(){
        while(true){
            Ball::GetInstance()->Move_x(Ball::GetInstance()->getVelocity_x());
            Ball::GetInstance()->Move_y(Ball::GetInstance()->getVelocity_y());
            msleep(20);
            int check = Collision::getInstance()->checkCls();
            switch (check)
            {
            case 0:
                break;
            case 1:
                Collision::getInstance()->bounce();
                break;
            case 2:
                Collision::getInstance()->col_RR();
                break;
            case 3:
                Collision::getInstance()->col_GR();
                break;
            }
        }
    }
}
