/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNThreadNullStateCTAHandlerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNThreadNullStateCTAViewControllerDelegate;
@class FBUserSession, FBMobileConfigContextManager, FBMUserInvalidator, FBImageDownloader, MNBusinessNavigationHandler, MNBusinessCTAFactory, MNThreadNullStateCTAHandler, MNThreadNullStateCTAView, MNThreadViewModel, MNThreadNullStateCTAViewModel, NSString;

@interface MNThreadNullStateCTAViewController : UIViewController <MNThreadNullStateCTAHandlerDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	FBMUserInvalidator* _userInvalidator;
	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	MNBusinessCTAFactory* _ctaFactory;
	MNThreadNullStateCTAHandler* _ctaHandler;
	MNThreadNullStateCTAView* _nullStateCTAView;
	MNThreadViewModel* _threadViewModel;
	MNThreadNullStateCTAViewModel* _threadNullStateCTAViewModel;
	BOOL _shouldShow;
	id<MNThreadNullStateCTAViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadNullStateCTAViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(BOOL)shouldShowThreadNullStateCTA;
-(void)showThreadNullStateCTA;
-(void)threadNullStateCTAHandler:(id)arg1 didTapShowComposerButtonView:(id)arg2 ;
-(id)initWithSession:(id)arg1 configManager:(id)arg2 userInvalidator:(id)arg3 imageDownloader:(id)arg4 navigationHandler:(id)arg5 ctaFactory:(id)arg6 ctaHandler:(id)arg7 ;
-(id)_threadNullStateCTAViewModelWithCTAs:(id)arg1 threadViewModel:(id)arg2 ;
-(BOOL)_useWelcomeScreenCTA;
-(id)_viewModelForDisclaimerTextForUser:(id)arg1 cta:(id)arg2 ;
-(void)setDelegate:(id<MNThreadNullStateCTAViewControllerDelegate>)arg1 ;
-(id<MNThreadNullStateCTAViewControllerDelegate>)delegate;
-(void)loadView;
-(BOOL)isAvailable;
@end
