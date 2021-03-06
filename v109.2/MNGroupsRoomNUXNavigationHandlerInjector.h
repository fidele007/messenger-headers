/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextInjecting.h>

@class FBProviderMapData, MNGroupsRoomNUXStateController, MNGroupsRoomNUXViewController, MNNavigationCoordinator, NSString;

@interface MNGroupsRoomNUXNavigationHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNGroupsRoomNUXStateController* _roomNUXStateController;
	MNGroupsRoomNUXViewController* _roomNUXViewController;
	MNNavigationCoordinator* _navigationCoordinator;

}

@property (nonatomic,readonly) MNGroupsRoomNUXStateController * roomNUXStateController;              //@synthesize roomNUXStateController=_roomNUXStateController - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNUXViewController * roomNUXViewController;                //@synthesize roomNUXViewController=_roomNUXViewController - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                      //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNGroupsRoomNUXViewController *)roomNUXViewController;
-(MNGroupsRoomNUXStateController *)roomNUXStateController;
-(id)initWithProviderMapData:(id)arg1 ;
@end

