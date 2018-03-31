//
//  AppDelegate+JPUsh.h
//  blockchainfinacing
//
//  Created by JZTech-weichaocai on 2018/3/31.
//

#import "AppDelegate.h"
#import "JPUSHService.h"
// iOS10注册APNs所需头文件
#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

@interface AppDelegate (JPUsh)<JPUSHRegisterDelegate>

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions;

@end
