/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBCameraPermissionsEducationPresenterDelegate.h>

@protocol FBCameraComponentModelManager, FBCameraGenericEvent, FBCameraPermissionsEducationPresenter, FBCameraPermissionsRequesterDelegate;
@class NSString;

@interface FBCameraPermissionsRequester : NSObject <UIAlertViewDelegate, FBCameraPermissionsEducationPresenterDelegate> {

	unsigned long long _requiredPermissions;
	id<FBCameraComponentModelManager> _modelManager;
	id<FBCameraGenericEvent> _closeEvent;
	unsigned long long _permissionAlertAccepted;
	id<FBCameraPermissionsEducationPresenter> _permissionsEducationPresenter;
	id<FBCameraPermissionsRequesterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCameraPermissionsRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModelManager:(id)arg1 requiredPermissions:(unsigned long long)arg2 closeEvent:(id)arg3 permissionsEducationPresenter:(id)arg4 ;
-(void)requestPermissionsAndUpdateModel;
-(void)cameraPermissionsEdutationPresenterDidCancel:(id)arg1 ;
-(void)cameraPermissionsEdutationPresenterDidConfirm:(id)arg1 ;
-(void)_handlePhotoPermissionsAndAssetsLibraryForModel:(id)arg1 ;
-(void)_permissionsDeniedForModel:(id)arg1 state:(long long)arg2 permissionType:(unsigned long long)arg3 ;
-(void)_allPermissionsAcceptedForModel:(id)arg1 ;
-(void)updateRequiredPermission:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBCameraPermissionsRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCameraPermissionsRequesterDelegate>)delegate;
@end

