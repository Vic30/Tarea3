//
//  AppDelegate.h
//  Mi Segunda App
//
//  Created by Victor Lopez on 9/16/17.
//  Copyright © 2017 Victor Lopez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

