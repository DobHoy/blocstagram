//
//  BLCMediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by Srikanth Narayanamohan on 05/08/2015.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCMediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end