/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNPrimerViewDelegate.h>

@protocol MNRequirePushViewDelegate;
@class MNLoadingIndicator, MNPrimerAlertView, FBMPushNotificationRequestContentConfiguration, NSString;

@interface MNRequirePushView : UIView <UIAlertViewDelegate, MNPrimerViewDelegate> {

	MNLoadingIndicator* _progressIndicator;
	MNPrimerAlertView* _primerAlertView;
	FBMPushNotificationRequestContentConfiguration* _notificationRequestContentConfiguration;
	id<MNRequirePushViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRequirePushViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)primerViewDidClickCancel:(id)arg1 ;
-(void)primerViewDidClickOk:(id)arg1 ;
-(void)startArrowViewBouncingAnimation;
-(void)_removePrimerView;
-(id)initWithFrame:(CGRect)arg1 notificationRequestContentConfiguration:(id)arg2 ;
-(void)presentRequirePushPrimerAllowCancel:(BOOL)arg1 ;
-(void)displayProgress;
-(void)setDelegate:(id<MNRequirePushViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNRequirePushViewDelegate>)delegate;
@end

