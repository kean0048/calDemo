#ifndef GLOABLE_H
#define GLOABLE_H

#include <QString>

//定义结果存放变量
extern QString calResluts;
extern QString guiInputParaR;

extern int paraTotal;

//功能键
enum funKey {
    fdelete,
    fclearWindow,
    funcUintMarkSel,
    funcAngleMarkSel,
    nameMax
};

//enum uintMarks {
//    十六进制=16,
//    十进制=10,
//    八进制=8,
//    二进制=2
//};

extern QString guiFuncNanme[];
extern QString guiEngName[];


extern int uintMark;
extern int angleMark;
//decimal
extern int decimalMark;
extern int negativeMark;
#endif // GLOABLE_H
