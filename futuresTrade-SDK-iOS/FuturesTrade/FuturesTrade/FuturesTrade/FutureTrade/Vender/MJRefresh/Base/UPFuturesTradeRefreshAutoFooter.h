//
//  UPFuturesTradeRefreshAutoFooter.h
//  UPFuturesTradeRefreshExample
//
//  Created by UPFuturesTrade Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "UPFuturesTradeRefreshFooter.h"

@interface UPFuturesTradeRefreshAutoFooter : UPFuturesTradeRefreshFooter
/** 是否自动刷新(默认为YES) */
@property (assign, nonatomic, getter=isAutomaticallyRefresh) BOOL automaticallyRefresh;

/** 当底部控件出现多少时就自动刷新(默认为1.0，也就是底部控件完全出现时，才会自动刷新) */
@property (assign, nonatomic) CGFloat appearencePercentTriggerAutoRefresh UPFuturesTradeRefreshDeprecated("请使用triggerAutomaticallyRefreshPercent属性");

/** 当底部控件出现多少时就自动刷新(默认为1.0，也就是底部控件完全出现时，才会自动刷新) */
@property (assign, nonatomic) CGFloat triggerAutomaticallyRefreshPercent;
@end