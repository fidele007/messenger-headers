/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxProvider.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNPushInstructionsController, MNQuickPromotionThreadListQPPresenter, MNQuickPromotionThreadViewQPPresenter, MNQuickPromotionComposeNewThreadQPPresenter, FBUserSession, MNQuickPromotionInterstitialDataSource, MNUniqueIDInterstitialController, MNSecureThreadInterstitialController, MNPostFacebookDeactivationNuxController, MNEventsReminderInterstitialController, FBMobileConfigContextManager, NSString;

@interface MNNuxProvider : NSObject <FBNuxProvider, FBClassProvidable> {

	MNPushInstructionsController* _pushInstructionsController;
	MNQuickPromotionThreadListQPPresenter* _threadListBannerQPPresenter;
	MNQuickPromotionThreadViewQPPresenter* _threadViewBannerQPPresenter;
	MNQuickPromotionComposeNewThreadQPPresenter* _composeNewThreadBannerQPPresenter;
	FBUserSession* _session;
	MNQuickPromotionInterstitialDataSource* _quickPromotionInterstitialDataSource;
	MNUniqueIDInterstitialController* _uniqueIDInterstitialController;
	id<FBProvider> _uniqueIDInterstitialControllerProvider;
	MNSecureThreadInterstitialController* _secureThreadInterstitialController;
	id<FBProvider> _secureThreadInterstitialControllerProvider;
	MNPostFacebookDeactivationNuxController* _postFacebookDeactivationNuxController;
	id<FBProvider> _eventsReminderInterstitialControllerProvider;
	MNEventsReminderInterstitialController* _eventsReminderInterstitialController;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)nuxPresenters;
@end

