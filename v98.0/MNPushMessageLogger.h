/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAPNSMessageHandlerListening.h>
#import <Messenger/MNSyncMessageHandlerListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBMPushLogger, FBCache, NSString;

@interface MNPushMessageLogger : NSObject <MNAPNSMessageHandlerListening, MNSyncMessageHandlerListening, FBViewerContextClassProvidable> {

	FBMPushLogger* _pushLogger;
	id<MNAuthenticationManager> _authManager;
	FBCache* _pushedMessageIdCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)willHandleSyncMessage:(id)arg1 ;
-(void)didHandleSyncMessage:(id)arg1 ;
-(void)didFailHandlingSyncMessage:(id)arg1 ;
-(id)initWithPushLogger:(id)arg1 authManager:(id)arg2 ;
-(void)willHandleAPNSMessage:(id)arg1 fromSource:(long long)arg2 ;
-(void)didHandleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 ;
-(void)didFailHandlingAPNSMessage:(id)arg1 ;
@end

