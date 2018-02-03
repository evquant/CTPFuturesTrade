//
//  UPCTPTradeErrorConstants.h
//  FuturesTrade
//
//  Created by UP-LiuL on 17/8/18.
//  Copyright © 2017年 ferdinand. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UPCTPTradeErrorConstants : NSObject

extern NSString * const UPCTPTradeError_NetworkConnectFailed;
extern const NSInteger UPCTPTradeErrorCode_NetworkConnectFailed;

extern NSString * const UPCTPTradeError_RequestTimeout;
extern const NSInteger UPCTPTradeErrorCode_RequestTimeout;

extern NSString * const UPCTPTradeError_IsLoging;
extern const NSInteger UPCTPTradeErrorCode_IsLoging;

extern NSString * const UPCTPTradeError_RepeatedLogin;
extern const NSInteger UPCTPTradeErrorCode_RepeatedLogin;

extern NSString * const UPCTPTradeError_SendLogoutRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendLogoutRequestFailed;

extern NSString * const UPCTPTradeError_SendLoginRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendLoginRequestFailed;

extern NSString * const UPCTPTradeError_SendRequestWhileNotLogedin;
extern const NSInteger UPCTPTradeErrorCode_SendRequestWhileNotLogedin;

extern NSString * const UPCTPTradeError_SendOrderInsertRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendOrderInsertRequestFailed;

extern NSString * const UPCTPTradeError_SendQueryTradingAccountRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryTradingAccountRequestFailed;

extern NSString * const UPCTPTradeError_SendQueryInvestorPositionRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryInvestorPositionRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryInvestorPosition;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryInvestorPosition;

extern NSString * const UPCTPTradeError_RepeatedQueryTrade;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryTrade;

extern NSString * const UPCTPTradeError_SendQueryTradeRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryTradeRequestFailed;

extern NSString * const UPCTPTradeError_SendQueryDepthMarketRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryDepthMarketRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryInvestorPositionDetail;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryInvestorPositionDetail;

extern NSString * const UPCTPTradeError_RepeatedQueryOrder;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryOrder;

extern NSString * const UPCTPTradeError_SendQueryOrderRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryOrderRequestFailed;

extern NSString * const UPCTPTradeError_SendQueryInvestorPositionDetailRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryInvestorPositionDetailRequestFailed;

extern NSString * const UPCTPTradeError_SendOrderActionRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendOrderActionRequestFailed;

extern NSString * const UPCTPTradeError_SendQueryTransferBankRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryTransferBankRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryTransferBank;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryTransferBank;

extern NSString * const UPCTPTradeError_SendQueryTransferSerialRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryTransferSerialRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryTransferSerial;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryTransferSerial;

extern NSString * const UPCTPTradeError_SendQueryAccountregisterRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryAccountregisterRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryAccountregister;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryAccountregister;

extern NSString * const UPCTPTradeError_SendBetweenBankAndFutureRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendBetweenBankAndFutureRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryBetweenBankAndFuture;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryBetweenBankAndFuture;

extern NSString * const UPCTPTradeError_SendQueryBankAccountMoneyRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryBankAccountMoneyRequestFailed;

extern NSString * const UPCTPTradeError_RepeatedQueryBankAccountMoney;
extern const NSInteger UPCTPTradeErrorCode_RepeatedQueryBankAccountMoney;

extern NSString * const UPCTPTradeError_SendQueryInstrumentMarginRateRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendQueryInstrumentMarginRateRequestFailed;

extern NSString * const UPCTPTradeError_SendCTPLoginRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendCTPLoginRequestFailed;

extern NSString * const UPCTPTradeError_SendCTPLogoutRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendCTPLogoutRequestFailed;

extern NSString * const UPCTPTradeError_SendSubscribeMarketDataRequestFailed;
extern const NSInteger UPCTPTradeErrorCode_SendSubscribeMarketDataRequestFailed;

@end