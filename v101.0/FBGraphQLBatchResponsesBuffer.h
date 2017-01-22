/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLBatchRequest, NSMutableArray, NSMutableDictionary;

@interface FBGraphQLBatchResponsesBuffer : NSObject {

	FBGraphQLBatchRequest* _request;
	NSMutableArray* _arrayOfBuffers;
	unsigned long long _vendedResponsesCount;
	NSMutableDictionary* _countForQueriesReferenceParameters;

}
-(id)vendNextResponse;
-(id)_responseBufferForQuery:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(void)setSkippedResults:(unsigned long long)arg1 erroredResults:(unsigned long long)arg2 ;
-(BOOL)hasVendedAllExpectedResponses;
-(void)addResponse:(id)arg1 ;
@end
