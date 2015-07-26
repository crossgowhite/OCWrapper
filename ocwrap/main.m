//
//  main.m
//  ocwrap
//
//  Created by damao on 15/7/23.
//  Copyright (c) 2015年 chbai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WrapClass.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        WrapClass * A = [[WrapClass alloc] initWithValue: 10];
        WrapClass * B = [[WrapClass alloc] init];
        NSLog(@"%d %d",[A getValue],[B getValue]);
    }
    return 0;
}
