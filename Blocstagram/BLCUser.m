//
//  BLCUser.m
//  Blocstagram
//
//  Created by Srikanth Narayanamohan on 24/04/2015.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import "BLCUser.h"

@implementation BLCUser

- (instancetype) initWithDictionary:(NSDictionary *)userDictionary {
    self = [super init];
    
    if (self) {
        self.idNumber = userDictionary[@"id"];
        self.userName = userDictionary[@"username"];
        self.fullName = userDictionary[@"full_name"];
        
        NSString *profileURLString = userDictionary[@"profile_picture"];
        NSURL *profileUrl = [NSURL URLWithString:profileURLString];
        
        if (profileURLString) {
            
            self.profilePictureURL = profileUrl;
            
        }
    }
    return self;
}

@end
