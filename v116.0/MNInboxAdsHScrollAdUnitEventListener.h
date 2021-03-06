/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBusinessButtonViewDelegate.h>
#import <Messenger/MNInboxAdsViewDelegate.h>
#import <Messenger/MNHorizontalScrollInboxUnitViewListening.h>

@class FBUserSession, MNAdaptiveImageDownloader, MNProfileImageViewController, MNThreadImageManager, MNInboxAdsManageAdHandler, MNInboxAdsClickHandler, MNInboxAdsImpressionLogger, MNInboxImpressionTracker, NSMutableDictionary, NSString;

@interface MNInboxAdsHScrollAdUnitEventListener : NSObject <MNBusinessButtonViewDelegate, MNInboxAdsViewDelegate, MNHorizontalScrollInboxUnitViewListening> {

	FBUserSession* _session;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	MNInboxAdsManageAdHandler* _manageAdHandler;
	MNInboxAdsClickHandler* _adClickHandler;
	MNInboxAdsImpressionLogger* _inboxAdsimpressionLogger;
	MNInboxImpressionTracker* _inboxUnitImpressionTracker;
	NSMutableDictionary* _imageDownloaderTokens;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 adaptiveImageDownloader:(id)arg2 profileImageViewController:(id)arg3 threadImageManager:(id)arg4 manageAdHandler:(id)arg5 inboxAdClickHandler:(id)arg6 inboxAdsimpressionLogger:(id)arg7 inboxUnitImpressionTracker:(id)arg8 ;
-(void)buttonViewWasClicked:(id)arg1 ;
-(void)_logInboxItemClickedForAdViewModel:(id)arg1 clickTarget:(id)arg2 ;
-(void)didTapSettingsButtonForAdsView:(id)arg1 ;
-(void)viewWillAppear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidDisappear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidTap:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidHighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidUnhighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewModelsWillAppear:(id)arg1 ;
-(void)viewModelsWillDisappear:(id)arg1 ;
-(void)viewDidBeginScrolling:(id)arg1 ;
-(void)viewDidEndScrolling:(id)arg1 ;
@end

