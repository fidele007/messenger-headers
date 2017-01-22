/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessageFailureHandling.h>

@class FBActionSheetCoordinator, NSString;

@interface MNSecureMessageSendFailureHandler : NSObject <FBViewerContextClassProvidable, MNMessageFailureHandling> {

	FBActionSheetCoordinator* _actionSheetCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithActionSheetCoordinator:(id)arg1 ;
-(void)_showRetryActionsInView:(id)arg1 failure:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldHandleFailedMessage:(id)arg1 failure:(id)arg2 ;
-(BOOL)shouldShowNonRetriableErrorAlertWhenFailedToSendMessage:(id)arg1 ;
-(void)handleFailedMessage:(id)arg1 failure:(id)arg2 fromView:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
