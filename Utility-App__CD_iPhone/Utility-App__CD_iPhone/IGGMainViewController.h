//
//  IGGMainViewController.h
//  Utility-App__CD_iPhone
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "IGGFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface IGGMainViewController : UIViewController <IGGFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
