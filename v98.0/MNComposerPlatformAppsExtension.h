/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNComposerOverflowTabViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider, MNModalPresentation, MNComposerContentExtension;
@class MNComposerOverflowTabViewController, MNPlatformComposerGatingChecker, FBLazyCreator, UIViewController, NSArray, NSString;

@interface MNComposerPlatformAppsExtension : MNAbstractComposerTrayExtension <MNComposerOverflowTabViewControllerDelegate, FBViewerContextClassProvidable> {

	id<FBProvider> _composerOverflowTabViewControllerProvider;
	MNComposerOverflowTabViewController* _composerOverflowTabViewController;
	MNPlatformComposerGatingChecker* _platformComposerGatingChecker;
	id<MNModalPresentation> _modalPresenter;
	FBLazyCreator* _composerIconCreator;
	UIViewController* _presentedNavigationController;
	id<MNComposerContentExtension> _contentExtension;
	NSArray* _extensions;

}

@property (nonatomic,retain) id<MNComposerContentExtension> contentExtension;                          //@synthesize contentExtension=_contentExtension - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerPlatformAppsExtensionDelegate> delegate; 
@property (nonatomic,copy) NSArray * extensions;                                                       //@synthesize extensions=_extensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_composerIcon;
-(id)extensionModule;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(BOOL)isEligible;
-(id)viewControllerForPresentation;
-(void)composerMoreDrawerViewControllerDidBecomeActive;
-(void)_updateComposerOverflowTabViewController;
-(id<MNComposerContentExtension>)contentExtension;
-(void)setContentExtension:(id<MNComposerContentExtension>)arg1 ;
-(void)_presentOverflowTabAsModal;
-(void)_initModalNavigationControllerIfNeeded;
-(void)_dismissModalOverflowTabWithCompletion:(/*^block*/id)arg1 ;
-(void)_releaseComposerOverflowTabViewController;
-(void)_initComposerOverflowTabViewControllerIfNeeded;
-(BOOL)_isModalOverflowTabPresented;
-(void)composerOverflowTabViewController:(id)arg1 didSelectItemWithExtensionIdentifier:(id)arg2 ;
-(void)composerOverflowTabViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composerOverflowTabViewControllerDidBecomeActive;
-(void)updatePlatformAppsTabBarItems;
-(void)dismissModalPlatformAppsTabIfPresented;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
-(NSArray *)extensions;
-(void)setExtensions:(NSArray *)arg1 ;
@end

