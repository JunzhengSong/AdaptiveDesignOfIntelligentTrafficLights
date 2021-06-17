#ifndef CROSSROADS_H
#define CROSSROADS_H

#endif // CROSSROADS_H
#include "Light.h"
#include "Road.h"

//十字路口
class Crossroads
{
public:
    int width;      //十字路口的宽
    Light northLight,westLight,eastLight,southLight;    //四个红绿灯
    Road northRoad,westRoad,eastRoad,southRoad;         //四条路
    int centerX,centerY;    //中心点坐标
};
