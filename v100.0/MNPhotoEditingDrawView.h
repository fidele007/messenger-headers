/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNPhotoEditingDrawViewDelegate;
@class UIView, UIImageView, UIButton;

@interface MNPhotoEditingDrawView : UIView {

	UIView* _originalMediaView;
	UIImageView* _editOverlayImageView;
	UIView* _drawView;
	UIButton* _undoButton;
	id<MNPhotoEditingDrawViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingDrawViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_undoTapped:(id)arg1 ;
-(id)initWithOriginalMediaView:(id)arg1 drawView:(id)arg2 ;
-(void)setShowsUndoButton:(BOOL)arg1 ;
-(void)setEditOverlayImage:(id)arg1 ;
-(void)setDelegate:(id<MNPhotoEditingDrawViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPhotoEditingDrawViewDelegate>)delegate;
@end

