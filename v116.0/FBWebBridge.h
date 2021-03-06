/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBWebBridge : NSObject {

	NSArray* _attachedBridgeMethodSets;
	NSArray* _availableBridgeMethodSets;
	id _performer;

}

@property (nonatomic,copy) NSArray * attachedBridgeMethodSets;               //@synthesize attachedBridgeMethodSets=_attachedBridgeMethodSets - In the implementation block
@property (nonatomic,copy) NSArray * availableBridgeMethodSets;              //@synthesize availableBridgeMethodSets=_availableBridgeMethodSets - In the implementation block
@property (assign,nonatomic,__weak) id performer;                            //@synthesize performer=_performer - In the implementation block
+(BOOL)isBridgeRequestURL:(id)arg1 ;
-(id)initWithMethodSets:(id)arg1 performer:(id)arg2 ;
-(void)executeBridgeRequestURL:(id)arg1 ;
-(void)attachToWebView:(id)arg1 ;
-(void)setAvailableBridgeMethodSets:(NSArray *)arg1 ;
-(void)setPerformer:(id)arg1 ;
-(NSArray *)attachedBridgeMethodSets;
-(BOOL)_selectorNameIsAllowed:(id)arg1 ;
-(id)_invocationForSelector:(SEL)arg1 arguments:(id)arg2 ;
-(void)_executeBridgeRequest:(id)arg1 ;
-(NSArray *)availableBridgeMethodSets;
-(void)setAttachedBridgeMethodSets:(NSArray *)arg1 ;
-(id)performer;
@end

