#ifndef CROSSROADS_H
#define CROSSROADS_H

#endif // CROSSROADS_H
#include "Light.h"


//十字路口
class Crossroads
{
public:
    int width;      //十字路口的宽
    Light northLight,westLight,eastLight,southLight;    //四个红绿灯
};
