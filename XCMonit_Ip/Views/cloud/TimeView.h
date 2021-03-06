//
//  TimeView.h
//  TestInfo
//
//  Created by 夏钟林 on 15/5/25.
//  Copyright (c) 2015年 xiazl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimeView : UIView

@property (nonatomic,assign) CGFloat fValue;

@property (nonatomic,assign) int nWidth;

@property (nonatomic,strong) NSDate *dateInfo;

@property (nonatomic,strong) NSMutableArray *aryDate;

@property (nonatomic,strong) NSString *strTime;
@property (nonatomic,strong) NSString *strDate;

-(long)currentTime;

-(void)setTimeInfo:(long)lTime;

-(void)startTimeCome;

-(id)initWithFrame:(CGRect)frame time:(NSString *)strTime;

-(void)settingTime:(NSString *)strTime;

-(void)drawDate:(CGContextRef)context;

-(void)setDragTime:(long)longTime;

@end

@interface CloudTime : NSObject

@property (nonatomic,assign) NSInteger iStart;
@property (nonatomic,assign) NSInteger iEnd;

@end
