/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxEligibilityFetchRunning.h>

@class FBNuxCatalog, FBUserSession, FBNuxCatalogUpdater, NSDate, NSString, FBNuxAppConfiguration;

@interface FBNuxEligibilityFetchRunner : NSObject <FBNuxEligibilityFetchRunning> {

	BOOL _isFetching;
	FBNuxCatalog* _nuxCatalog;
	FBUserSession* _userSession;
	FBNuxCatalogUpdater* _nuxCatalogUpdater;
	NSDate* _lastFetchTime;
	NSString* _lastFetchMode;
	FBNuxAppConfiguration* _nuxAppConfiguration;
	BOOL _devMode;
	NSString* _fetchMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 nuxAppConfiguration:(id)arg2 nuxCatalog:(id)arg3 nuxCatalogUpdater:(id)arg4 devMode:(BOOL)arg5 ;
-(void)updateNuxEligibilityIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)forceUpdateEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isFetchingEligibility;
-(id)lastFetchTime;
-(id)lastFetchMode;
-(void)setNuxFetchMode:(id)arg1 ;
-(void)_updateNuxEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateNuxEligibilityFromFQLWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateNuxEligibilityFromGraphQLWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateNuxCatalogWithFQLResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_nuxFetchFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateNuxCatalogWithGraphQLResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

