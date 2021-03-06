/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBQPPromotionEntity, FBUserSession, NSDictionary, NSString, NSArray, FBQuickPromotionClause, FBQuickPromotionCoordinator, FBQuickPromotionFiltersHelper, NSDate, FBQPCreative;

@interface FBQPPromotion : NSObject {

	FBQPPromotionEntity* _promotionEntity;
	FBUserSession* _session;
	NSDictionary* _triggerContext;
	NSString* _nuxID;
	NSString* _activeTrigger;
	NSArray* _filters;
	FBQuickPromotionClause* _rootClause;

}

@property (nonatomic,copy) NSString * nuxID;                                                                   //@synthesize nuxID=_nuxID - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                                  //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy) FBQuickPromotionClause * rootClause;                                                //@synthesize rootClause=_rootClause - In the implementation block
@property (nonatomic,__weak,readonly) FBQuickPromotionCoordinator * quickPromotionCoordinator; 
@property (nonatomic,__weak,readonly) FBQuickPromotionFiltersHelper * filtersHelper; 
@property (nonatomic,copy,readonly) NSString * promotionID; 
@property (nonatomic,copy,readonly) NSArray * triggers; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) NSDate * startTime; 
@property (nonatomic,readonly) NSDate * endTime; 
@property (nonatomic,copy,readonly) NSString * templatename; 
@property (nonatomic,copy,readonly) NSDictionary * instanceLogData; 
@property (nonatomic,copy,readonly) NSDictionary * templateParameters; 
@property (nonatomic,readonly) long long clientTTLSeconds; 
@property (nonatomic,copy,readonly) NSString * customRendererType; 
@property (nonatomic,copy) NSDictionary * triggerContext;                                                      //@synthesize triggerContext=_triggerContext - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventLimitMap; 
@property (nonatomic,readonly) FBQPCreative * creative; 
@property (nonatomic,copy) NSString * activeTrigger;                                                           //@synthesize activeTrigger=_activeTrigger - In the implementation block
@property (nonatomic,copy,readonly) NSArray * creatives; 
@property (getter=isExposureHoldout,nonatomic,readonly) BOOL exposureHoldout; 
@property (getter=shouldLogEligibilityWaterfall,nonatomic,readonly) BOOL logEligibilityWaterfall; 
-(FBQuickPromotionCoordinator *)quickPromotionCoordinator;
-(NSString *)nuxID;
-(FBQPCreative *)creative;
-(id)handleButtonTapEvent:(id)arg1 ;
-(NSString *)templatename;
-(NSDictionary *)templateParameters;
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(BOOL)isReadyForDisplayWithDebugInfo:(id*)arg1 ;
-(BOOL)fetchResourcesForDisplay;
-(FBQuickPromotionFiltersHelper *)filtersHelper;
-(FBQuickPromotionClause *)rootClause;
-(NSString *)promotionID;
-(id)rawJSON;
-(void)setNuxID:(NSString *)arg1 ;
-(NSDictionary *)triggerContext;
-(void)setActiveTrigger:(NSString *)arg1 ;
-(BOOL)isExposureHoldout;
-(BOOL)disableCoolDown;
-(id)initWithSession:(id)arg1 promotionEntity:(id)arg2 nuxID:(id)arg3 ;
-(void)setTriggerContext:(NSDictionary *)arg1 ;
-(id)handleButtonTapEvent:(id)arg1 withTriggerContext:(id)arg2 ;
-(id)actionForButtonTapEvent:(id)arg1 ;
-(NSDictionary *)eventLimitMap;
-(NSString *)activeTrigger;
-(id)_customizeCreative:(id)arg1 withTriggerContext:(id)arg2 ;
-(void)setRootClause:(FBQuickPromotionClause *)arg1 ;
-(void)setMaxImpressions:(long long)arg1 ;
-(long long)maxImpressions;
-(NSDictionary *)instanceLogData;
-(NSArray *)creatives;
-(long long)clientTTLSeconds;
-(NSString *)customRendererType;
-(BOOL)shouldLogEligibilityWaterfall;
-(unsigned long long)occurrenceCountForEvent:(id)arg1 ;
-(id)lastOccurrenceTime:(id)arg1 ;
-(id)originalCreative;
-(void)setPromotionID:(NSString *)arg1 ;
-(id)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)isValid;
-(void)setFilters:(NSArray *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSArray *)filters;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)logEvent:(id)arg1 ;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

