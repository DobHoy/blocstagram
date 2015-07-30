//
//  BLCMediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Srikanth Narayanamohan on 28/07/2015.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;



@interface BLCMediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;


- (instancetype) initWithMedia:(BLCMedia *) media;

- (void) centerScrollView; 


@end
