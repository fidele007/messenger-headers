/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNStackedContainerView, MNHeaderView, MNButton;

@interface MNInstructionsView : UIView {

	MNStackedContainerView* _stackedContainerView;
	MNHeaderView* _headerView;
	MNButton* _openSettingsButton;
	MNButton* _dismissButton;
	double _topLayoutGuideLength;

}

@property (nonatomic,readonly) MNButton * openSettingsButton;              //@synthesize openSettingsButton=_openSettingsButton - In the implementation block
@property (nonatomic,readonly) MNButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                  //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 explanation:(id)arg2 instructionSteps:(id)arg3 backgroundColor:(id)arg4 ;
-(MNButton *)openSettingsButton;
-(void)layoutSubviews;
-(MNButton *)dismissButton;
@end
