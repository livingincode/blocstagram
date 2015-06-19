//
//  DataSource.h
//  Blocstagram
//
//  Created by Dean Laurea on 6/16/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item;
- (void) moveMediaToTop:(Media *)item;

@end
