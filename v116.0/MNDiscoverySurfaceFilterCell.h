/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNDiscoverySurfaceFilterCellDelegate;
@class FBRichTextView, UIImageView, UIButton, MNDiscoverySurfaceFilterCellViewModel;

@interface MNDiscoverySurfaceFilterCell : UIView {

	FBRichTextView* _label;
	UIImageView* _cancelImageView;
	UIButton* _toggleSelectionButton;
	id<MNDiscoverySurfaceFilterCellDelegate> _delegate;
	MNDiscoverySurfaceFilterCellViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNDiscoverySurfaceFilterCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNDiscoverySurfaceFilterCellViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)didTapToggleSelectionButton;
-(void)setViewModel:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNDiscoverySurfaceFilterCellDelegate>)arg1 ;
-(void)dealloc;
-(id<MNDiscoverySurfaceFilterCellDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MNDiscoverySurfaceFilterCellViewModel *)viewModel;
-(void)setViewModel:(MNDiscoverySurfaceFilterCellViewModel *)arg1 ;
@end

