/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxEligibilityFetchRunning.h>

@protocol OS_dispatch_queue;
@class FBNuxCatalog, MNOmnistoreNuxStore, FBNuxCatalogUpdater, NSObject, NSString;

@interface MNNuxEligibilityFetchRunner : NSObject <FBNuxEligibilityFetchRunning> {

	FBNuxCatalog* _nuxCatalog;
	MNOmnistoreNuxStore* _nuxStore;
	FBNuxCatalogUpdater* _nuxCatalogUpdater;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateNuxEligibilityIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)forceUpdateEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isFetchingEligibility;
-(id)lastFetchTime;
-(void)setNuxFetchMode:(id)arg1 ;
-(id)initWithNuxStore:(id)arg1 nuxCatalog:(id)arg2 nuxCatalogUpdater:(id)arg3 ;
@end

