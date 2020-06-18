/********************************************************************************
** Form generated from reading UI file 'calmain.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALMAIN_H
#define UI_CALMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calMain
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *total;
    QVBoxLayout *show;
    QTextEdit *textEdit_Result;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_hex;
    QPushButton *pushButton_dec;
    QPushButton *pushButton_otc;
    QPushButton *pushButton_bin;
    QFrame *line_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_hex;
    QLabel *label_dec;
    QLabel *label_otc;
    QLabel *label_bin;
    QFrame *line_6;
    QHBoxLayout *baseSetColumn;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_8;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_7;
    QFrame *line_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_clearAll;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_clearRam;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QCheckBox *checkBox_shift;
    QCheckBox *checkBox_sqhs;
    QPushButton *pushButton_clearwindow;
    QPushButton *pushButton_delete;
    QLabel *label_null_1;
    QLabel *label_null_2;
    QLabel *label_null_3;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QGridLayout *baseFuncArea;
    QPushButton *pushButton_E;
    QPushButton *pushButton_D;
    QPushButton *pushButton_C;
    QPushButton *pushButton_number_0;
    QPushButton *pushButton_number_7;
    QPushButton *pushButton_A;
    QPushButton *pushButton_B;
    QPushButton *pushButton_or;
    QPushButton *pushButton_number_1;
    QPushButton *pushButton_number_4;
    QPushButton *pushButton_div;
    QPushButton *pushButton_nor;
    QPushButton *pushButton_piont;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_number_6;
    QPushButton *pushButton_integer;
    QPushButton *pushButton_number_9;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_leftmove;
    QPushButton *pushButton_number_3;
    QPushButton *pushButton_equ;
    QPushButton *pushButton_yiro;
    QPushButton *pushButton_add;
    QPushButton *pushButton_leaveV;
    QPushButton *pushButton_number_8;
    QPushButton *pushButton_and;
    QPushButton *pushButton_number_2;
    QPushButton *pushButton_number_5;
    QPushButton *pushButton_symbol;
    QPushButton *pushButton_F;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QGridLayout *advFuncArea;
    QPushButton *pushButton_DMS;
    QPushButton *pushButton_ER;
    QPushButton *pushButton;
    QPushButton *pushButton_35;
    QPushButton *pushButton_TAN;
    QPushButton *pushButton_PI;
    QPushButton *pushButton_37;
    QPushButton *pushButton_41;
    QPushButton *pushButton_42;
    QPushButton *pushButton_SIN;
    QPushButton *pushButton_COS;
    QPushButton *pushButton_45;
    QPushButton *pushButton_46;
    QPushButton *pushButton_47;
    QPushButton *pushButton_48;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calMain)
    {
        if (calMain->objectName().isEmpty())
            calMain->setObjectName(QStringLiteral("calMain"));
        calMain->resize(654, 708);
        calMain->setMaximumSize(QSize(7000, 8460));
        QIcon icon;
        icon.addFile(QStringLiteral("images/calculator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        calMain->setWindowIcon(icon);
        calMain->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(calMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        total = new QVBoxLayout();
        total->setSpacing(6);
        total->setObjectName(QStringLiteral("total"));
        show = new QVBoxLayout();
        show->setSpacing(6);
        show->setObjectName(QStringLiteral("show"));
        textEdit_Result = new QTextEdit(centralWidget);
        textEdit_Result->setObjectName(QStringLiteral("textEdit_Result"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_Result->sizePolicy().hasHeightForWidth());
        textEdit_Result->setSizePolicy(sizePolicy);
        textEdit_Result->setMinimumSize(QSize(0, 80));
        textEdit_Result->setMaximumSize(QSize(16777215, 100));
        textEdit_Result->setLayoutDirection(Qt::RightToLeft);
        textEdit_Result->setStyleSheet(QStringLiteral("font: 15pt \"Ubuntu\";"));
        textEdit_Result->setFrameShape(QFrame::Box);
        textEdit_Result->setLineWidth(3);
        textEdit_Result->setMidLineWidth(2);
        textEdit_Result->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_Result->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        show->addWidget(textEdit_Result);


        total->addLayout(show);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setStyleSheet(QLatin1String("border-top: 1px solid yellow; \n"
"background-color: green; "));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        total->addWidget(line_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_hex = new QPushButton(centralWidget);
        pushButton_hex->setObjectName(QStringLiteral("pushButton_hex"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_hex->sizePolicy().hasHeightForWidth());
        pushButton_hex->setSizePolicy(sizePolicy1);
        pushButton_hex->setMinimumSize(QSize(50, 15));
        pushButton_hex->setMaximumSize(QSize(50, 16777215));
        pushButton_hex->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_hex);

        pushButton_dec = new QPushButton(centralWidget);
        pushButton_dec->setObjectName(QStringLiteral("pushButton_dec"));
        sizePolicy1.setHeightForWidth(pushButton_dec->sizePolicy().hasHeightForWidth());
        pushButton_dec->setSizePolicy(sizePolicy1);
        pushButton_dec->setMinimumSize(QSize(50, 15));
        pushButton_dec->setMaximumSize(QSize(50, 16777215));
        pushButton_dec->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_dec);

        pushButton_otc = new QPushButton(centralWidget);
        pushButton_otc->setObjectName(QStringLiteral("pushButton_otc"));
        sizePolicy1.setHeightForWidth(pushButton_otc->sizePolicy().hasHeightForWidth());
        pushButton_otc->setSizePolicy(sizePolicy1);
        pushButton_otc->setMinimumSize(QSize(50, 15));
        pushButton_otc->setMaximumSize(QSize(50, 16777215));
        pushButton_otc->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_otc);

        pushButton_bin = new QPushButton(centralWidget);
        pushButton_bin->setObjectName(QStringLiteral("pushButton_bin"));
        sizePolicy1.setHeightForWidth(pushButton_bin->sizePolicy().hasHeightForWidth());
        pushButton_bin->setSizePolicy(sizePolicy1);
        pushButton_bin->setMinimumSize(QSize(50, 15));
        pushButton_bin->setMaximumSize(QSize(50, 16777215));
        pushButton_bin->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_bin);


        horizontalLayout_3->addLayout(verticalLayout_2);

        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        label_hex = new QLabel(centralWidget);
        label_hex->setObjectName(QStringLiteral("label_hex"));
        label_hex->setAcceptDrops(false);
        label_hex->setStyleSheet(QStringLiteral("background-color: rgb(78, 78, 78);"));
        label_hex->setScaledContents(true);
        label_hex->setWordWrap(false);

        verticalLayout->addWidget(label_hex);

        label_dec = new QLabel(centralWidget);
        label_dec->setObjectName(QStringLiteral("label_dec"));
        label_dec->setAcceptDrops(false);
        label_dec->setStyleSheet(QStringLiteral("background-color: rgb(78, 78, 78);"));
        label_dec->setScaledContents(true);
        label_dec->setWordWrap(false);

        verticalLayout->addWidget(label_dec);

        label_otc = new QLabel(centralWidget);
        label_otc->setObjectName(QStringLiteral("label_otc"));
        label_otc->setAcceptDrops(false);
        label_otc->setStyleSheet(QStringLiteral("background-color: rgb(78, 78, 78);"));
        label_otc->setScaledContents(true);
        label_otc->setWordWrap(false);

        verticalLayout->addWidget(label_otc);

        label_bin = new QLabel(centralWidget);
        label_bin->setObjectName(QStringLiteral("label_bin"));
        label_bin->setAcceptDrops(false);
        label_bin->setStyleSheet(QStringLiteral("background-color: rgb(78, 78, 78);"));
        label_bin->setScaledContents(true);
        label_bin->setWordWrap(false);

        verticalLayout->addWidget(label_bin);


        horizontalLayout_3->addLayout(verticalLayout);


        total->addLayout(horizontalLayout_3);

        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setStyleSheet(QLatin1String("border-top: 1px solid yellow; \n"
"background-color: green; "));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        total->addWidget(line_6);

        baseSetColumn = new QHBoxLayout();
        baseSetColumn->setSpacing(6);
        baseSetColumn->setObjectName(QStringLiteral("baseSetColumn"));
        baseSetColumn->setSizeConstraint(QLayout::SetFixedSize);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(radioButton_8);


        baseSetColumn->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        baseSetColumn->addItem(horizontalSpacer);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setStyleSheet(QStringLiteral("background-color: yellow;"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        baseSetColumn->addWidget(line_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(350, 16777215));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setMinimumSize(QSize(100, 0));
        radioButton_5->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_5);

        radioButton_7 = new QRadioButton(groupBox_2);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(radioButton_7);


        baseSetColumn->addWidget(groupBox_2);


        total->addLayout(baseSetColumn);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setStyleSheet(QLatin1String("border-top: 1px solid red; \n"
"background-color: green; "));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        total->addWidget(line_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_clearAll = new QPushButton(centralWidget);
        pushButton_clearAll->setObjectName(QStringLiteral("pushButton_clearAll"));
        pushButton_clearAll->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_clearAll, 1, 8, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_5, 1, 5, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_7, 1, 3, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_clearRam = new QPushButton(centralWidget);
        pushButton_clearRam->setObjectName(QStringLiteral("pushButton_clearRam"));
        pushButton_clearRam->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_clearRam, 1, 7, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_8, 1, 4, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_9, 1, 6, 1, 1);

        checkBox_shift = new QCheckBox(centralWidget);
        checkBox_shift->setObjectName(QStringLiteral("checkBox_shift"));
        checkBox_shift->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(checkBox_shift, 0, 2, 1, 1);

        checkBox_sqhs = new QCheckBox(centralWidget);
        checkBox_sqhs->setObjectName(QStringLiteral("checkBox_sqhs"));
        checkBox_sqhs->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(checkBox_sqhs, 0, 3, 1, 1);

        pushButton_clearwindow = new QPushButton(centralWidget);
        pushButton_clearwindow->setObjectName(QStringLiteral("pushButton_clearwindow"));
        pushButton_clearwindow->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #09470A, stop: 0.1 #09470A, stop: 0.5 #09470A, stop: 0.9 #09470A, stop: 1 #09470A);\n"
"    border-width: 4px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 15px;\n"
"    padding-left: 1px;\n"
"    padding-right: 1px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_clearwindow, 0, 8, 1, 1);

        pushButton_delete = new QPushButton(centralWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #09470A, stop: 0.1 #09470A, stop: 0.5 #09470A, stop: 0.9 #09470A, stop: 1 #09470A);\n"
"    border-width: 4px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 15px;\n"
"    padding-left: 1px;\n"
"    padding-right: 1px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        gridLayout_2->addWidget(pushButton_delete, 0, 7, 1, 1);

        label_null_1 = new QLabel(centralWidget);
        label_null_1->setObjectName(QStringLiteral("label_null_1"));
        label_null_1->setStyleSheet(QStringLiteral("background-color: rgb(34, 10, 10);"));

        gridLayout_2->addWidget(label_null_1, 0, 4, 1, 1);

        label_null_2 = new QLabel(centralWidget);
        label_null_2->setObjectName(QStringLiteral("label_null_2"));
        label_null_2->setStyleSheet(QStringLiteral("background-color: rgb(22, 6, 6);"));

        gridLayout_2->addWidget(label_null_2, 0, 5, 1, 1);

        label_null_3 = new QLabel(centralWidget);
        label_null_3->setObjectName(QStringLiteral("label_null_3"));
        label_null_3->setStyleSheet(QStringLiteral("background-color: rgb(22, 6, 6);"));

        gridLayout_2->addWidget(label_null_3, 0, 6, 1, 1);


        total->addLayout(gridLayout_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QLatin1String("border-top: 1px solid yellow; \n"
"background-color: green; "));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        total->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        total->addItem(verticalSpacer);

        baseFuncArea = new QGridLayout();
        baseFuncArea->setSpacing(6);
        baseFuncArea->setObjectName(QStringLiteral("baseFuncArea"));
        pushButton_E = new QPushButton(centralWidget);
        pushButton_E->setObjectName(QStringLiteral("pushButton_E"));

        baseFuncArea->addWidget(pushButton_E, 4, 4, 1, 1);

        pushButton_D = new QPushButton(centralWidget);
        pushButton_D->setObjectName(QStringLiteral("pushButton_D"));

        baseFuncArea->addWidget(pushButton_D, 4, 3, 1, 1);

        pushButton_C = new QPushButton(centralWidget);
        pushButton_C->setObjectName(QStringLiteral("pushButton_C"));

        baseFuncArea->addWidget(pushButton_C, 4, 2, 1, 1);

        pushButton_number_0 = new QPushButton(centralWidget);
        pushButton_number_0->setObjectName(QStringLiteral("pushButton_number_0"));

        baseFuncArea->addWidget(pushButton_number_0, 3, 0, 1, 1);

        pushButton_number_7 = new QPushButton(centralWidget);
        pushButton_number_7->setObjectName(QStringLiteral("pushButton_number_7"));

        baseFuncArea->addWidget(pushButton_number_7, 0, 0, 1, 1);

        pushButton_A = new QPushButton(centralWidget);
        pushButton_A->setObjectName(QStringLiteral("pushButton_A"));

        baseFuncArea->addWidget(pushButton_A, 4, 0, 1, 1);

        pushButton_B = new QPushButton(centralWidget);
        pushButton_B->setObjectName(QStringLiteral("pushButton_B"));

        baseFuncArea->addWidget(pushButton_B, 4, 1, 1, 1);

        pushButton_or = new QPushButton(centralWidget);
        pushButton_or->setObjectName(QStringLiteral("pushButton_or"));
        pushButton_or->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_or, 1, 5, 1, 1);

        pushButton_number_1 = new QPushButton(centralWidget);
        pushButton_number_1->setObjectName(QStringLiteral("pushButton_number_1"));

        baseFuncArea->addWidget(pushButton_number_1, 2, 0, 1, 1);

        pushButton_number_4 = new QPushButton(centralWidget);
        pushButton_number_4->setObjectName(QStringLiteral("pushButton_number_4"));

        baseFuncArea->addWidget(pushButton_number_4, 1, 0, 1, 1);

        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));

        baseFuncArea->addWidget(pushButton_div, 0, 3, 1, 1);

        pushButton_nor = new QPushButton(centralWidget);
        pushButton_nor->setObjectName(QStringLiteral("pushButton_nor"));
        pushButton_nor->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_nor, 2, 5, 1, 1);

        pushButton_piont = new QPushButton(centralWidget);
        pushButton_piont->setObjectName(QStringLiteral("pushButton_piont"));

        baseFuncArea->addWidget(pushButton_piont, 3, 2, 1, 1);

        pushButton_multi = new QPushButton(centralWidget);
        pushButton_multi->setObjectName(QStringLiteral("pushButton_multi"));

        baseFuncArea->addWidget(pushButton_multi, 1, 3, 1, 1);

        pushButton_number_6 = new QPushButton(centralWidget);
        pushButton_number_6->setObjectName(QStringLiteral("pushButton_number_6"));

        baseFuncArea->addWidget(pushButton_number_6, 1, 2, 1, 1);

        pushButton_integer = new QPushButton(centralWidget);
        pushButton_integer->setObjectName(QStringLiteral("pushButton_integer"));
        pushButton_integer->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_integer, 1, 4, 1, 1);

        pushButton_number_9 = new QPushButton(centralWidget);
        pushButton_number_9->setObjectName(QStringLiteral("pushButton_number_9"));

        baseFuncArea->addWidget(pushButton_number_9, 0, 2, 1, 1);

        pushButton_sub = new QPushButton(centralWidget);
        pushButton_sub->setObjectName(QStringLiteral("pushButton_sub"));

        baseFuncArea->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_leftmove = new QPushButton(centralWidget);
        pushButton_leftmove->setObjectName(QStringLiteral("pushButton_leftmove"));
        pushButton_leftmove->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_leftmove, 2, 4, 1, 1);

        pushButton_number_3 = new QPushButton(centralWidget);
        pushButton_number_3->setObjectName(QStringLiteral("pushButton_number_3"));

        baseFuncArea->addWidget(pushButton_number_3, 2, 2, 1, 1);

        pushButton_equ = new QPushButton(centralWidget);
        pushButton_equ->setObjectName(QStringLiteral("pushButton_equ"));
        pushButton_equ->setMinimumSize(QSize(0, 0));
        pushButton_equ->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #EB9214, stop: 0.1 #EB9214, stop: 0.5 #EB9214, stop: 0.9 #EB9214, stop: 1 #EB9214);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 25px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_equ, 3, 4, 1, 1);

        pushButton_yiro = new QPushButton(centralWidget);
        pushButton_yiro->setObjectName(QStringLiteral("pushButton_yiro"));
        pushButton_yiro->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_yiro, 3, 5, 1, 1);

        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        baseFuncArea->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton_leaveV = new QPushButton(centralWidget);
        pushButton_leaveV->setObjectName(QStringLiteral("pushButton_leaveV"));
        pushButton_leaveV->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_leaveV, 0, 4, 1, 1);

        pushButton_number_8 = new QPushButton(centralWidget);
        pushButton_number_8->setObjectName(QStringLiteral("pushButton_number_8"));

        baseFuncArea->addWidget(pushButton_number_8, 0, 1, 1, 1);

        pushButton_and = new QPushButton(centralWidget);
        pushButton_and->setObjectName(QStringLiteral("pushButton_and"));
        pushButton_and->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        baseFuncArea->addWidget(pushButton_and, 0, 5, 1, 1);

        pushButton_number_2 = new QPushButton(centralWidget);
        pushButton_number_2->setObjectName(QStringLiteral("pushButton_number_2"));

        baseFuncArea->addWidget(pushButton_number_2, 2, 1, 1, 1);

        pushButton_number_5 = new QPushButton(centralWidget);
        pushButton_number_5->setObjectName(QStringLiteral("pushButton_number_5"));

        baseFuncArea->addWidget(pushButton_number_5, 1, 1, 1, 1);

        pushButton_symbol = new QPushButton(centralWidget);
        pushButton_symbol->setObjectName(QStringLiteral("pushButton_symbol"));

        baseFuncArea->addWidget(pushButton_symbol, 3, 1, 1, 1);

        pushButton_F = new QPushButton(centralWidget);
        pushButton_F->setObjectName(QStringLiteral("pushButton_F"));

        baseFuncArea->addWidget(pushButton_F, 4, 5, 1, 1);


        total->addLayout(baseFuncArea);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        total->addItem(verticalSpacer_2);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setStyleSheet(QLatin1String("border-top: 1px solid yellow; \n"
"background-color: green; "));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        total->addWidget(line_2);

        advFuncArea = new QGridLayout();
        advFuncArea->setSpacing(6);
        advFuncArea->setObjectName(QStringLiteral("advFuncArea"));
        pushButton_DMS = new QPushButton(centralWidget);
        pushButton_DMS->setObjectName(QStringLiteral("pushButton_DMS"));
        pushButton_DMS->setMinimumSize(QSize(0, 30));
        pushButton_DMS->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"background-color: rgb(100, 100, 100);\n"
"border-style: inset;\n"
"}"));

        advFuncArea->addWidget(pushButton_DMS, 1, 2, 1, 1);

        pushButton_ER = new QPushButton(centralWidget);
        pushButton_ER->setObjectName(QStringLiteral("pushButton_ER"));
        pushButton_ER->setMinimumSize(QSize(0, 30));
        pushButton_ER->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"background-color: rgb(100, 100, 100);\n"
"border-style: inset;\n"
"}"));

        advFuncArea->addWidget(pushButton_ER, 1, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton, 3, 4, 1, 1);

        pushButton_35 = new QPushButton(centralWidget);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setMinimumSize(QSize(0, 30));
        pushButton_35->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_35, 1, 4, 1, 1);

        pushButton_TAN = new QPushButton(centralWidget);
        pushButton_TAN->setObjectName(QStringLiteral("pushButton_TAN"));
        pushButton_TAN->setMinimumSize(QSize(0, 30));
        pushButton_TAN->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"background-color: rgb(100, 100, 100);\n"
"border-style: inset;\n"
"}"));

        advFuncArea->addWidget(pushButton_TAN, 2, 4, 1, 1);

        pushButton_PI = new QPushButton(centralWidget);
        pushButton_PI->setObjectName(QStringLiteral("pushButton_PI"));
        pushButton_PI->setMinimumSize(QSize(0, 30));
        pushButton_PI->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"background-color: rgb(100, 100, 100);\n"
"border-style: inset;\n"
"}"));

        advFuncArea->addWidget(pushButton_PI, 1, 0, 1, 1);

        pushButton_37 = new QPushButton(centralWidget);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setMinimumSize(QSize(0, 30));
        pushButton_37->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_37, 1, 3, 1, 1);

        pushButton_41 = new QPushButton(centralWidget);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        pushButton_41->setMinimumSize(QSize(0, 30));
        pushButton_41->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_41, 2, 0, 1, 1);

        pushButton_42 = new QPushButton(centralWidget);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        pushButton_42->setMinimumSize(QSize(0, 30));
        pushButton_42->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_42, 2, 1, 1, 1);

        pushButton_SIN = new QPushButton(centralWidget);
        pushButton_SIN->setObjectName(QStringLiteral("pushButton_SIN"));
        pushButton_SIN->setMinimumSize(QSize(0, 30));
        pushButton_SIN->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"background-color: rgb(100, 100, 100);\n"
"border-style: inset;\n"
"}"));

        advFuncArea->addWidget(pushButton_SIN, 2, 2, 1, 1);

        pushButton_COS = new QPushButton(centralWidget);
        pushButton_COS->setObjectName(QStringLiteral("pushButton_COS"));
        pushButton_COS->setMinimumSize(QSize(0, 30));
        pushButton_COS->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"background-color: rgb(100, 100, 100);\n"
"border-style: inset;\n"
"}"));

        advFuncArea->addWidget(pushButton_COS, 2, 3, 1, 1);

        pushButton_45 = new QPushButton(centralWidget);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        pushButton_45->setMinimumSize(QSize(0, 30));
        pushButton_45->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_45, 3, 0, 1, 1);

        pushButton_46 = new QPushButton(centralWidget);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        pushButton_46->setMinimumSize(QSize(0, 30));
        pushButton_46->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_46, 3, 1, 1, 1);

        pushButton_47 = new QPushButton(centralWidget);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        pushButton_47->setMinimumSize(QSize(0, 30));
        pushButton_47->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_47, 3, 2, 1, 1);

        pushButton_48 = new QPushButton(centralWidget);
        pushButton_48->setObjectName(QStringLiteral("pushButton_48"));
        pushButton_48->setMinimumSize(QSize(0, 30));
        pushButton_48->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2D51DA, stop: 0.1 #2D51DA, stop: 0.5 #2D51DA, stop: 0.9 #2D51DA, stop: 1 #2D51DA);\n"
"    border-width: 2px;\n"
"    border-color: #1e1e50;\n"
"    border-style: solid;\n"
"    border-radius: 8;\n"
"    padding: 1px;\n"
"    font-size: 16px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));

        advFuncArea->addWidget(pushButton_48, 3, 3, 1, 1);


        total->addLayout(advFuncArea);


        gridLayout->addLayout(total, 1, 0, 1, 1);

        calMain->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(calMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        calMain->setStatusBar(statusBar);

        retranslateUi(calMain);
        QObject::connect(pushButton_number_7, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_delete, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_clearwindow, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_number_8, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_9, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_4, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_5, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_6, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_1, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_2, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_3, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_number_0, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_A, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_B, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_C, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_D, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_E, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(pushButton_F, SIGNAL(clicked()), calMain, SLOT(slotDigtalNumber()));
        QObject::connect(radioButton, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(radioButton_5, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(radioButton_4, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(radioButton_8, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(radioButton_7, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_add, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_sub, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_multi, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_div, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_piont, SIGNAL(clicked()), calMain, SLOT(slotFuncButton()));
        QObject::connect(pushButton_equ, SIGNAL(clicked()), calMain, SLOT(slotOperationsEqu()));
        QObject::connect(pushButton_leftmove, SIGNAL(clicked()), calMain, SLOT(slotSigalOperation()));
        QObject::connect(pushButton_nor, SIGNAL(clicked()), calMain, SLOT(slotSigalOperation()));

        QMetaObject::connectSlotsByName(calMain);
    } // setupUi

    void retranslateUi(QMainWindow *calMain)
    {
        calMain->setWindowTitle(QApplication::translate("calMain", "Calculate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        calMain->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        calMain->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        textEdit_Result->setHtml(QApplication::translate("calMain", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_hex->setText(QApplication::translate("calMain", "HEX", Q_NULLPTR));
        pushButton_dec->setText(QApplication::translate("calMain", "DEC", Q_NULLPTR));
        pushButton_otc->setText(QApplication::translate("calMain", "OTC", Q_NULLPTR));
        pushButton_bin->setText(QApplication::translate("calMain", "BIN", Q_NULLPTR));
        label_hex->setText(QString());
        label_dec->setText(QString());
        label_otc->setText(QString());
        label_bin->setText(QString());
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("calMain", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("calMain", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("calMain", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("calMain", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        radioButton_5->setText(QApplication::translate("calMain", "\350\247\222\345\272\246\345\210\266", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("calMain", "\345\274\247\345\272\246\345\210\266", Q_NULLPTR));
        pushButton_clearAll->setText(QApplication::translate("calMain", "\345\205\250\346\270\205", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("calMain", "\347\264\257\345\255\230", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("calMain", "\345\255\230\345\202\250", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("calMain", "\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_clearRam->setText(QApplication::translate("calMain", "\346\270\205\345\255\230", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("calMain", "\345\217\226\345\255\230", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("calMain", "\347\247\257\345\255\230", Q_NULLPTR));
        checkBox_shift->setText(QApplication::translate("calMain", "\344\270\212\346\241\243\345\212\237\350\203\275", Q_NULLPTR));
        checkBox_sqhs->setText(QApplication::translate("calMain", "\345\217\214\346\233\262\345\207\275\346\225\260", Q_NULLPTR));
        pushButton_clearwindow->setText(QApplication::translate("calMain", "\346\270\205\345\261\217", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("calMain", "\351\200\200\346\240\274", Q_NULLPTR));
        label_null_1->setText(QString());
        label_null_2->setText(QString());
        label_null_3->setText(QString());
        pushButton_E->setText(QApplication::translate("calMain", "E", Q_NULLPTR));
        pushButton_D->setText(QApplication::translate("calMain", "D", Q_NULLPTR));
        pushButton_C->setText(QApplication::translate("calMain", "C", Q_NULLPTR));
        pushButton_number_0->setText(QApplication::translate("calMain", "0", Q_NULLPTR));
        pushButton_number_7->setText(QApplication::translate("calMain", "7", Q_NULLPTR));
        pushButton_A->setText(QApplication::translate("calMain", "A", Q_NULLPTR));
        pushButton_B->setText(QApplication::translate("calMain", "B", Q_NULLPTR));
        pushButton_or->setText(QApplication::translate("calMain", "\346\210\226|", Q_NULLPTR));
        pushButton_number_1->setText(QApplication::translate("calMain", "1", Q_NULLPTR));
        pushButton_number_4->setText(QApplication::translate("calMain", "4", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("calMain", "\303\267", Q_NULLPTR));
        pushButton_nor->setText(QApplication::translate("calMain", "\351\235\236\357\275\236", Q_NULLPTR));
        pushButton_piont->setText(QApplication::translate("calMain", ".", Q_NULLPTR));
        pushButton_multi->setText(QApplication::translate("calMain", "\303\227", Q_NULLPTR));
        pushButton_number_6->setText(QApplication::translate("calMain", "6", Q_NULLPTR));
        pushButton_integer->setText(QApplication::translate("calMain", "\345\217\226\346\225\264/", Q_NULLPTR));
        pushButton_number_9->setText(QApplication::translate("calMain", "9", Q_NULLPTR));
        pushButton_sub->setText(QApplication::translate("calMain", "-", Q_NULLPTR));
        pushButton_leftmove->setText(QApplication::translate("calMain", "\345\267\246\347\247\273", Q_NULLPTR));
        pushButton_number_3->setText(QApplication::translate("calMain", "3", Q_NULLPTR));
        pushButton_equ->setText(QApplication::translate("calMain", "=", Q_NULLPTR));
        pushButton_yiro->setText(QApplication::translate("calMain", "\345\274\202\346\210\226^", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("calMain", "+", Q_NULLPTR));
        pushButton_leaveV->setText(QApplication::translate("calMain", "\345\217\226\344\275\231%", Q_NULLPTR));
        pushButton_number_8->setText(QApplication::translate("calMain", "8", Q_NULLPTR));
        pushButton_and->setText(QApplication::translate("calMain", "\344\270\216&", Q_NULLPTR));
        pushButton_number_2->setText(QApplication::translate("calMain", "2", Q_NULLPTR));
        pushButton_number_5->setText(QApplication::translate("calMain", "5", Q_NULLPTR));
        pushButton_symbol->setText(QApplication::translate("calMain", "+/-", Q_NULLPTR));
        pushButton_F->setText(QApplication::translate("calMain", "F", Q_NULLPTR));
        pushButton_DMS->setText(QApplication::translate("calMain", "d.ms", Q_NULLPTR));
        pushButton_ER->setText(QApplication::translate("calMain", "E", Q_NULLPTR));
        pushButton->setText(QApplication::translate("calMain", "x^y", Q_NULLPTR));
        pushButton_35->setText(QApplication::translate("calMain", ")", Q_NULLPTR));
        pushButton_TAN->setText(QApplication::translate("calMain", "tan", Q_NULLPTR));
        pushButton_PI->setText(QApplication::translate("calMain", "PI", Q_NULLPTR));
        pushButton_37->setText(QApplication::translate("calMain", "(", Q_NULLPTR));
        pushButton_41->setText(QApplication::translate("calMain", "ln", Q_NULLPTR));
        pushButton_42->setText(QApplication::translate("calMain", "log", Q_NULLPTR));
        pushButton_SIN->setText(QApplication::translate("calMain", "sin", Q_NULLPTR));
        pushButton_COS->setText(QApplication::translate("calMain", "cos", Q_NULLPTR));
        pushButton_45->setText(QApplication::translate("calMain", "n!", Q_NULLPTR));
        pushButton_46->setText(QApplication::translate("calMain", "1/x", Q_NULLPTR));
        pushButton_47->setText(QApplication::translate("calMain", "x^2", Q_NULLPTR));
        pushButton_48->setText(QApplication::translate("calMain", "x^3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calMain: public Ui_calMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALMAIN_H
