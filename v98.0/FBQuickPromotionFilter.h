/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, FBQPPromotion, FBUserSession, NSDictionary, FBQuickPromotionCoordinator;

@interface FBQuickPromotionFilter : NSObject {

	NSSet* _missingKeys;
	BOOL _hasExpectedParams;
	FBQPPromotion* _promotion;
	FBUserSession* _session;
	NSDictionary* _filterJSON;

}

@property (assign,nonatomic) BOOL hasExpectedParams;                                            //@synthesize hasExpectedParams=_hasExpectedParams - In the implementation block
@property (assign,nonatomic,__weak) FBQPPromotion * promotion;                                  //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSDictionary * filterJSON;                                           //@synthesize filterJSON=_filterJSON - In the implementation block
@property (nonatomic,__weak,readonly) FBQuickPromotionCoordinator * qpCoordinator; 
+(id)filterTypeKey;
+(id)expectedParams;
-(FBQPPromotion *)promotion;
-(BOOL)passesFilterWithContext:(id)arg1 withDebugInfo:(id*)arg2 ;
-(NSDictionary *)filterJSON;
-(FBQuickPromotionCoordinator *)qpCoordinator;
-(id)initWithJSONDictionary:(id)arg1 withPromotion:(id)arg2 session:(id)arg3 ;
-(BOOL)hasExpectedParams;
-(void)setHasExpectedParams:(BOOL)arg1 ;
-(void)setPromotion:(FBQPPromotion *)arg1 ;
-(void)setFilterJSON:(NSDictionary *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

