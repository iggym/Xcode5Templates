//
//  IGGMasterViewController.h
//  MasterDetail_NoCD_iPad
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IGGDetailViewController;

@interface IGGMasterViewController : UITableViewController

@property (strong, nonatomic) IGGDetailViewController *detailViewController;

@end
