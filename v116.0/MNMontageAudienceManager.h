/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBNetworkerRequestDelegate.h>

@class FBUserSession, FBMUserInvalidator, NSMapTable, NSString;

@interface MNMontageAudienceManager : NSObject <FBNetworkerRequestDelegate> {

	unsigned long long _audienceListType;
	FBUserSession* _session;
	FBMUserInvalidator* _userInvalidator;
	NSMapTable* _activeRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addOrRemoveUserFromMontageAudience:(id)arg1 shouldAdd:(BOOL)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)initWithSession:(id)arg1 userInvalidator:(id)arg2 audienceListType:(unsigned long long)arg3 ;
-(void)clearMontageAudienceSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)cancelAll;
@end

