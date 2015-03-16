//
//  AppDelegate.h
//  CoreDataDemo
//
//  Created by 宋志明 on 15-3-16.
//  Copyright (c) 2015年 songzm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


//操作实际内容（操作持久层）作用：插入数据，查询数据，删除数据
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
//数据库所有表格或数据结构，包含各实体的定义信息；；作用：添加实体的属性，建立属性之间的关系；；操作方法：视图编辑器，或代码
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
//相当于数据库的连接器  ;;;作用：设置数据存储的名字，位置，存储方式，和存储时机
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

//保存数据到持久层(数据库)
- (void)saveContext;
//应用程序沙箱下的Documents目录路径
- (NSURL *)applicationDocumentsDirectory;


@end

