#include "collision.h"

namespace Hockey
{
    Collision::Collision(){

    }

    Collision* Collision::col = nullptr;

    Collision* Collision::getInstance()
    {
        if(col == nullptr)
        {
            col=new Collision();
        }
        return col;
    }

    int Collision::checkCls(){
        //collision with the Arena
        if (false){
            return 1;
        }
        //collision with the RedRobot
        else if (sqrt(pow(Ball::GetInstance()->getX() - RedRobot::GetInstance()->getX(), 2) +
                 pow(Ball::GetInstance()->getY() - RedRobot::GetInstance()->getY(),2)) <=
            Ball::GetInstance()->getR() + RedRobot::GetInstance()->getR())
        {
            return 2;
        }
        //collision with the GreenRobot
        else if (sqrt(pow(Ball::GetInstance()->getX() - GreenRobot::GetInstance()->getX(), 2) +
                 pow(Ball::GetInstance()->getY() - GreenRobot::GetInstance()->getY(),2)) <=
            Ball::GetInstance()->getR() + GreenRobot::GetInstance()->getR())
        {
            return 3;
        }
        //no collision occurs
        else return 0;
    }

    void Collision::bounce(){
        Ball::GetInstance()->setVelocity(Ball::GetInstance()->getVelocity_x(), -Ball::GetInstance()->getVelocity_y());
    }

    void Collision::col_RR(){
        Ball::GetInstance()->setVelocity(Ball::GetInstance()->getVelocity_x(), -Ball::GetInstance()->getVelocity_y());
    }

    void Collision::col_GR(){
        Ball::GetInstance()->setVelocity(Ball::GetInstance()->getVelocity_x(), -Ball::GetInstance()->getVelocity_y());
    }
}
