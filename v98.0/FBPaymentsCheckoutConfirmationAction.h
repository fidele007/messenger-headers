/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCheckoutConfirmationAction <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate; 
@optional
-(void)handleFollowUpAction;
-(double)heightForActionCell;
-(id)newActionCell;
-(id)cellReuseIdentifier;
-(void)configureActionCell:(id)arg1 withCheckoutResponse:(id)arg2 checkoutFlowCollectedData:(id)arg3;

@required
-(BOOL)isDisabledForCheckoutResponse:(id)arg1;
-(void)handleActionWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id)arg1;
-(id<FBPaymentsCheckoutConfirmationActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id)arg1;
-(id)actionTitle;

@end

