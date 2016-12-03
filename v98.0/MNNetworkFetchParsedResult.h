/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, MNNetworkMontageFetchParsedResult, FBMIndexedMessageSet, FBMSyncedThreadKey;

@interface MNNetworkFetchParsedResult : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMThreadSummary* _threadOnly_threadSummary;
	MNNetworkMontageFetchParsedResult* _threadOnly_associatedMontageThreadParsedResult;
	FBMThreadSummary* _threadAndMessages_threadSummary;
	FBMIndexedMessageSet* _threadAndMessages_messageSet;
	long long _threadAndMessages_messagesQueryType;
	MNNetworkMontageFetchParsedResult* _threadAndMessages_associatedMontageThreadParsedResult;
	FBMSyncedThreadKey* _messagesOnly_threadKey;
	FBMIndexedMessageSet* _messagesOnly_messageSet;
	long long _messagesOnly_messagesQueryType;

}
+(id)threadAndMessagesWithThreadSummary:(id)arg1 messageSet:(id)arg2 messagesQueryType:(long long)arg3 associatedMontageThreadParsedResult:(id)arg4 ;
+(id)threadOnlyWithThreadSummary:(id)arg1 associatedMontageThreadParsedResult:(id)arg2 ;
+(id)messagesOnlyWithThreadKey:(id)arg1 messageSet:(id)arg2 messagesQueryType:(long long)arg3 ;
-(void)matchThreadOnly:(/*^block*/id)arg1 threadAndMessages:(/*^block*/id)arg2 messagesOnly:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

