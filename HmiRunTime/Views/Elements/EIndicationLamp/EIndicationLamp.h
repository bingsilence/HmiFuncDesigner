﻿#ifndef EINDICATIONLAMP_H
#define EINDICATIONLAMP_H

#include <QObject>
#include "Public/IDrawGraphPage.h"


class EIndicationLamp : public QObject, IDrawGraphPage
{
public:
    EIndicationLamp();
    static IDrawGraphPage* creatObjFunc()
    {
        return new EIndicationLamp;
    }

    // 初始化
    void initialize() Q_DECL_OVERRIDE;
    // 获取元素名称
    QString getElementName() Q_DECL_OVERRIDE;
    // 获取元素ID
    int getElementID() Q_DECL_OVERRIDE;
    // 获取元素ID String
    QString getElementIDString() Q_DECL_OVERRIDE;
    // 创建元素
    Element* createElement(QWidget *owner=0) Q_DECL_OVERRIDE;

};

#endif // EINDICATIONLAMP_H
