/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNComposerOverflowTabViewControllerDelegate.h>
#import <Messenger/MNComposerMoreDrawerViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNComposerPrimaryExtension.h>
#import <Messenger/MNComposerBadging.h>

@protocol FBProvider, MNModalPresentation, MNComposerBadgingDelegate, MNActionNuxPresenter, MNComposerTooltipPresenting;
@class MNComposerMoreDrawerViewController, MNComposerOverflowTabViewController, MNPlatformComposerGatingChecker, MNComposerConfiguration, FBMobileConfigContextManager, MNImageRequester, UIViewController, FBLazyCreator, MNComposerExtensionModalPresentationStrategy, NSArray, NSString, UIColor;

@interface MNComposerOverflowExtension : MNAbstractComposerTrayExtension <MNComposerOverflowTabViewControllerDelegate, MNComposerMoreDrawerViewControllerDelegate, FBClassProvidable, MNComposerPrimaryExtension, MNComposerBadging> {

	id<FBProvider> _composerMoreDrawerViewControllerProvider;
	MNComposerMoreDrawerViewController* _composerMoreDrawerViewController;
	id<FBProvider> _composerOverflowTabViewControllerProvider;
	MNComposerOverflowTabViewController* _composerOverflowTabViewController;
	MNPlatformComposerGatingChecker* _platformComposerGatingChecker;
	id<MNModalPresentation> _modalPresenter;
	MNComposerConfiguration* _composerConfiguration;
	FBMobileConfigContextManager* _configManager;
	MNImageRequester* _imageRequester;
	UIViewController* _presentedNavigationController;
	FBLazyCreator* _composerIconCreator;
	MNComposerExtensionModalPresentationStrategy* _presentationStrategy;
	long long _badgeCount;
	id<MNComposerBadgingDelegate> _badgingDelegate;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNComposerTooltipPresenting> _tooltipPresenter;
	NSArray* _primaryExtensions;
	NSArray* _extensions;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowExtensionDelegate> delegate; 
@property (nonatomic,readonly) MNComposerMoreDrawerViewController * moreDrawerViewController; 
@property (nonatomic,copy) NSArray * primaryExtensions;                                                    //@synthesize primaryExtensions=_primaryExtensions - In the implementation block
@property (nonatomic,copy) NSArray * extensions;                                                           //@synthesize extensions=_extensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate; 
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                                  //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
@property (nonatomic,retain) id<MNComposerTooltipPresenting> tooltipPresenter;                             //@synthesize tooltipPresenter=_tooltipPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerBadgingDelegate> badgingDelegate;                         //@synthesize badgingDelegate=_badgingDelegate - In the implementation block
@property (assign,nonatomic) long long badgeCount;                                                         //@synthesize badgeCount=_badgeCount - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)_isDynamicComposerEnabled;
-(id)_composerIcon;
-(void)setUpWithInitiator:(id)arg1 ;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(long long)inputSource;
-(void)didUpdateComposingContext:(BOOL)arg1 ;
-(NSString *)searchPlaceholderText;
-(id)viewControllerForPresentation;
-(long long)primaryExtensionType;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(void)didPresentMoreDrawer;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(id<MNComposerTooltipPresenting>)tooltipPresenter;
-(void)setTooltipPresenter:(id<MNComposerTooltipPresenting>)arg1 ;
-(id<MNComposerBadgingDelegate>)badgingDelegate;
-(void)setBadgingDelegate:(id<MNComposerBadgingDelegate>)arg1 ;
-(void)composerMoreDrawerViewControllerDidBecomeActive;
-(void)composerMoreDrawerViewController:(id)arg1 didSelectItemWithExtensionIdentifier:(id)arg2 ;
-(void)composerMoreDrawerViewController:(id)arg1 didSelectExtension:(id)arg2 ;
-(void)composerMoreDrawerViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composerMoreDrawerViewController:(id)arg1 dismissWithCompletion:(/*^block*/id)arg2 ;
-(void)_initComposerMoreDrawerViewControllerIfNeeded;
-(void)_updateComposerMoreDrawerViewController;
-(void)_updateComposerOverflowTabViewController;
-(void)_logExposureForExperiments;
-(void)_presentOverflowTabAsModal;
-(void)_initModalNavigationControllerIfNeeded;
-(void)_dismissModalOverflowTabWithCompletion:(/*^block*/id)arg1 ;
-(void)_releaseComposerOverflowTabViewController;
-(void)_initComposerOverflowTabViewControllerIfNeeded;
-(BOOL)_isModalOverflowTabPresented;
-(void)composerOverflowTabViewController:(id)arg1 didSelectItemWithExtensionIdentifier:(id)arg2 ;
-(void)composerOverflowTabViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composerOverflowTabViewControllerDidBecomeActive;
-(MNComposerMoreDrawerViewController *)moreDrawerViewController;
-(void)setPrimaryExtensions:(NSArray *)arg1 ;
-(void)updateOverflownTabBarItems;
-(void)didSelectComposerBadging;
-(void)dismissModalOverflowTabIfPresented;
-(NSArray *)primaryExtensions;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
-(NSArray *)extensions;
-(void)setExtensions:(NSArray *)arg1 ;
-(void)tearDown;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
@end
