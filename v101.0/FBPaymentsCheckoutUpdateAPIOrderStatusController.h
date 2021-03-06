/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutOrderStatusControlling.h>

@protocol FBHttpRequestToken, FBPaymentsCheckoutContentConfiguration, FBPaymentsCheckoutOrderStatusControllingDelegate, FBPaymentsCheckoutOrderStatusCollectedDataDelegate, FBPaymentsCheckoutContentConfigurationExtending;
@class FBPaymentsUpdateListenerAnnouncer, FBUserSession, FBPaymentsCheckoutPaymentInfo, NSDictionary, NSString;

@interface FBPaymentsCheckoutUpdateAPIOrderStatusController : NSObject <FBPaymentsCheckoutOrderStatusControlling> {

	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	FBUserSession* _session;
	FBPaymentsCheckoutPaymentInfo* _paymentInfo;
	long long _dataLoadingStatus;
	long long _lastNonLoadingDataLoadingStatus;
	id<FBHttpRequestToken> _ongoingRequestToken;
	id<FBPaymentsCheckoutContentConfiguration> _currentContentConfiguration;
	NSDictionary* _statusData;
	NSDictionary* _ongoingStatusData;
	id<FBPaymentsCheckoutOrderStatusControllingDelegate> _orderStatusControllingDelegate;
	id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> _orderStatusCollectedDataDelegate;
	id<FBPaymentsCheckoutContentConfigurationExtending> _extendedContentConfiguration;

}

@property (nonatomic,retain) id<FBPaymentsCheckoutContentConfigurationExtending> extendedContentConfiguration;                            //@synthesize extendedContentConfiguration=_extendedContentConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusControllingDelegate> orderStatusControllingDelegate;                  //@synthesize orderStatusControllingDelegate=_orderStatusControllingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> orderStatusCollectedDataDelegate;              //@synthesize orderStatusCollectedDataDelegate=_orderStatusCollectedDataDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentInfo:(id)arg2 ;
-(void)setExtendedContentConfiguration:(id<FBPaymentsCheckoutContentConfigurationExtending>)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)contentConfiguration;
-(void)setOrderStatusCollectedDataDelegate:(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)arg1 ;
-(id)orderData;
-(void)updateOrderStatus;
-(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)orderStatusControllingDelegate;
-(void)setOrderStatusControllingDelegate:(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)arg1 ;
-(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)orderStatusCollectedDataDelegate;
-(long long)dataLoadingStatus;
-(void)_fetchOrderStatus;
-(void)_cancelOngoingRequest;
-(void)_handleFetchResponse:(id)arg1 ;
-(void)_handleFetchFailureWithError:(id)arg1 ;
-(id<FBPaymentsCheckoutContentConfigurationExtending>)extendedContentConfiguration;
-(void)setUp;
@end

