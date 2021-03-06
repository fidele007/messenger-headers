/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCacheDescriptor.h>
#import <Messenger/FBFrictionlessDialogSupportDelegate.h>
#import <Messenger/FBWebDialogsDelegate.h>

@class FBFrictionlessRequestSettings, NSArray, NSString;

@interface FBFrictionlessRecipientCache : FBCacheDescriptor <FBFrictionlessDialogSupportDelegate, FBWebDialogsDelegate> {

	BOOL _frictionlessShouldMakeViewInvisible;
	FBFrictionlessRequestSettings* _frictionlessSettings;

}

@property (assign,nonatomic) BOOL frictionlessShouldMakeViewInvisible;                          //@synthesize frictionlessShouldMakeViewInvisible=_frictionlessShouldMakeViewInvisible - In the implementation block
@property (nonatomic,retain) FBFrictionlessRequestSettings * frictionlessSettings;              //@synthesize frictionlessSettings=_frictionlessSettings - In the implementation block
@property (nonatomic,copy) NSArray * recipientIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recipientIDs;
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(void)setFrictionlessSettings:(FBFrictionlessRequestSettings *)arg1 ;
-(FBFrictionlessRequestSettings *)frictionlessSettings;
-(BOOL)isFrictionlessRecipient:(id)arg1 ;
-(void)prefetchAndCacheForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFrictionlessShouldMakeViewInvisible:(BOOL)arg1 ;
-(BOOL)frictionlessShouldMakeViewInvisible;
-(void)webDialogsWillPresentDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)setRecipientIDs:(NSArray *)arg1 ;
-(BOOL)areFrictionlessRecipients:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

