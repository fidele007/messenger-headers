/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNConfirmationViewPresenting, MNInAppNotificationManaging;
@class FBUserSession, MNSaveMessageRequestSender, MNSaveMessageNotificationDataSource, NSString;

@interface MNSaveMessageHandler : NSObject <FBClassProvidable> {

	id<MNConfirmationViewPresenting> _confirmationViewPresenter;
	FBUserSession* _session;
	MNSaveMessageRequestSender* _saveMessageRequestSender;
	id<MNInAppNotificationManaging> _inAppNotificationManager;
	MNSaveMessageNotificationDataSource* _saveMessageNotificationDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveLinkForMessage:(id)arg1 dataDetector:(id)arg2 source:(long long)arg3 ;
-(id)initWithSession:(id)arg1 confirmationViewPresenter:(id)arg2 saveMessageRequestSender:(id)arg3 inAppNotificationManager:(id)arg4 notificationDataSource:(id)arg5 ;
-(void)_saveLinkForMessage:(id)arg1 dataDetector:(id)arg2 source:(long long)arg3 ;
-(BOOL)_onlySupportInlineURLSaving;
-(void)_displaySaveConfirmationForSource:(long long)arg1 ;
-(void)_showErrorAlertWithMessage:(id)arg1 ;
-(void)_showConfirmationToastWithText:(id)arg1 ;
-(BOOL)_isDirectMEnabled;
-(void)_showInAppNotification;
-(id)initWithProviderMapData:(id)arg1 ;
@end

