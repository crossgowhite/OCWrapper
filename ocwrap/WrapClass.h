//
//  WrapClass.h
//  ocwrap
//
//  Created by damao on 15/7/23.
//  Copyright (c) 2015年 chbai. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 
 Class Name: WrapClass
 Target: Simple class indicate wrap cplusplus class function
 **/

@interface WrapClass : NSObject


- (id) init;
- (id) initWithValue: (int ) value;
- (void)dealloc;
- (int) getValue;
@end
