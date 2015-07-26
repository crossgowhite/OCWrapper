//
//  BaseClass.h
//  ocwrap
//
//  Created by damao on 15/7/23.
//  Copyright (c) 2015年 chbai. All rights reserved.
//

#ifndef __ocwrap__BaseClass__
#define __ocwrap__BaseClass__

#include <stdio.h>

class BaseClass
{
public:
    BaseClass();
    BaseClass(int value = 0);
    //non virtual, nerver derived
    ~BaseClass();
public:
    const int getValue() const;
    void setValue(int value);
    
private:
    int m_value;
};

#endif /* defined(__ocwrap__BaseClass__) */
