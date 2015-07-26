//
//  WrapClass.m
//  ocwrap
//
//  Created by damao on 15/7/23.
//  Copyright (c) 2015年 chbai. All rights reserved.
//

#import "WrapClass.h"
#import "BaseClass.h"


//import baseclass here
//in order to reduce head depend scope
@interface WrapClass () {
    BaseClass * m_baseptr;
}
@end

@implementation WrapClass

- (id) init{
    return [self initWithValue: 0];
}

- (id) initWithValue: (int ) value{
    self = [super init];
    if(self){
        m_baseptr = new BaseClass(value);
        if(!m_baseptr)
            self = nil;
    }
    return self;
}


- (void)dealloc{
    if(m_baseptr){
        delete m_baseptr;
        m_baseptr = NULL;
    }
    //if we use ARC no need to call
    //[super dealloc]
}


- (int) getValue{
    if(m_baseptr)
        return m_baseptr->getValue();
    return -1;
}

@end
