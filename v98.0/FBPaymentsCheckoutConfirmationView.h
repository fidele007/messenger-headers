/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBNetworkImageViewDelegate.h>
#import <Messenger/FBPaymentsExpandableItem.h>

@protocol FBPaymentsLoadingIndicatorControlling, FBPaymentsExpandableViewControllerExpandingDelegate, UILayoutSupport;
@class UIImageView, FBNetworkImageView, FBPaymentsEdgeInsetsWrapperView, UILabel, UIView, FBPaymentsHorizontalSeparatorView, NSAttributedString, NSString, FBPaymentsImage;

@interface FBPaymentsCheckoutConfirmationView : UIView <FBNetworkImageViewDelegate, FBPaymentsExpandableItem> {

	UIImageView* _checkmarkImageView;
	FBNetworkImageView* _merchantLogoImageView;
	FBPaymentsEdgeInsetsWrapperView* _confirmationTextLabelWrapperView;
	UILabel* _confirmationTextLabel;
	FBPaymentsEdgeInsetsWrapperView* _confirmationTitleLabelWrapperView;
	UILabel* _confirmationTitleLabel;
	UIView* _actionsView;
	FBPaymentsHorizontalSeparatorView* _separatorView;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	UILabel* _loadingStatusTextView;
	BOOL _isLoading;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<UILayoutSupport> _topLayoutGuide;
	NSAttributedString* _confirmationAttributedText;
	NSString* _confirmationTitleText;
	FBPaymentsImage* _merchantLogo;

}

@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide;                                                            //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                                                                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) NSString * loadingStatusText; 
@property (nonatomic,copy) NSAttributedString * confirmationAttributedText;                                                 //@synthesize confirmationAttributedText=_confirmationAttributedText - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitleText;                                                                //@synthesize confirmationTitleText=_confirmationTitleText - In the implementation block
@property (nonatomic,copy) FBPaymentsImage * merchantLogo;                                                                  //@synthesize merchantLogo=_merchantLogo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(NSAttributedString *)confirmationAttributedText;
-(NSString *)confirmationTitleText;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)_updateWithLoadingStatus;
-(id)_visualBlocks;
-(void)setLoadingStatusText:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setLoadingStatusVisibility:(BOOL)arg1 ;
-(void)_setLoadingStatusText:(id)arg1 ;
-(id)initWithActionsView:(id)arg1 imageDownloader:(id)arg2 ;
-(void)setMerchantLogo:(FBPaymentsImage *)arg1 ;
-(void)setLoadingStatusText:(NSString *)arg1 ;
-(NSString *)loadingStatusText;
-(void)setConfirmationAttributedText:(NSAttributedString *)arg1 ;
-(void)setConfirmationTitleText:(NSString *)arg1 ;
-(FBPaymentsImage *)merchantLogo;
-(void)layoutSubviews;
-(id<UILayoutSupport>)topLayoutGuide;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
@end

