/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBCameraPermissionsEducationPresenter.h>

@protocol FBCameraPermissionsEducationPresenterDelegate;
@class NSString;

@interface FBCameraPermissionsDefaultEducationPresenter : NSObject <UIAlertViewDelegate, FBCameraPermissionsEducationPresenter> {

	id<FBCameraPermissionsEducationPresenterDelegate> _delegate;
	unsigned long long _requiredPermissions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBCameraPermissionsEducationPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long requiredPermissions;                                         //@synthesize requiredPermissions=_requiredPermissions - In the implementation block
@property (nonatomic,readonly) BOOL canPresent; 
-(unsigned long long)requiredPermissions;
-(void)setRequiredPermissions:(unsigned long long)arg1 ;
-(BOOL)canPresent;
-(void)setDelegate:(id<FBCameraPermissionsEducationPresenterDelegate>)arg1 ;
-(id<FBCameraPermissionsEducationPresenterDelegate>)delegate;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)present;
@end

