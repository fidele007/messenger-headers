/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBStalePruningConfigBuilder, FBEvictionConfigBuilder, NSArray;

@interface FBManagedConfigBuilder : NSObject {

	BOOL _inlineData;
	FBStalePruningConfigBuilder* _stalePruning;
	FBEvictionConfigBuilder* _eviction;
	NSArray* _eventListenerPairs;

}

@property (assign,nonatomic) BOOL inlineData;                                         //@synthesize inlineData=_inlineData - In the implementation block
@property (nonatomic,retain) FBStalePruningConfigBuilder * stalePruning;              //@synthesize stalePruning=_stalePruning - In the implementation block
@property (nonatomic,retain) FBEvictionConfigBuilder * eviction;                      //@synthesize eviction=_eviction - In the implementation block
@property (nonatomic,copy) NSArray * eventListenerPairs;                              //@synthesize eventListenerPairs=_eventListenerPairs - In the implementation block
-(void)setStalePruning:(FBStalePruningConfigBuilder *)arg1 ;
-(FBStalePruningConfigBuilder *)stalePruning;
-(void)setEviction:(FBEvictionConfigBuilder *)arg1 ;
-(FBEvictionConfigBuilder *)eviction;
-(void)setEventListenerPairs:(NSArray *)arg1 ;
-(NSArray *)eventListenerPairs;
-(id)init;
-(id)build;
-(BOOL)inlineData;
-(void)setInlineData:(BOOL)arg1 ;
@end

