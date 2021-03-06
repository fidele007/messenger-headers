/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBMagicStoriesProductionLogger : NSObject {

	FBUserSession* _session;
	NSString* _composerSessionID;

}
-(id)initWithSession:(id)arg1 composerSessionID:(id)arg2 ;
-(void)logPreviewLoaded;
-(void)logPreviewSeenForCollection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logPreviewSwipedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)logPreviewNUXSeen;
-(void)logPreviewNUXDismissedWithReason:(id)arg1 ;
-(void)logPreviewSelectedForCollection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 collection:(id)arg4 shouldLogCounts:(BOOL)arg5 ;
-(void)_logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)logFeedPromptDisplayedWithCollection:(id)arg1 ;
-(void)logFeedPromptTappedWithCollection:(id)arg1 ;
-(void)logFeedPromptCloseButtonTappedWithCollection:(id)arg1 ;
@end

