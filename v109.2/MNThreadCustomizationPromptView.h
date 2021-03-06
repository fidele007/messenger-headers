/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPickerViewDelegate.h>

@protocol MNThreadCustomizationPromptViewDelegate;
@class UILabel, FBPickerView, UIView, FBImageDownloader, MNThreadCustomizationPromptViewModel, NSString;

@interface MNThreadCustomizationPromptView : UIView <FBPickerViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FBPickerView* _pickerView;
	UIView* _topBorderView;
	UIView* _bottomBorderView;
	FBImageDownloader* _imageDownloader;
	BOOL _showTopBorder;
	BOOL _showBottomBorder;
	id<MNThreadCustomizationPromptViewDelegate> _delegate;
	MNThreadCustomizationPromptViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNThreadCustomizationPromptViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNThreadCustomizationPromptViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                                       //@synthesize showTopBorder=_showTopBorder - In the implementation block
@property (assign,nonatomic) BOOL showBottomBorder;                                                    //@synthesize showBottomBorder=_showBottomBorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 showTopBorder:(BOOL)arg3 showBottomBorder:(BOOL)arg4 ;
-(void)pickerView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)pickerView:(id)arg1 didDeselectItem:(id)arg2 ;
-(void)setShowBottomBorder:(BOOL)arg1 ;
-(BOOL)showBottomBorder;
-(id)initWithImageDownloader:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNThreadCustomizationPromptViewDelegate>)arg1 ;
-(id<MNThreadCustomizationPromptViewDelegate>)delegate;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(BOOL)showTopBorder;
-(MNThreadCustomizationPromptViewModel *)viewModel;
-(void)setViewModel:(MNThreadCustomizationPromptViewModel *)arg1 ;
@end

