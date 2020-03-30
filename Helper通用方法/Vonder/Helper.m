//
//  Helper.m
//  Helper通用方法
//
//  Created by ZSW on 2020/3/19.
//  Copyright © 2020 ZSW. All rights reserved.
//

#import "Helper.h"

@implementation Helper

- (UIViewController *)topViewController:(UIView *)view {
    id responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

@end
