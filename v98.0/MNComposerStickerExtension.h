/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNStickerTrayViewControllerDelegate.h>
#import <Messenger/MNComposerPrimaryExtension.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNComposerExtensionPresentationStrategy, MNComposerExtensionSendDelegate, MNComposerExtensionEditDelegate, MNActionNuxPresenter, MNComposerContentSearchExtensionDelegate;
@class FBUserSession, FBMStickerManager, MNStickerContentSearchModeExperimentContext, MNStickerTrayViewController, MNStickerStorePresenter, FBAnalytics, FBExperimentManager, FBLazyCreator, MNComposerPreviewViewController, NSString, UIColor;

@interface MNComposerStickerExtension : NSObject <MNStickerTrayViewControllerDelegate, MNComposerPrimaryExtension, FBClassProvidable> {

	id<FBProvider> _stickerTrayViewControllerProvider;
	FBUserSession* _session;
	FBMStickerManager* _stickerManager;
	MNStickerContentSearchModeExperimentContext* _stickerContentSearchModeExperimentContext;
	MNStickerTrayViewController* _stickerTrayViewController;
	MNStickerStorePresenter* _stickerStorePresenter;
	FBAnalytics* _analytics;
	FBExperimentManager* _experimentManager;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;
	BOOL _isSearching;
	FBLazyCreator* _composerIconCreator;
	id<FBProvider> _composerPreviewViewControllerProvider;
	MNComposerPreviewViewController* _currentPreviewViewController;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	NSString* _placeholderText;
	UIColor* _tintColor;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNComposerContentSearchExtensionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNComposerContentSearchExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate;                   //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate;                   //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText;                                         //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor;                                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                               //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)openStickerPack:(id)arg1 ;
-(id)_composerIcon;
-(void)setUpWithInitiator:(id)arg1 ;
-(void)applyOptions:(id)arg1 ;
-(id)extensionModule;
-(BOOL)shouldPromote;
-(BOOL)isInSegmentedControl;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(long long)inputSource;
-(BOOL)isEligible;
-(id)activeSubExtension;
-(id)subExtensions;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<MNComposerExtensionSendDelegate>)arg1 ;
-(NSString *)searchPlaceholderText;
-(id)viewControllerForPresentation;
-(void)didUpdateComposingContext;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(long long)primaryExtensionType;
-(void)_initStickerTrayViewControllerIfNecessary;
-(id)_appIds;
-(void)_initStickerContentSearchModeExperimentContextIfNecessary;
-(void)_didSelectSticker:(id)arg1 ;
-(void)stickerTrayViewController:(id)arg1 didInvokeContentSearchWithQuery:(id)arg2 ;
-(void)stickerTrayViewController:(id)arg1 didSelectSticker:(id)arg2 ;
-(void)stickerTrayViewController:(id)arg1 didSelectStickerStoreWith:(unsigned long long)arg2 fromSourceView:(id)arg3 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id<MNComposerContentSearchExtensionDelegate>)arg1 ;
-(id<MNComposerContentSearchExtensionDelegate>)delegate;
-(long long)category;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)tabBarItem;
-(long long)soundName;
-(void)setEditDelegate:(id<MNComposerExtensionEditDelegate>)arg1 ;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(NSString *)placeholderText;
-(void)tearDown;
-(BOOL)isThirdParty;
@end

