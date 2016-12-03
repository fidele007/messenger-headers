/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEvictionComparator;
@interface FBEvictionConfigBuilder : NSObject {

	long long _maxSize;
	long long _lowSpaceMaxSize;
	id<FBEvictionComparator> _evictionComparator;

}

@property (assign,nonatomic) long long maxSize;                                        //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) long long lowSpaceMaxSize;                                //@synthesize lowSpaceMaxSize=_lowSpaceMaxSize - In the implementation block
@property (nonatomic,retain) id<FBEvictionComparator> evictionComparator;              //@synthesize evictionComparator=_evictionComparator - In the implementation block
-(void)setLowSpaceMaxSize:(long long)arg1 ;
-(long long)lowSpaceMaxSize;
-(id<FBEvictionComparator>)evictionComparator;
-(void)setEvictionComparator:(id<FBEvictionComparator>)arg1 ;
-(id)init;
-(long long)maxSize;
-(void)setMaxSize:(long long)arg1 ;
-(id)build;
@end
