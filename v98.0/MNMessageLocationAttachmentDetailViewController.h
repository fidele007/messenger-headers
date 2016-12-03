/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMessageLocationAttachmentDetailViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol MNModalPresentation;
@class MNMessageLocationAttachmentDetailView, MNMessageLocationAttachmentViewModel, MNMessageLocationAttachmentRideServicePresenter, FBMThreadKey, NSString;

@interface MNMessageLocationAttachmentDetailViewController : UIViewController <MNMessageLocationAttachmentDetailViewDelegate, UIActionSheetDelegate> {

	MNMessageLocationAttachmentDetailView* _detailView;
	id<MNModalPresentation> _navigationCoordinator;
	MNMessageLocationAttachmentViewModel* _messageLocationAttachment;
	MNMessageLocationAttachmentRideServicePresenter* _rideServicePresenter;
	FBMThreadKey* _threadKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_openInGoogleMaps;
-(id)initWithNavigationCoordinator:(id)arg1 messageLocationAttachment:(id)arg2 rideServicePresenter:(id)arg3 ;
-(void)configureWithThreadKey:(id)arg1 ;
-(void)locationAttachmentDetailView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)_performLocationAction:(long long)arg1 ;
-(void)_openInAppleMaps;
-(void)_copyToPasteboard;
-(void)_requestRideWithProviderName:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
