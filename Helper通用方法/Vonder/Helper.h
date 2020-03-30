//
//  Helper.h
//  Helper通用方法
//
//  Created by ZSW on 2020/3/19.
//  Copyright © 2020 ZSW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Helper : NSObject

/* 通过一个view查找到它所在的控制器:UIResponder事件的响应者 */
- (UIViewController *)topViewController:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
