//
//  UPFuturesTradeRefreshGifHeader.m
//  UPFuturesTradeRefreshExample
//
//  Created by UPFuturesTrade Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "UPFuturesTradeRefreshGifHeader.h"

@interface UPFuturesTradeRefreshGifHeader()
{
    __unsafe_unretained UIImageView *_gifView;
}
/** 所有状态对应的动画图片 */
@property (strong, nonatomic) NSMutableDictionary *stateImages;
/** 所有状态对应的动画时间 */
@property (strong, nonatomic) NSMutableDictionary *stateDurations;
@end

@implementation UPFuturesTradeRefreshGifHeader
#pragma mark - 懒加载
- (UIImageView *)gifView
{
    if (!_gifView) { 
        UIImageView *gifView = [[UIImageView alloc] init]; 
        [self addSubview:_gifView = gifView]; 
    } 
    return _gifView; 
}

- (NSMutableDictionary *)stateImages 
{ 
    if (!_stateImages) { 
        self.stateImages = [NSMutableDictionary dictionary]; 
    } 
    return _stateImages; 
}

- (NSMutableDictionary *)stateDurations 
{ 
    if (!_stateDurations) { 
        self.stateDurations = [NSMutableDictionary dictionary]; 
    } 
    return _stateDurations; 
}

#pragma mark - 公共方法
- (void)setImages:(NSArray *)images duration:(NSTimeInterval)duration forState:(UPFuturesTradeRefreshState)state 
{ 
    if (images == nil) return; 
    
    self.stateImages[@(state)] = images; 
    self.stateDurations[@(state)] = @(duration); 
    
    /* 根据图片设置控件的高度 */ 
    UIImage *image = [images firstObject]; 
    if (image.size.height > self.UPFuturesTrade_h) { 
        self.UPFuturesTrade_h = image.size.height; 
    } 
}

- (void)setImages:(NSArray *)images forState:(UPFuturesTradeRefreshState)state 
{ 
    [self setImages:images duration:images.count * 0.1 forState:state]; 
}

#pragma mark - 实现父类的方法
- (void)prepare
{
    [super prepare];
    
    // 初始化间距
    self.labelLeftInset = 20;
}

- (void)setPullingPercent:(CGFloat)pullingPercent
{
    [super setPullingPercent:pullingPercent];
    NSArray *images = self.stateImages[@(UPFuturesTradeRefreshStateIdle)];
    if (self.state != UPFuturesTradeRefreshStateIdle || images.count == 0) return;
    // 停止动画
    [self.gifView stopAnimating];
    // 设置当前需要显示的图片
    NSUInteger index =  images.count * pullingPercent;
    if (index >= images.count) index = images.count - 1;
    self.gifView.image = images[index];
}

- (void)placeSubviews
{
    [super placeSubviews];
    
    if (self.gifView.constraints.count) return;
    
    self.gifView.frame = self.bounds;
    if (self.stateLabel.hidden && self.lastUpdatedTimeLabel.hidden) {
        self.gifView.contentMode = UIViewContentModeCenter;
    } else {
        self.gifView.contentMode = UIViewContentModeRight;
        
        CGFloat stateWidth = self.stateLabel.UPFuturesTrade_textWith;
        CGFloat timeWidth = 0.0;
        if (!self.lastUpdatedTimeLabel.hidden) {
            timeWidth = self.lastUpdatedTimeLabel.UPFuturesTrade_textWith;
        }
        CGFloat textWidth = MAX(stateWidth, timeWidth);
        self.gifView.UPFuturesTrade_w = self.UPFuturesTrade_w * 0.5 - textWidth * 0.5 - self.labelLeftInset;
    }
}

- (void)setState:(UPFuturesTradeRefreshState)state
{
    UPFuturesTradeRefreshCheckState
    
    // 根据状态做事情
    if (state == UPFuturesTradeRefreshStatePulling || state == UPFuturesTradeRefreshStateRefreshing) {
        NSArray *images = self.stateImages[@(state)];
        if (images.count == 0) return;
        
        [self.gifView stopAnimating];
        if (images.count == 1) { // 单张图片
            self.gifView.image = [images lastObject];
        } else { // 多张图片
            self.gifView.animationImages = images;
            self.gifView.animationDuration = [self.stateDurations[@(state)] doubleValue];
            [self.gifView startAnimating];
        }
    } else if (state == UPFuturesTradeRefreshStateIdle) {
        [self.gifView stopAnimating];
    }
}
@end
