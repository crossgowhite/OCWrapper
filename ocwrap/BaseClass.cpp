//
//  BaseClass.cpp
//  ocwrap
//
//  Created by damao on 15/7/23.
//  Copyright (c) 2015年 chbai. All rights reserved.
//

#include "BaseClass.h"


BaseClass::BaseClass():
m_value(0)
{
    
}


BaseClass::BaseClass(int value):
m_value(value)
{
    
}

BaseClass::~BaseClass()
{
    
}

const int BaseClass::getValue() const
{
    return m_value;
}


void BaseClass::setValue(int value)
{
    m_value = value;
}