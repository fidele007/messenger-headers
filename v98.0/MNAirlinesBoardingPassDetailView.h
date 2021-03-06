/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@class FBImageDownloader, MNBusinessStackedContainerView, UIView, MNAirlinesFlightInfoSectionView, MNBusinessImageView, FBFourRoundedCornerView, UIButton, MNBusinessNavigationHandler, MNAirlinesBoardingPassDetailViewModel;

@interface MNAirlinesBoardingPassDetailView : UIScrollView {

	FBImageDownloader* _imageDownloader;
	MNBusinessStackedContainerView* _headerView;
	MNBusinessStackedContainerView* _passengerAndOptionalFieldView;
	UIView* _separator1View;
	MNAirlinesFlightInfoSectionView* _flightInfoSectionView;
	MNBusinessStackedContainerView* _firstRowFieldsView;
	MNBusinessStackedContainerView* _secondRowFieldsView;
	MNBusinessImageView* _qrHeaderImageView;
	MNBusinessImageView* _qrImageView;
	FBFourRoundedCornerView* _qrImageViewRoundedCorners;
	UIView* _separator2View;
	UIButton* _shareButton;
	UIView* _separator3View;
	UIButton* _messageAirlineButton;
	MNBusinessNavigationHandler* _navigationHandler;
	MNAirlinesBoardingPassDetailViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (nonatomic,copy) MNAirlinesBoardingPassDetailViewModel * viewModel;                     //@synthesize viewModel=_viewModel - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)setNavigationHandler:(MNBusinessNavigationHandler *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)_didTapShareButton;
-(void)_didTapMessageAirlinesButton;
-(void)layoutSubviews;
-(MNAirlinesBoardingPassDetailViewModel *)viewModel;
-(void)setViewModel:(MNAirlinesBoardingPassDetailViewModel *)arg1 ;
@end

