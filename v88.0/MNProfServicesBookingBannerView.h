/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNProfServicesBookingBannerViewModel, MNProfServicesBookingBannerDetailView, MNProfServicesBookingBannerOverviewView, UIView;

@interface MNProfServicesBookingBannerView : UIView {

	MNProfServicesBookingBannerViewModel* _bannerViewModel;
	MNProfServicesBookingBannerDetailView* _detailView;
	MNProfServicesBookingBannerOverviewView* _upperOverviewView;
	MNProfServicesBookingBannerOverviewView* _bottomOverviewView;
	UIView* _separatorView;

}
-(void)configureWithBannerViewModel:(id)arg1 viewerFBID:(id)arg2 pageID:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
