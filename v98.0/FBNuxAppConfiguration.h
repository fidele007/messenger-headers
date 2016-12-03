/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSSet;

@interface FBNuxAppConfiguration : NSObject {

	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBQuickPromotionActionHandler> quickPromotionActionHandler; 
@property (nonatomic,readonly) id<FBNuxAppEventManagerDataSource> appEventManagerDataSource; 
@property (nonatomic,readonly) id<FBQuickPromotionInterstitialDataSource> quickPromotionInterstitialDataSource; 
@property (nonatomic,readonly) id<FBQuickPromotionMegaphoneDataSource> quickPromotionMegaphoneDataSource; 
@property (nonatomic,copy,readonly) NSSet * serverFetchEvents; 
@property (nonatomic,readonly) double minimumFetchInterval; 
@property (nonatomic,readonly) double expiryInterval; 
@property (nonatomic,readonly) double modalNuxImpressionCooldown; 
@property (nonatomic,readonly) double embeddedNuxActionCooldown; 
@property (nonatomic,copy,readonly) NSSet * presentedClassesToBeIgnored; 
+(BOOL)isNuxCoordinatorDisabled;
+(id)nuxPlist;
+(id)_nuxAppConfigurationClassName;
-(id<FBQuickPromotionActionHandler>)quickPromotionActionHandler;
-(id<FBQuickPromotionInterstitialDataSource>)quickPromotionInterstitialDataSource;
-(NSSet *)serverFetchEvents;
-(id<FBNuxAppEventManagerDataSource>)appEventManagerDataSource;
-(id<FBQuickPromotionMegaphoneDataSource>)quickPromotionMegaphoneDataSource;
-(double)minimumFetchInterval;
-(double)expiryInterval;
-(double)modalNuxImpressionCooldown;
-(double)embeddedNuxActionCooldown;
-(NSSet *)presentedClassesToBeIgnored;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

