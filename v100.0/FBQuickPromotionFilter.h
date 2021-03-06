/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(BOOL)hasExpectedParams;
-(void)setHasExpectedParams:(BOOL)arg1 ;
-(void)setPromotion:(FBQPPromotion *)arg1 ;
-(void)setFilterJSON:(NSDictionary *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 withPromotion:(id)arg2 session:(id)arg3 ;
-(FBQuickPromotionCoordinator *)qpCoordinator;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

