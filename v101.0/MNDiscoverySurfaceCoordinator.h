/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@protocol MNDiscoverySurfaceCoordinatorDelegate;
@class MNDiscoverySurfaceCoordinatorInjector, MNDiscoverySurfaceFiltersFetcher, MNDiscoverySurfaceFiltersViewController, NSString;

@interface MNDiscoverySurfaceCoordinator : NSObject <FBClassInjectable> {

	MNDiscoverySurfaceCoordinatorInjector* _injector;
	MNDiscoverySurfaceFiltersFetcher* _filtersFetcher;
	MNDiscoverySurfaceFiltersViewController* _filtersViewController;
	BOOL _hasFilters;
	id<MNDiscoverySurfaceCoordinatorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNDiscoverySurfaceCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasFilters;                                                      //@synthesize hasFilters=_hasFilters - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_configureFiltersViewControllerWithFilters:(id)arg1 ;
-(void)_handleSuccessfulDiscoverySurfaceFiltersFetch:(id)arg1 ;
-(void)_handleFailedDiscoverySurfaceFiltersFetchWithError:(id)arg1 ;
-(void)fetchDiscoverySurfaceFilters;
-(BOOL)hasFilters;
-(void)setDelegate:(id<MNDiscoverySurfaceCoordinatorDelegate>)arg1 ;
-(id<MNDiscoverySurfaceCoordinatorDelegate>)delegate;
@end
