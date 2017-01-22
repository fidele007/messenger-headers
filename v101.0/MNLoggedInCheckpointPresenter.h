/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNavigationListener.h>
#import <Messenger/FBLoggedInCheckpointPresenting.h>

@protocol MNModalPresentation;
@class MNNavigationController, FBMNavigationCoordinatorAdapter, UIViewController, NSString;

@interface MNLoggedInCheckpointPresenter : NSObject <MNNavigationListener, FBLoggedInCheckpointPresenting> {

	id<MNModalPresentation> _modalPresenter;
	MNNavigationController* _webViewControllerNavigationController;
	FBMNavigationCoordinatorAdapter* _navigationCoordinatorAdapter;
	UIViewController* _webViewController;
	/*^block*/id _checkpointWasDismissed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDismissViewController:(id)arg1 ;
-(void)showCheckpointWebView:(id)arg1 whenClosed:(/*^block*/id)arg2 ;
-(void)loadCheckpointReactNativeView:(/*^block*/id)arg1 ;
-(id)initWithModelPresenter:(id)arg1 navigationCoordinatorAdapter:(id)arg2 ;
@end
