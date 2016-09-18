/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtension.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNComposerExtensionSendDelegate, MNComposerExtensionEditDelegate, MNComposerContentSearchExtensionDelegate;
@class MNComposerExtensionPopupPresentationStrategy, FBLazyCreator, NSString, UIColor;

@interface MNComposerContentSearchExtension : NSObject <MNComposerExtension, FBClassProvidable> {

	MNComposerExtensionPopupPresentationStrategy* _presentationStrategy;
	FBLazyCreator* _composerIconCreator;
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
-(BOOL)shouldPromote;
-(void)didSelect:(BOOL)arg1 source:(long long)arg2 ;
-(BOOL)shouldPresent:(BOOL)arg1 source:(long long)arg2 ;
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
