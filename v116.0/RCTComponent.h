/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol RCTComponent <NSObject>
@property (nonatomic,copy) NSNumber * reactTag; 
@optional
-(void)didUpdateReactSubviews;
-(void)reactBridgeDidFinishTransaction;
-(void)didSetProps:(id)arg1;

@required
-(NSNumber *)reactTag;
-(id)reactSuperview;
-(id)reactSubviews;
-(id)reactTagAtPoint:(CGPoint)arg1;
-(BOOL)isReactRootView;
-(void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
-(void)removeReactSubview:(id)arg1;
-(void)setReactTag:(id)arg1;

@end

