/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCheckoutPaymentProcessControlling <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutPaymentProcessControllingDelegate> delegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@required
-(void)processPaymentWithFlowId:(id)arg1 collectedData:(id)arg2 checkoutLoggingService:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsCheckoutPaymentProcessControllingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end
