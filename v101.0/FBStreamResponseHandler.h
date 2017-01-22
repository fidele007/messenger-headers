/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, FBStreamAnalytics, FBGraphQLResponseParser, NSArray;

@interface FBStreamResponseHandler : NSObject {

	NSMutableArray* _mutableChunkResults;
	NSString* _targetID;
	unsigned long long _loadType;
	FBStreamAnalytics* _analytics;
	FBGraphQLResponseParser* _parser;

}

@property (nonatomic,copy,readonly) NSString * targetID;                      //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,readonly) unsigned long long loadType;                   //@synthesize loadType=_loadType - In the implementation block
@property (nonatomic,retain) FBStreamAnalytics * analytics;                   //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) FBGraphQLResponseParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,copy,readonly) NSArray * chunkResults; 
-(FBStreamAnalytics *)analytics;
-(void)setAnalytics:(FBStreamAnalytics *)arg1 ;
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 analytics:(id)arg4 ;
-(void)addChunkResult:(id)arg1 ;
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(void)handleRequestRetryWithError:(id)arg1 status:(id)arg2 ;
-(NSArray *)chunkResults;
-(id)description;
-(NSString *)targetID;
-(unsigned long long)loadType;
-(FBGraphQLResponseParser *)parser;
@end
