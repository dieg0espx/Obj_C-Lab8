//
//  Kitchen.m
//  PizzaRestaurant
//
//  Created by Steven Masuch on 2014-07-19.
//  Copyright (c) 2014 Lighthouse Labs. All rights reserved.
//

#import "Kitchen.h"

@implementation Kitchen

- (instancetype)initWithmakePizzaWithSize:(NSString *)size toppings:(NSArray *)toppings{
    self = [super init];
    if (self){
        size = size;
        _toppings = toppings;
    }
    return self;
}

@end
