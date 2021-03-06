/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNProfServicesBookingBannerViewControllerDelegate.h>

@protocol MNNavigationPluginService;
@class FBLazyCreator, FBUserSession, MNProfServicesBookingBannerViewController, NSString;

@interface MNProfServicesBookingToastCoordinator : NSObject <MNProfServicesBookingBannerViewControllerDelegate> {

	FBLazyCreator* _toastLazyCreator;
	FBUserSession* _userSession;
	id<MNNavigationPluginService> _navigationService;
	MNProfServicesBookingBannerViewController* _bannerViewController;

}

@property (nonatomic,retain) MNProfServicesBookingBannerViewController * bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateToast;
-(id)initWithSession:(id)arg1 navigationService:(id)arg2 ;
-(MNProfServicesBookingBannerViewController *)bannerViewController;
-(id)toastWithBannerViewModel:(id)arg1 bookingViewerContext:(id)arg2 ;
-(void)setBannerViewController:(MNProfServicesBookingBannerViewController *)arg1 ;
@end

