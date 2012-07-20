//
//  AppDelegate.h
//  networkmonitor
//
//  Created by Feby Varghese on 7/20/12.
//  Copyright (c) 2012 febycv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"
#import "ViewController.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

-(NSString *)stringFromStatus:(NetworkStatus) status;

@end
