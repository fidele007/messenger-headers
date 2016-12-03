/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class NSString;

@interface FBMMailboxPreparerFactory : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _inboxPreparerProvider;
	id<FBProvider> _pendingRequestsPreparer;
	id<FBProvider> _mailboxPreparerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithInboxPreparerProvider:(id)arg1 pendingRequestsPreparer:(id)arg2 mailboxPreparerProvider:(id)arg3 ;
-(id)mailboxPreparerForThreadListType:(long long)arg1 ;
@end

