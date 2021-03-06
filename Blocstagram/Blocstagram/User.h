//
//  User.h
//  Blocstagram
//
//  Created by Dean Laurea on 6/16/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface User : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;

- (instancetype) initWithDictionary:(NSDictionary *)userDictionary;


@end
