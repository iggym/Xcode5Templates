//
//  IGGFlipsideViewController.h
//  Utility-App__CD_Universal
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IGGFlipsideViewController;

@protocol IGGFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(IGGFlipsideViewController *)controller;
@end

@interface IGGFlipsideViewController : UIViewController

@property (weak, nonatomic) id <IGGFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
