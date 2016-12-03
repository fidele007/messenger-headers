/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMSInfiniteCarouselExperimentContext : FBExperimentContext {

	long long _nearingEndOffset;
	BOOL _isEnabled;
	long long _cardsPerFetch;

}

@property (assign,nonatomic) long long nearingEndOffset;              //@synthesize nearingEndOffset=_nearingEndOffset - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                          //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) long long cardsPerFetch;                 //@synthesize cardsPerFetch=_cardsPerFetch - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)cardsPerFetch;
-(long long)nearingEndOffset;
-(void)setNearingEndOffset:(long long)arg1 ;
-(void)setCardsPerFetch:(long long)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
@end
