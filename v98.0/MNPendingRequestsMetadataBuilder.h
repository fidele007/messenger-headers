/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNPendingRequestsMetadataBuilder : NSObject {

	unsigned long long _numberOfPendingRequests;
	unsigned long long _numberOfUnreadPendingRequests;
	unsigned long long _numberOfFilteredRequests;
	NSString* _pendingRequestsSnippet;

}
+(id)pendingRequestsMetadata;
+(id)pendingRequestsMetadataFromExistingPendingRequestsMetadata:(id)arg1 ;
-(id)withNumberOfPendingRequests:(unsigned long long)arg1 ;
-(id)withNumberOfUnreadPendingRequests:(unsigned long long)arg1 ;
-(id)withNumberOfFilteredRequests:(unsigned long long)arg1 ;
-(id)withPendingRequestsSnippet:(id)arg1 ;
-(id)build;
@end
