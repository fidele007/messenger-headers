/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>

@protocol FBProvider;
@class NSSet, FBStringWithRedactedDescription, NSString, FBMRTCCallData, FBWebRTCMultiwayLargeGroupsExperimentContext, FBWebRTCMultiwayNewFeaturesExperimentContext, MNUserStore, MNNavigationCoordinator, FBWebRTCCallController;

@interface MNWebRTCMessagesViewGroupCallStarter : NSObject <MNMultiPeoplePickerViewControllerDelegate> {

	NSSet* _threadParticipants;
	FBStringWithRedactedDescription* _threadName;
	NSString* _threadId;
	FBMRTCCallData* _threadCallData;
	BOOL _shouldUseDeltasForStatus;
	BOOL _isMultiwayCallOngoingForThread;
	NSString* _serverInfoData;
	BOOL _directVideo;
	FBWebRTCMultiwayLargeGroupsExperimentContext* _groupSizeContext;
	FBWebRTCMultiwayNewFeaturesExperimentContext* _multiwayFeaturesContext;
	MNUserStore* _userStore;
	id<FBProvider> _multiPeoplePickerViewControllerProvider;
	MNNavigationCoordinator* _navigationCoordinator;
	FBWebRTCCallController* _callController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serverInfoData;
-(id)initWithUserStore:(id)arg1 shouldUseDeltaPath:(BOOL)arg2 experimentManager:(id)arg3 multiPeoplePickerViewControllerProvider:(id)arg4 navigationCoordinator:(id)arg5 callController:(id)arg6 ;
-(void)configureWithThreadParticipants:(id)arg1 threadCallData:(id)arg2 threadName:(id)arg3 threadId:(id)arg4 ;
-(void)updateOngoingCallStatus:(BOOL)arg1 withServerInfoData:(id)arg2 ;
-(void)startOutgoingGroupCallWithVideo:(BOOL)arg1 ;
-(BOOL)_isCallOngoing;
-(void)startGroupCallRingingUsers:(id)arg1 ;
-(void)showPeoplePicker;
-(void)showConfirmCall;
-(void)userTappedCancelCall:(id)arg1 ;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(BOOL)multiPeoplePickerViewController:(id)arg1 shouldShowPersonFromSearch:(id)arg2 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
@end

