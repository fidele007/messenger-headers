/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface MNInboxAdsPageMessagingMutator : NSObject {

	FBUserSession* _session;

}
-(void)_handleFailedAdMessageSendWithErrorMessage:(id)arg1 pageID:(id)arg2 adID:(id)arg3 ;
-(void)performPageMessagingNativeMutationWithPageID:(id)arg1 adID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

