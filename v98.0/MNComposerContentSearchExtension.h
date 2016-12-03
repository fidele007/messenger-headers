/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtension.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNComposerExtensionSendDelegate, MNComposerExtensionEditDelegate, MNComposerContentSearchExtensionDelegate;
@class MNComposerExtensionPopupPresentationStrategy, FBLazyCreator, MNComposerPreviewViewController, MNComposerConfiguration, NSString, UIColor;

@interface MNComposerContentSearchExtension : NSObject <MNComposerExtension, FBClassProvidable> {

	MNComposerExtensionPopupPresentationStrategy* _presentationStrategy;
	FBLazyCreator* _composerIconCreator;
	FBLazyCreator* _extensionModuleCreator;
	id<FBProvider> _composerPreviewViewControllerProvider;
	MNComposerPreviewViewController* _currentPreviewViewController;
	MNComposerConfiguration* _composerConfiguration;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	NSString* _placeholderText;
	UIColor* _tintColor;
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
-(id)initWithProviderMapData:(id)arg1 ;
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

