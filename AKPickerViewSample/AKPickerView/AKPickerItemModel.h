//
//  AKPickerItemModel.h
//  AKPickerViewSample
//
//  Created by Injoy on 2018/2/1.
//  Copyright © 2018年 Akkyie Y. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AKPickerItemModel : NSObject

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIFont *highlightedFont;

@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, strong) UIColor *highlightedColor;

@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, assign) CGFloat radius;

@end
