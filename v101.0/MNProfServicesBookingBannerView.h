/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNProfServicesBookingBannerViewDelegate;
@class MNProfServicesBookingBannerViewModel, MNProfServicesBookingBannerDetailView, MNProfServicesBookingBannerOverviewView, MNProfServicesBookingSharedBannerView, UIView;

@interface MNProfServicesBookingBannerView : UIView {

	MNProfServicesBookingBannerViewModel* _bannerViewModel;
	MNProfServicesBookingBannerDetailView* _detailView;
	MNProfServicesBookingBannerOverviewView* _upperOverviewView;
	MNProfServicesBookingBannerOverviewView* _bottomOverviewView;
	MNProfServicesBookingSharedBannerView* _upperSharedBannerView;
	MNProfServicesBookingSharedBannerView* _lowerSharedBannerView;
	UIView* _separatorView;
	BOOL _isServicesVerticalRequestTimeRedesign;
	id<MNProfServicesBookingBannerViewDelegate> _delegate;

}
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 ;
-(void)configureWithBannerViewModel:(id)arg1 viewerFBID:(id)arg2 pageID:(id)arg3 ;
-(void)setBannerDetailViewAcceptDeclineButtonEnabled:(BOOL)arg1 ;
-(void)_configureConsumerSharedBannerWithBannerViewModel:(id)arg1 ;
-(void)_configureAdminSharedBannerWithBannerViewModel:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

