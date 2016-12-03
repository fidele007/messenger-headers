/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@class FBUserSession, FBImageDownloader, MNBusinessNavigationHandler, MNAirlinesHeaderView, UIView, MNBusinessStackedContainerView, MNAirlinesFlightInfoSectionView, UIButton, MNAirlinesMessageBoardingPassViewModel, NSString;

@interface MNAirlinesMessageBoardingPassView : UIControl <MNAttachmentView> {

	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	MNAirlinesHeaderView* _headerView;
	UIView* _separator1View;
	MNBusinessStackedContainerView* _passengerSeatAssignmentView;
	UIView* _separator2View;
	MNAirlinesFlightInfoSectionView* _flightInfoSectionView;
	UIButton* _viewBoardingPassButton;
	MNAirlinesMessageBoardingPassViewModel* _viewModel;

}

@property (nonatomic,copy) MNAirlinesMessageBoardingPassViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didSelectMessage;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 imageDownloader:(id)arg3 navigationHandler:(id)arg4 ;
-(void)_didTapBoardingPassButton;
-(void)_showBoardingPassDetailView;
-(void)layoutSubviews;
-(MNAirlinesMessageBoardingPassViewModel *)viewModel;
-(void)setViewModel:(MNAirlinesMessageBoardingPassViewModel *)arg1 ;
@end

