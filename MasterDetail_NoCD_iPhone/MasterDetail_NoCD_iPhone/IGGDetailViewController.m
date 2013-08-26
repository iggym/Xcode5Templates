//
//  IGGDetailViewController.m
//  MasterDetail_NoCD_iPhone
//
//  Created by Iggy Mwangi on 8/24/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "IGGDetailViewController.h"

@interface IGGDetailViewController ()
- (void)configureView;
@end

@implementation IGGDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [self.detailItem description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
