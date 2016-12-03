/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNLocationPickerViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNLocationPickerViewControlling, MNModalPresentation, MNLocationPickerPresenterDelegate;
@class UIViewController, FBLazyCreator, UIAlertView, FBMLocationUpdateRequest, NSString;

@interface MNLocationPickerPresenter : NSObject <MNLocationPickerViewControllerDelegate, UIAlertViewDelegate, FBClassProvidable> {

	UIViewController*<MNLocationPickerViewControlling> _locationPickerViewController;
	id<MNModalPresentation> _navigationCoordinator;
	FBLazyCreator* _locationRequestHandlerCreator;
	UIAlertView* _alertView;
	FBMLocationUpdateRequest* _locationUpdateRequest;
	id<MNLocationPickerPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentLocationPickerViewController:(id)arg1 ;
-(id)_locationPickerViewController;
-(void)_requestLocationUpdate;
-(void)_cancelPendingLocationUpdateRequest;
-(void)_showAlertDialogToEnableLocationServices;
-(void)locationPickerViewController:(id)arg1 didSendWithLocationAttachmentData:(id)arg2 ;
-(void)_dismissLocationPickerViewController;
-(void)_presentLocationPickerViewController:(id)arg1 ;
-(void)_userDidDenyLocationPermission;
-(void)_locationPickerViewControllerDidDismiss;
-(void)_setAlertView:(id)arg1 ;
-(void)setDelegate:(id<MNLocationPickerPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNLocationPickerPresenterDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

