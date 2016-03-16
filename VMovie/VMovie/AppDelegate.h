//
//  AppDelegate.h
//  VMovie
//
//  Created by wyz on 16/3/12.
//  Copyright © 2016年 wyz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

/**调用AppDelegate单例记录播放状态是否锁屏 */
@property (nonatomic, assign) BOOL isLockScreen;

@end

