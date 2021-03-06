/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <Messenger/MNMomentsAppInviteAttachmentViewDelegate.h>

@protocol MNNavigationPluginService, FBIntentHandler;
@class FBUserSession, NSString;

@interface MNMomentsAppInviteAttachmentCellElementController : MNDefaultAttachmentCellElementController <SKStoreProductViewControllerDelegate, MNMomentsAppInviteAttachmentViewDelegate> {

	FBUserSession* _session;
	id<MNNavigationPluginService> _navigationService;
	id<FBIntentHandler> _intentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)_handleButtonTapped:(id)arg1 button:(id)arg2 viewModel:(id)arg3 ;
-(void)momentsAppInviteViewPhotoWasTapped:(id)arg1 viewModel:(id)arg2 ;
-(void)momentsAppInviteViewButtonWasTapped:(id)arg1 button:(id)arg2 viewModel:(id)arg3 buttonIndex:(unsigned long long)arg4 ;
-(id)initWithSession:(id)arg1 providerMapData:(id)arg2 navigationService:(id)arg3 ;
@end

