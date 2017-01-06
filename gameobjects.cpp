#include "gameobjects.h"

namespace Hockey
{
    RedRobot* RedRobot::pInstance = NULL;

    RedRobot* RedRobot::GetInstance()
    {
        if(pInstance == NULL)
        {
            pInstance=new RedRobot();
        }
        return pInstance;
    }

    void RedRobot::Initialize()
    {
        QPixmap pixmap(":/picture/red.png");
        radius = pixmap.height();
        pos_x = 150;
        pos_y = 60;
        pixmap.scaled(radius,radius,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        texture.setTexture(pixmap);
        edge.setColor(QColor(255,0,255));
        edge.setWidth(1);
    }

    void RedRobot::Draw(QPainter *painter)
    {
        painter->save();
        painter->translate(pos_x,pos_y);
        painter->setBrush(texture);
        painter->setPen(edge);
        painter->drawEllipse(0,0,radius,radius);
        painter->restore();
    }

    void RedRobot::Update()
    {

    }

    void RedRobot::Move_x(int step)
    {
        pos_x+=step;
    }

    void RedRobot::Move_y(int step)
    {
        pos_y+=step;
    }

    int RedRobot::getX(){
        return pos_x;
    }

    int RedRobot::getY(){
        return pos_y;
    }

    int RedRobot::getR(){
        return radius;
    }

    GreenRobot* GreenRobot::pInstance = NULL;

    GreenRobot* GreenRobot::GetInstance()
    {
        if(pInstance == NULL)
        {
            pInstance=new GreenRobot();
        }
        return pInstance;
    }

    void GreenRobot::Initialize()
    {
        QPixmap pixmap(":/picture/green.png");
        radius = pixmap.height();
        pos_x = 150;
        pos_y = 440;
        pixmap.scaled(radius,radius,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        texture.setTexture(pixmap);
        edge.setColor(Qt::green);
        edge.setWidth(1);
    }

    void GreenRobot::Draw(QPainter *painter)
    {
        painter->save();
        painter->translate(pos_x,pos_y);
        painter->setBrush(texture);
        painter->setPen(edge);
        painter->drawEllipse(0,0,radius,radius);
        painter->restore();
    }

    void GreenRobot::Update()
    {

    }

    void GreenRobot::Move_x(int step)
    {
        pos_x+=step;
    }

    void GreenRobot::Move_y(int step)
    {
        pos_y+=step;
    }

    int GreenRobot::getX(){
        return pos_x;
    }

    int GreenRobot::getY(){
        return pos_y;
    }

    int GreenRobot::getR(){
        return radius;
    }

    Ball* Ball::pInstance = NULL;

    Ball* Ball::GetInstance()
    {
        if(pInstance == NULL)
        {
            pInstance=new Ball();
        }
        return pInstance;
    }

    void Ball::Initialize()
    {
        QPixmap pixmap(":/picture/ball.png");
        radius = pixmap.height();
        pos_x = 150;
        pos_y = 250;
        pixmap.scaled(radius,radius,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        texture.setTexture(pixmap);
        edge.setColor(QColor(255,97,0));
        edge.setWidth(3);

        vx = 0;
        vy = -5;
    }

    void Ball::Draw(QPainter *painter)
    {
        painter->save();
        painter->translate(pos_x,pos_y);
        painter->setBrush(texture);
        painter->setPen(edge);
        painter->drawEllipse(0,0,radius,radius);
        painter->restore();
    }

    void Ball::Update()
    {

    }

    void Ball::Move_x(int step)
    {
        pos_x+=step;
    }

    void Ball::Move_y(int step)
    {
        pos_y+=step;
    }

    int Ball::getX(){
        return pos_x;
    }

    int Ball::getY(){
        return pos_y;
    }

    int Ball::getR(){
        return radius;
    }

    int Ball::getVelocity_x(){
        return vx;
    }

    int Ball::getVelocity_y(){
        return vy;
    }

    void Ball::setVelocity(int x, int y){
        Ball::GetInstance()->vx = x;
        Ball::GetInstance()->vy = y;
    }

    Arena* Arena::pInstance = NULL;

    Arena* Arena::GetInstance()
    {
        if(pInstance == NULL)
        {
            pInstance=new Arena();
        }
        return pInstance;
    }

    void Arena::Initialize()
    {

    }

    void Arena::Draw(QPainter *painter)
    {

    }

    void Arena::Update()
    {

    }
}
