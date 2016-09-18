/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRequestDelegate.h>

@class NSArray, FBRequest, NSString;

@interface FBFrictionlessRequestSettings : NSObject <FBRequestDelegate> {

	NSArray* _allowedRecipients;
	FBRequest* _activeRequest;
	BOOL _enabled;

}

@property (retain) NSArray * allowedRecipients;                      //@synthesize allowedRecipients=_allowedRecipients - In the implementation block
@property (nonatomic,retain) FBRequest * activeRequest;              //@synthesize activeRequest=_activeRequest - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * recipientIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(void)setAllowedRecipients:(NSArray *)arg1 ;
-(void)reloadRecipientCacheWithFacebook:(id)arg1 ;
-(NSArray *)allowedRecipients;
-(BOOL)isFrictionlessEnabledForRecipient:(id)arg1 ;
-(void)updateRecipientCacheWithRequestResult:(id)arg1 ;
-(void)enableWithFacebook:(id)arg1 ;
-(NSArray *)recipientIDs;
-(void)updateRecipientCacheWithRecipients:(id)arg1 ;
-(BOOL)isFrictionlessEnabledForRecipients:(id)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setActiveRequest:(FBRequest *)arg1 ;
-(FBRequest *)activeRequest;
@end
