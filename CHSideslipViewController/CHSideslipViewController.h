//
//  CHSideslipViewController.h
//  侧滑菜单（抽屉效果）
//
//  Created by 陈汉威 on 16/9/5.
//  Copyright (c) 2016年 chenHanWei. All rights reserved.
//


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CHSideslipAnimationType) {
    /**
     侧滑时缩放效果
     */
    CHSideslipAnimationTypeZoom,
    /**
     侧滑时扁平效果
     */
    CHSideslipAnimationTypePlain
};

@class CHSideslipViewController;
@protocol CHSideslipViewControllerDelegate <NSObject>

// 监听mainViewController滑动的frame值
@optional
- (void)sideslipMainViewDidScroll:(CHSideslipViewController *)sideslipViewController mainViewFrameValue:(NSValue *)mainViewFrameValue;


@end

@interface CHSideslipViewController : UIViewController

@property (nonatomic, strong) UIViewController *leftViewController;
@property (nonatomic, strong) UIViewController *mainViewController;

@property (nonatomic, weak) id<CHSideslipViewControllerDelegate>delegate;

/**
 侧滑时的动画效果，缩放或扁平，默认缩放
 */
@property (nonatomic, assign) CHSideslipAnimationType animationType;

/**
 可滑动的最大比例，默认0.78
 */
@property (nonatomic, assign) CGFloat animationSlideScale;

/**
 缩放的最小比例，默认0.78
 */
@property (nonatomic, assign) CGFloat animationZoomScale;

/**
 添加阴影，默认NO
 */
@property (nonatomic, assign) BOOL shadowEnabled;

/**
 便利构造器：传入左控制器和主控制器来初始化侧滑菜单，主控制器可以是UINavigationController或UITabBarController
 */
+ (instancetype)sideslipViewControllerWithLeftViewController:(UIViewController *)leftViewController mainViewController:(UIViewController *)mainViewController;

/**
 当想在其它类使用CHSideslipViewController的实例时，可用这个方法获得
 */
+ (instancetype)shareInstance;

/**
 使主控制器滑到屏幕最右侧，比如当你点击导航控制器左侧按钮，想实现此效果时可以调用
 */
- (void)rightSharpPan;

@end


