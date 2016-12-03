/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBMemDirectMessageThread;

@interface FBDirectInboxPostCreatePublicationResponse : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSArray* _backstagePostResponse_posts;
	FBMemDirectMessageThread* _directInboxMessageReplyResponse_thread;
	NSArray* _directInboxMessageCreateResponse_threads;

}
+(id)backstagePostResponseWithPosts:(id)arg1 ;
+(id)directInboxMessageCreateResponseWithThreads:(id)arg1 ;
+(id)directInboxMessageReplyResponseWithThread:(id)arg1 ;
-(void)matchBackstagePostResponse:(/*^block*/id)arg1 directInboxMessageReplyResponse:(/*^block*/id)arg2 directInboxMessageCreateResponse:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

