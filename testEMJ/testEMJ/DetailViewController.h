//
//  DetailViewController.h
//  testEMJ
//
//  Created by 张喜 on 16/3/13.
//  Copyright © 2016年 张喜. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

