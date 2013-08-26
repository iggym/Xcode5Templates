//
//  IGGMainViewController.m
//  Utility-App__CD_iPhone
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "IGGMainViewController.h"

@interface IGGMainViewController ()

@end

@implementation IGGMainViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Flipside View

- (void)flipsideViewControllerDidFinish:(IGGFlipsideViewController *)controller
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"showAlternate"]) {
        [[segue destinationViewController] setDelegate:self];
    }
}

@end
