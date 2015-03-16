//
//  ContackInfo.h
//  CoreDataDemo
//
//  Created by 宋志明 on 15-3-16.
//  Copyright (c) 2015年 songzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ContackInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * age;
@property (nonatomic, retain) NSString * birthday;
@property (nonatomic, retain) NSManagedObject *details;

@end
