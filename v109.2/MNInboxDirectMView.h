/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, MNInboxDirectMViewModel;

@interface MNInboxDirectMView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIImageView* _imageView;
	MNInboxDirectMViewModel* _viewModel;

}

@property (nonatomic,copy) MNInboxDirectMViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)cellHeight;
-(void)_updateSubviewsWithViewModel;
-(void)updateImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_layoutContentViews;
-(MNInboxDirectMViewModel *)viewModel;
-(void)setViewModel:(MNInboxDirectMViewModel *)arg1 ;
@end

