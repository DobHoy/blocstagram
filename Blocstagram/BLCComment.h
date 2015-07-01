//
//  BLCComment.h
//  Blocstagram
//
//  Created by Srikanth Narayanamohan on 24/04/2015.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) BLCUser *from;

 - (instancetype) initWithDictionary:(NSDictionary *)commentDictionary;


@end
