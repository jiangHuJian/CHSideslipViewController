//
//  ViewController.m
//  CHSideslipViewControllerDemo
//
//  Created by MacBook_BJ on 16/10/26.
//  Copyright © 2016年 陈汉威. All rights reserved.
//

#import "ViewController.h"
#import "CHSideslipViewController.h"

@interface ViewController ()<CHSideslipViewControllerDelegate>

@property (strong, nonatomic) CHSideslipViewController *sideslip;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor whiteColor];
    
    CHSideslipViewController *sideslip = [[CHSideslipViewController alloc] init];
    sideslip.delegate = self;
    _sideslip = sideslip;
    
}

- (void)sideslipMainViewDidScroll:(CHSideslipViewController *)sideslipViewController mainViewFrameValue:(NSValue *)mainViewFrameValue
{
    NSLog(@"mainViewFrameValue : %@", mainViewFrameValue);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
