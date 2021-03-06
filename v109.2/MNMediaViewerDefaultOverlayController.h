/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMediaViewerDefaultOverlayViewDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNMediaViewerOverlayController.h>

@protocol MNPhotoActionHandling, MNMediaViewerOverlayControllerDelegate;
@class MNMediaViewerState, MNMediaViewerDefaultOverlayView, NSString;

@interface MNMediaViewerDefaultOverlayController : NSObject <MNMediaViewerDefaultOverlayViewDelegate, FBClassProvidable, MNMediaViewerOverlayController> {

	id<MNPhotoActionHandling> _photoActionHandler;
	MNMediaViewerState* _mediaViewerState;
	MNMediaViewerDefaultOverlayView* _overlayView;
	id<MNMediaViewerOverlayControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaViewerOverlayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didSetMediaViewerState:(id)arg1 ;
-(void)mediaViewerDefaultOverlayViewDidTapActionButton:(id)arg1 ;
-(void)mediaViewerDefaultOverlayViewDidTapDismissButton:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setDelegate:(id<MNMediaViewerOverlayControllerDelegate>)arg1 ;
-(id<MNMediaViewerOverlayControllerDelegate>)delegate;
-(void)willAppear;
-(void)didAppear;
-(id)overlayView;
@end

