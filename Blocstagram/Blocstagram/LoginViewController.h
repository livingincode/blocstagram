//
//  LoginViewController.h
//  Blocstagram
//
//  Created by Dean Laurea on 7/6/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

extern NSString *const LoginViewControllerDidGetAccessTokenNotification;

- (void) goBack:(UIBarButtonItem *) sender;

@end
