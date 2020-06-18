#ifndef _GLOABLE_H_H
#define _GLOABLE_H_H

#include "gloable.h"


//定义结果存放变量
QString calResluts = 0;

//定义参数,类似r0，r1, r2, r3
QString guiInputParaR = 0;

//功能键中文数组
QString guiFuncNanme[nameMax] = {
    "退格",
    "清屏",
    "进制",
    "度制"
};

//功能键英文数组
QString guiEngName[nameMax] = {
    "fdelete",
    "fclearWindow",
    "funcUintMarkSel",
    "funcAngleMarkSel"
};

//
int paraTotal = 0;

//进制标识
int uintMark = 16;

//角度标识
int angleMark = 0;

//decimal
int decimalMark = -1;

//negative
int negativeMark = -1;
#endif
