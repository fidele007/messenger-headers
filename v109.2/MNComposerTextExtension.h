/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerPrimaryExtension.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNComposerExtensionDelegate, MNComposerExtensionSendDelegate, MNComposerExtensionEditDelegate, MNActionNuxPresenter, MNComposerTooltipPresenting, MNComposerTextExtensionDelegate;
@class MNComposerExtensionKeyboardPresentationStrategy, FBLazyCreator, NSString, UIColor;

@interface MNComposerTextExtension : NSObject <MNComposerPrimaryExtension, FBClassProvidable> {

	MNComposerExtensionKeyboardPresentationStrategy* _presentationStrategy;
	FBLazyCreator* _composerIconCreator;
	id<MNComposerExtensionDelegate> _delegate;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	NSString* _placeholderText;
	NSString* _searchPlaceholderText;
	UIColor* _tintColor;
	id<MNActionNuxPresenter> _actionNuxPresenter;
	id<MNComposerTooltipPresenting> _tooltipPresenter;
	id<MNComposerTextExtensionDelegate> _textExtensionDelegate;

}

@property (assign,nonatomic,__weak) id<MNComposerTextExtensionDelegate> textExtensionDelegate;              //@synthesize textExtensionDelegate=_textExtensionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate;                       //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate;                       //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText;                                             //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText;                                       //@synthesize searchPlaceholderText=_searchPlaceholderText - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                           //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter;                                   //@synthesize actionNuxPresenter=_actionNuxPresenter - In the implementation block
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
@property (nonatomic,retain) id<MNComposerTooltipPresenting> tooltipPresenter;                              //@synthesize tooltipPresenter=_tooltipPresenter - In the implementation block
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
-(void)didUpdateComposingContext:(BOOL)arg1 ;
-(NSString *)searchPlaceholderText;
-(long long)primaryExtensionType;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(void)didPresentMoreDrawer;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id<MNActionNuxPresenter>)arg1 ;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(id<MNComposerTooltipPresenting>)tooltipPresenter;
-(void)setTooltipPresenter:(id<MNComposerTooltipPresenting>)arg1 ;
-(id<MNComposerTextExtensionDelegate>)textExtensionDelegate;
-(void)setTextExtensionDelegate:(id<MNComposerTextExtensionDelegate>)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id<MNComposerExtensionDelegate>)arg1 ;
-(id<MNComposerExtensionDelegate>)delegate;
-(long long)category;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)tabBarItem;
-(long long)soundName;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(void)setEditDelegate:(id<MNComposerExtensionEditDelegate>)arg1 ;
-(NSString *)placeholderText;
-(void)tearDown;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<MNComposerExtensionSendDelegate>)arg1 ;
-(BOOL)isThirdParty;
@end

