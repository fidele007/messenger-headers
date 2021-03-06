/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface MNBusinessCTALegacyRideSharingHandler : NSObject {

	FBUserSession* _session;

}
-(void)_sendCancelMutationWithTargetID:(id)arg1 userHasConfirmed:(BOOL)arg2 ;
-(void)_showUserConfirmCancelRideDialogWithTargetID:(id)arg1 CancellationMessage:(id)arg2 ;
-(void)_showUserCannotCancelRideDialogWithMessage:(id)arg1 ;
-(void)_handleRideCancelResponsePayload:(id)arg1 targetID:(id)arg2 ;
-(void)handleButtonClickWithTargetID:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

