/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBCameraPreviewComponentViewDelegate;
@interface FBCameraPreviewComponentView : UIView {

	id<FBCameraPreviewComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCameraPreviewComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didSingleTapView:(id)arg1 ;
-(void)_didDoubleTapView:(id)arg1 ;
-(void)_didPinchView:(id)arg1 ;
-(void)setDelegate:(id<FBCameraPreviewComponentViewDelegate>)arg1 ;
-(id)init;
-(id<FBCameraPreviewComponentViewDelegate>)delegate;
@end
