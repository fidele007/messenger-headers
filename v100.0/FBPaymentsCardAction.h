/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCardAction <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsCardActionDelegate> actionDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@required
-(void)handleActionWithCard:(id)arg1 cardCollectedData:(id)arg2;
-(BOOL)shouldDisplayForCard:(id)arg1;
-(BOOL)shouldEnableForCard:(id)arg1 cardCollectedData:(id)arg2 cardOption:(id)arg3;
-(id)titleWithCard:(id)arg1;
-(BOOL)isActionDestructive;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id)arg1;
-(id<FBPaymentsCardActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end
