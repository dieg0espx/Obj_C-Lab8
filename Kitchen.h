//
//  Kitchen.h
//  PizzaRestaurant
//
//  Created by Steven Masuch on 2014-07-19.
//  Copyright (c) 2014 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Kitchen : NSObject
@property (nonatomic) enum size;
@property (nonatomic) NSArray* toppings;

//- (Pizza *)makePizzaWithSize:(PizzaSize)size toppings:(NSArray *)toppings;
- (instancetype)initWithmakePizzaWithSize:(NSString*)size toppings:(NSArray *)toppings;
@end
