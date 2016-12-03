/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSDictionary, MNJoinableGroupActionHeaderViewModel;

@interface MNJoinableGroupActionHeaderLabelView : UIView {

	UILabel* _groupTitleLabel;
	UILabel* _activeTitleLabel;
	UILabel* _memberCountTitleLabel;
	NSDictionary* _labelsByKey;
	MNJoinableGroupActionHeaderViewModel* _viewModel;

}

@property (nonatomic,copy) MNJoinableGroupActionHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)_sizesForLabelViewsThatFit:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNJoinableGroupActionHeaderViewModel *)viewModel;
-(void)setViewModel:(MNJoinableGroupActionHeaderViewModel *)arg1 ;
@end

