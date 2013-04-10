//
//  Mar28AppDelegate.h
//  Mar28
//
//  Created by Joe Gabela on 4/1/13.
//  Copyright (c) 2013 Joe Gabela. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface Mar28AppDelegate: UIResponder <UIApplicationDelegate>  {
	View *view;
	UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end
