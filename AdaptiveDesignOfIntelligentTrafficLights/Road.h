#ifndef ROAD_H
#define ROAD_H

#endif // ROAD_H

#include <vector>

//朝向
enum Orientation
{
    NORTH,
    SOUTH,
    WEST,
    EAST
};

//道路
class Road
{
public:
    double length;             //道路长
    int limitMaxSpeed;         //道路限速
    int straightWay;           //直行道数量
    int leftWay;               //左转道数量
    int rightWay;              //右转道数量
    Orientation orientation;   //朝向
};
