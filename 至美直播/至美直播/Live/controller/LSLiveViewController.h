//
//  LSLiveViewController.h
//  至美直播
//
//  Created by 刘松 on 16/8/6.
//  Copyright © 2016年 liusong. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LSUserModel.h"
@interface LSLiveViewController : UITableViewController

@property (nonatomic,assign) int currentIndex;

@property(nonatomic,strong) NSArray *datas;
@end
