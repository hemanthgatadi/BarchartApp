//
//  BarChartAppAppDelegate.h
//  BarChartApp
//
//  Created by Hemanth G on 25/07/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BarChartAppViewController;

@interface BarChartAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    BarChartAppViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet BarChartAppViewController *viewController;

@end

