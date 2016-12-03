/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, MNInviteSender, MNUserSetUpStatePersister, FBMLoggedInUserInfoManager, MNInvitesInterstitialImpressionStore, NSString;

@interface MNInvitesInterstitialControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	MNInviteSender* _inviteSender;
	MNUserSetUpStatePersister* _setUpStatePersister;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNInvitesInterstitialImpressionStore* _invitesInterstitialImpressionStore;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                                 //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNInviteSender * inviteSender;                                                          //@synthesize inviteSender=_inviteSender - In the implementation block
@property (nonatomic,readonly) MNUserSetUpStatePersister * setUpStatePersister;                                        //@synthesize setUpStatePersister=_setUpStatePersister - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                                   //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,readonly) MNInvitesInterstitialImpressionStore * invitesInterstitialImpressionStore;              //@synthesize invitesInterstitialImpressionStore=_invitesInterstitialImpressionStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(MNInvitesInterstitialImpressionStore *)invitesInterstitialImpressionStore;
-(MNUserSetUpStatePersister *)setUpStatePersister;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(MNInviteSender *)inviteSender;
@end
