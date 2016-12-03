/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPhotoEditingControlsViewDelegate;
@class NSMutableArray, UIButton;

@interface MNPhotoEditingControlsView : UIView {

	NSMutableArray* _editingControlsViews;
	UIButton* _drawButton;
	UIButton* _textButton;
	UIButton* _trashButton;
	id<MNPhotoEditingControlsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_drawButtonPressed:(id)arg1 ;
-(void)_textButtonPressed:(id)arg1 ;
-(void)_layoutEditingControlsView;
-(void)_showButtons;
-(void)changeSelectedButtons:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withEditOptions:(BOOL)arg2 ;
-(void)addEditingControlsView:(id)arg1 ;
-(BOOL)intersectsWithTrashButton:(id)arg1 ;
-(void)showTrashButton:(BOOL)arg1 ;
-(void)setDelegate:(id<MNPhotoEditingControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPhotoEditingControlsViewDelegate>)delegate;
@end

