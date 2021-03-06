/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@class FBProviderMapData, NSMutableDictionary, NSString;

@interface MNGroupsRoomsViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	NSMutableDictionary* _instances;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)universalSearchPolicy;
-(id)universalSearchController;
-(id)navigationCoordinator;
-(id)threadNavigationCoordinator;
-(id)directMNavigationCoordinator;
-(id)roomNUXStateController;
-(id)roomNUXNavigationHandler;
-(id)threadImageManager;
-(id)profileImageViewController;
-(id)roomSuggestionImpressionTracker;
-(id)performanceMarker;
-(id)avatarImageDecoration;
-(id)threadCellController;
-(id)nonCachedGroupsViewModelSubscriptionServiceWithIdentifier:(id)arg1 ;
-(id)navigationBarItemFactory;
-(id)actionPanelActionController;
-(id)threadModelController;
-(id)reportPageActionCreator;
-(id)roomsTabUpdatesManager;
-(id)viewPreviewingHandler;
-(id)mobileConfigManager;
-(id)threadListCTAProvider;
-(id)updateCreatorFactoryWithIdentifier:(id)arg1 ;
-(id)participantBlockActionCreatorWithIdentifier:(id)arg1 ;
-(id)roomsModelController;
-(id)analytics;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)configManager;
-(id)session;
@end

