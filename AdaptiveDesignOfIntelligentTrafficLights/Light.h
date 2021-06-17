#ifndef LIGHT_H
#define LIGHT_H

#endif // LIGHT_H

//信号灯颜色
enum Color
{
    RED,
    GREEN,
    YELLOW
};

//信号灯
class Light
{
public:
    Color currentState;     //当前信号灯状态
    int readTime;           //红灯时长
    int yellowTime;         //黄灯时长
    int greenTime;          //绿灯时长
    int currentTime;        //当时状态持续的时长
};
