/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadActionPanelActionHandlingDelegate;
@class MNNavigationCoordinator, FBMThreadKey, MNBlockUserFullScreenViewController, NSString;

@interface MNThreadActionPanelBlockUserActionHandler : NSObject <MNThreadActionPanelActionHandling> {

	MNNavigationCoordinator* _navigationCoordinator;
	FBMThreadKey* _threadKey;
	MNBlockUserFullScreenViewController* _blockUserVC;
	NSString* _targetUserId;
	id<MNThreadActionPanelActionHandlingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(id)initWithThreadKey:(id)arg1 blockAction:(id)arg2 navigationCoordinator:(id)arg3 blockUserVC:(id)arg4 ;
@end

