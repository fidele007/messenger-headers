/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor;


@protocol MNComposerExtension <NSObject>
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate; 
@property (nonatomic,copy,readonly) NSString * placeholderText; 
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText; 
@property (nonatomic,retain) UIColor * tintColor; 
@required
-(void)setUpWithInitiator:(id)arg1;
-(void)applyOptions:(id)arg1;
-(id)extensionModule;
-(BOOL)shouldPromote;
-(BOOL)isInSegmentedControl;
-(void)didSelect:(BOOL)arg1;
-(BOOL)shouldPresent:(BOOL)arg1;
-(id)presentationStrategy;
-(long long)inputSource;
-(BOOL)isEligible;
-(id)activeSubExtension;
-(id)subExtensions;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id)arg1;
-(NSString *)searchPlaceholderText;
-(id)extensionIdentifier;
-(void)setDelegate:(id)arg1;
-(id<MNComposerExtensionDelegate>)delegate;
-(long long)category;
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(id)tabBarItem;
-(long long)soundName;
-(void)setEditDelegate:(id)arg1;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(NSString *)placeholderText;
-(void)tearDown;
-(BOOL)isThirdParty;

@end

