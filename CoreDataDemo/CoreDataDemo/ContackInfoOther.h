//
//  ContackInfoOther.h
//  CoreDataDemo
//
//  Created by 宋志明 on 15-3-16.
//  Copyright (c) 2015年 songzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ContackInfo;

@interface ContackInfoOther : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * telephone;
@property (nonatomic, retain) ContackInfo *info;

@end
