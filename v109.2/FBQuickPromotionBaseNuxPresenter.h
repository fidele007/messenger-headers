/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxPresenter.h>

@protocol FBNuxDelegate;
@class FBUserSession, FBQPPromotion, NSArray, FBQuickPromotionServerContext, FBQuickPromotionEligibilityChecker, NSString, NSDictionary;

@interface FBQuickPromotionBaseNuxPresenter : NSObject <FBNuxPresenter> {

	FBUserSession* _session;
	id<FBNuxDelegate> _nuxCoordinator;
	FBQPPromotion* _displayedPromotion;
	NSArray* _promotions;
	FBQuickPromotionServerContext* _context;
	FBQuickPromotionEligibilityChecker* _eligibilityChecker;

}

@property (nonatomic,retain) FBQuickPromotionServerContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * promotions;                                                   //@synthesize promotions=_promotions - In the implementation block
@property (nonatomic,retain) FBQuickPromotionEligibilityChecker * eligibilityChecker;              //@synthesize eligibilityChecker=_eligibilityChecker - In the implementation block
@property (assign,nonatomic,__weak) id<FBNuxDelegate> nuxCoordinator;                              //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,retain) FBQPPromotion * displayedPromotion;                                   //@synthesize displayedPromotion=_displayedPromotion - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                            //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * nuxID; 
@property (nonatomic,copy,readonly) NSArray * triggerIDs; 
@property (nonatomic,readonly) int nuxType; 
@property (nonatomic,copy,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,copy,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
+(BOOL)stickyPeriodEnabled;
-(id)bestPromotionForTrigger:(id)arg1 withContext:(id)arg2 ;
-(id<FBNuxDelegate>)nuxCoordinator;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(Class)serverContextClass;
-(void)prepareWithServerContext:(id)arg1 ;
-(void)prepareWithGraphQLData:(id)arg1 ;
-(NSString *)nuxID;
-(NSArray *)triggerIDs;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(NSString *)nuxAnalyticsModule;
-(NSDictionary *)extraLogData;
-(unsigned long long)preferredPresentationMethod;
-(id)bestPromotionForTrigger:(id)arg1 ;
-(FBQPPromotion *)displayedPromotion;
-(void)_logTrigger:(id)arg1 ;
-(FBQuickPromotionEligibilityChecker *)eligibilityChecker;
-(NSArray *)promotions;
-(void)setPromotions:(NSArray *)arg1 ;
-(void)setDisplayedPromotion:(FBQPPromotion *)arg1 ;
-(void)setEligibilityChecker:(FBQuickPromotionEligibilityChecker *)arg1 ;
-(id)newBannerViewControllerWithContext:(id)arg1 ;
-(FBQuickPromotionServerContext *)context;
-(void)setContext:(FBQuickPromotionServerContext *)arg1 ;
-(id)versionID;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

