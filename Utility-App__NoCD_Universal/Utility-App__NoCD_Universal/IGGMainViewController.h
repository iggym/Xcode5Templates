//
//  IGGMainViewController.h
//  Utility-App__NoCD_Universal
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "IGGFlipsideViewController.h"

@interface IGGMainViewController : UIViewController <IGGFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
