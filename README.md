# CHStatusBarHUD
侧滑菜单 (抽屉效果)

##初始化控件
```objc
   ViewController *viewVC = [[ViewController alloc] init];
    SecondViewController *secondCV = [[SecondViewController alloc] init];
    CHSideslipViewController *sides = [CHSideslipViewController sideslipViewControllerWithLeftViewController:secondCV mainViewController:viewVC];
    sides.shadowEnabled = YES;
    sides.delegate = self;
    self.window.rootViewController = sides;
```

##代理监听主页面侧滑是frame的变化
```objc
   - (void)sideslipMainViewDidScroll:(CHSideslipViewController *)sideslipViewController mainViewFrameValue:(NSValue *)mainViewFrameValue
{
    NSLog(@"mainViewFrameValue : %@", mainViewFrameValue);
}
```
