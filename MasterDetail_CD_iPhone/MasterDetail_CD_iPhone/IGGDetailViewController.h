//
//  IGGDetailViewController.h
//  MasterDetail_CD_iPhone
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IGGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
