//
//  RecipeViewController.h
//  SmallCircleCircle
//
//  Created by 王 瀚宇 on 2013/11/19.
//  Copyright (c) 2013年 王 瀚宇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UITableViewController

@property  (nonatomic,strong)NSDictionary* activityDetail;
@property  (nonatomic,strong)NSArray* buyList;
@property  (nonatomic,strong)NSDictionary* buyEntry;

@end