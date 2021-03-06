/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInvalidating.h>

@class FBAnalytics, FBUserSession, NSArray, NSMutableSet, FBDestinationEndConditionTracker, FBDestinationSafeguard, FBDestinationLoggingConfiguration, NSString;

@interface FBDestinationManager : NSObject <FBInvalidating> {

	FBAnalytics* _analytics;
	FBUserSession* _session;
	NSArray* _destinations;
	NSMutableSet* _prefetchedDestinations;
	BOOL _mainDestinationFinished;
	FBDestinationEndConditionTracker* _endConditionTracker;
	FBDestinationSafeguard* _safeguard;
	FBDestinationLoggingConfiguration* _mainLoggingConfiguration;

}

@property (nonatomic,readonly) FBDestinationEndConditionTracker * endConditionTracker; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)configureWithDestinations:(id)arg1 inBackground:(BOOL)arg2 ;
-(FBDestinationEndConditionTracker *)endConditionTracker;
-(id)mainDestinationIdentifier;
-(void)_completeStartup;
-(void)_finishDestination:(id)arg1 withEndCondition:(unsigned long long)arg2 ;
-(void)_safeguardFire;
-(void)_prefetchContentForDestination:(Class)arg1 ;
-(void)configureSafeguard;
-(void)prefetchContentForMainDestination;
-(void)startDestination:(Class)arg1 ;
-(id)criticalServiceClassesForMainDestination;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithSession:(id)arg1 ;
@end

