/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerEmojiExtensionDelegate.h>
#import <Messenger/MNComposerTextExtensionDelegate.h>
#import <Messenger/MNComposerExtension.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNComposerConfiguring, MNComposerKeyboardExtensionDelegate, MNComposerExtensionSendDelegate, MNComposerExtensionEditDelegate;
@class MNComposerTextExtension, MNComposerEmojiExtension, NSString, UIColor;

@interface MNComposerKeyboardExtension : NSObject <MNComposerEmojiExtensionDelegate, MNComposerTextExtensionDelegate, MNComposerExtension, FBClassProvidable> {

	MNComposerTextExtension* _textExtension;
	MNComposerEmojiExtension* _emojiExtension;
	id<MNComposerConfiguring> _composerConfiguration;
	BOOL _active;
	id<MNComposerKeyboardExtensionDelegate> _delegate;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	NSString* _searchPlaceholderText;
	UIColor* _tintColor;
	long long _mode;

}

@property (assign,nonatomic) BOOL active;                                                          //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) long long mode;                                                       //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL usesSystemKeyboard; 
@property (assign,nonatomic,__weak) id<MNComposerKeyboardExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate;              //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText;                              //@synthesize searchPlaceholderText=_searchPlaceholderText - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                  //@synthesize tintColor=_tintColor - In the implementation block
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
-(void)composerEmojiExtension:(id)arg1 didSelectWithCurrentlyPresented:(BOOL)arg2 ;
-(void)composerEmojiExtensionDelegateDidSelectText:(id)arg1 ;
-(void)composerEmojiExtensionWillDismiss:(id)arg1 ;
-(void)addLikePressingListener:(id)arg1 ;
-(void)_setActive:(BOOL)arg1 andMode:(long long)arg2 ;
-(id)_nextExtension;
-(long long)_nextModeForMode:(long long)arg1 ;
-(id)_currentExtension;
-(id)_extensionForMode:(long long)arg1 ;
-(id)textSubExtension;
-(void)setUsesSystemKeyboard:(BOOL)arg1 ;
-(BOOL)usesSystemKeyboard;
-(id)emojiSubExtension;
-(void)composerTextExtension:(id)arg1 didSetInitialMessage:(id)arg2 overridesDraftMessage:(BOOL)arg3 ;
-(void)composerTextExtension:(id)arg1 didSelectWithCurrentlyPresented:(BOOL)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id<MNComposerKeyboardExtensionDelegate>)arg1 ;
-(id<MNComposerKeyboardExtensionDelegate>)delegate;
-(long long)category;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)active;
-(id)tabBarItem;
-(void)setActive:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(long long)soundName;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(void)setEditDelegate:(id<MNComposerExtensionEditDelegate>)arg1 ;
-(NSString *)placeholderText;
-(void)tearDown;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<MNComposerExtensionSendDelegate>)arg1 ;
-(BOOL)isThirdParty;
@end

