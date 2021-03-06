/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComposerPhotoOverlayAttachmentGestureHandler.h>

@protocol FBComposerPhotoOverlayAttachmentGestureHandlerDelegate;
@class FBComposerPhotoOverlayGestureHandlerHelpers, FBComposerPhotoOverlayView, NSString;

@interface FBComposerPhotoOverlayBasicGestureHandler : NSObject <FBComposerPhotoOverlayAttachmentGestureHandler> {

	CGPoint _attachmentStartCenter;
	CGRect _originalSelectedAttachmentBounds;
	FBComposerPhotoOverlayGestureHandlerHelpers* _gestureHandlerHelper;
	id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> _delegate;
	FBComposerPhotoOverlayView* _photoOverlayView;

}

@property (nonatomic,retain) FBComposerPhotoOverlayView * photoOverlayView;                                           //@synthesize photoOverlayView=_photoOverlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handlePinchGesture:(id)arg1 ;
-(FBComposerPhotoOverlayView *)photoOverlayView;
-(void)setPhotoOverlayView:(FBComposerPhotoOverlayView *)arg1 ;
-(id)initWithPhotoOverlayView:(id)arg1 gestureHandlerDelegate:(id)arg2 ;
-(void)handleRotationGesture:(id)arg1 ;
-(void)handleDoubleTapGesture:(id)arg1 ;
-(void)setDelegate:(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)arg1 ;
-(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)delegate;
-(void)handlePanGesture:(id)arg1 ;
@end

