/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamLoadResult.h>

@protocol FBConnectionPageProtocol;
@class NSDictionary, FBGraphQLQuery, FBMemFeedback;

@interface FBCKStreamLoadResult : FBStreamLoadResult {

	NSDictionary* _parsedResponse;
	FBGraphQLQuery* _query;
	FBMemFeedback* _feedback;
	id<FBConnectionPageProtocol> _commentsConnection;

}

@property (nonatomic,copy,readonly) NSDictionary * parsedResponse;                           //@synthesize parsedResponse=_parsedResponse - In the implementation block
@property (nonatomic,readonly) FBGraphQLQuery * query;                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) FBMemFeedback * feedback;                                     //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) id<FBConnectionPageProtocol> commentsConnection;              //@synthesize commentsConnection=_commentsConnection - In the implementation block
-(NSDictionary *)parsedResponse;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasPreviousPage:(BOOL)arg3 hasNextPage:(BOOL)arg4 parsedResponse:(id)arg5 query:(id)arg6 feedback:(id)arg7 commentsConnection:(id)arg8 ;
-(id<FBConnectionPageProtocol>)commentsConnection;
-(id)init;
-(FBGraphQLQuery *)query;
-(FBMemFeedback *)feedback;
@end

