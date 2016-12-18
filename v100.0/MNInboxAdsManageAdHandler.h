/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModalPresentation, FBIntentHandler, MNInboxAdsManageAdHandlerDelegate;
@interface MNInboxAdsManageAdHandler : NSObject {

	id<MNModalPresentation> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id<MNInboxAdsManageAdHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxAdsManageAdHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_adPreferencesActionWithAdPreferencesLink:(id)arg1 adProperties:(id)arg2 ;
-(void)_handleAdPreferencesActionWithAdPreferencesLink:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 intentHandler:(id)arg2 ;
-(void)presentManageAdControllerForAdViewModel:(id)arg1 ;
-(id)_hideAdActionWithAdViewModel:(id)arg1 ;
-(id)_adFeedbackActionWithAdViewModel:(id)arg1 ;
-(void)_handleHideAdActionWithAdViewModel:(id)arg1 ;
-(void)_handleAdFeedbackActionWithAdViewModel:(id)arg1 ;
-(void)setDelegate:(id<MNInboxAdsManageAdHandlerDelegate>)arg1 ;
-(id<MNInboxAdsManageAdHandlerDelegate>)delegate;
@end
