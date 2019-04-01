﻿
#include "ERect.h"
#include "ElementRect.h"


ERect::ERect()
{

}


/**
 * @brief ERect::initialize
 * @details 初始化
 */
void ERect::initialize()
{

}


/**
 * @brief ERect::getElementName
 * @details 获取元素名称
 * @return 元素名称
 */
QString ERect::getElementName()
{
    return trUtf8("矩形");
}

/**
 * @brief ERect::getElementID
 * @details 获取元素ID
 * @return 元素ID
 */
int ERect::getElementID()
{
    return RectItemType;
}


/**
 * @brief ERect::getElementIDString
 * @details 获取元素ID String
 * @return 元素ID String
 */
QString ERect::getElementIDString()
{
    return "Rect";
}

/**
 * @brief createElement
 * @details 创建元素
 * @return 元素对象
 */
Element* ERect::createElement()
{
    return new ElementRect();
}
