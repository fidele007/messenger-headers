/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPoller <NSObject>
@property (assign,nonatomic,__weak) id<FBPollerTarget> target; 
@required
-(void)addSuspensionReason:(unsigned long long)arg1;
-(void)removeSuspensionReason:(unsigned long long)arg1;
-(void)setTarget:(id)arg1;
-(id<FBPollerTarget>)target;

@end

