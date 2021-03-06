/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

