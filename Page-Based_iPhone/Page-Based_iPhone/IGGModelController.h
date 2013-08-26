//
//  IGGModelController.h
//  Page-Based_iPhone
//
//  Created by Iggy Mwangi on 8/25/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IGGDataViewController;

@interface IGGModelController : NSObject <UIPageViewControllerDataSource>

- (IGGDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(IGGDataViewController *)viewController;

@end
