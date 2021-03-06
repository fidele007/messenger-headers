/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxUnitUpdateListening.h>
#import <Messenger/MNDiscoverySurfaceUserLocationFetcherDelegate.h>

@protocol MNDiscoverySurfaceViewModelLoaderDelegate;
@class MNDiscoverySurfaceViewModelLoaderInjector, MNInboxDiscoverySurfaceService, MNDiscoverySurfaceViewModelFactory, MNDiscoverySurfaceUserLocationFetcher, NSDate, NSString;

@interface MNDiscoverySurfaceViewModelLoader : NSObject <MNInboxUnitUpdateListening, MNDiscoverySurfaceUserLocationFetcherDelegate> {

	MNDiscoverySurfaceViewModelLoaderInjector* _injector;
	MNInboxDiscoverySurfaceService* _discoverySurfaceService;
	MNDiscoverySurfaceViewModelFactory* _discoverySurfaceViewModelFactory;
	MNDiscoverySurfaceUserLocationFetcher* _userLocationFetcher;
	NSDate* _lastFetchedDate;
	id<MNDiscoverySurfaceViewModelLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNDiscoverySurfaceViewModelLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)discoverySurfaceUserLocationFetcher:(id)arg1 didFetchUserLocation:(id)arg2 ;
-(BOOL)isFetchedInboxDataStale;
-(void)fetchInboxUnits;
-(BOOL)_shouldShowAllForBYMM;
-(void)_loadDiscoverySurfaceViewModelWithInboxUnits:(id)arg1 metadata:(id)arg2 ;
-(void)_fetchDiscoverySurfaceWithUserLocation:(id)arg1 ;
-(void)_handleFetchFailureWithError:(id)arg1 ;
-(void)inboxUnitsDidUpdate:(id)arg1 isFreshData:(BOOL)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNDiscoverySurfaceViewModelLoaderDelegate>)arg1 ;
-(id<MNDiscoverySurfaceViewModelLoaderDelegate>)delegate;
@end

