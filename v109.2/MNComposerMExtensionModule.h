/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionModule.h>

@protocol MNComposerExtensionModuleDelegate, MNComposerMExtensionModuleDelegate;
@class NSString, UIViewController;

@interface MNComposerMExtensionModule : NSObject <MNComposerExtensionModule> {

	BOOL _hasViewAllButton;
	id<MNComposerExtensionModuleDelegate> _delegate;
	id<MNComposerMExtensionModuleDelegate> _mModuledelegate;

}

@property (assign,nonatomic,__weak) id<MNComposerMExtensionModuleDelegate> mModuledelegate;              //@synthesize mModuledelegate=_mModuledelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * moduleTitle; 
@property (nonatomic,readonly) BOOL hasViewAllButton;                                                    //@synthesize hasViewAllButton=_hasViewAllButton - In the implementation block
@property (nonatomic,readonly) double moduleHeight; 
@property (nonatomic,readonly) BOOL shouldHide; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionModuleDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(void)dismissDrawerWithCompletion:(/*^block*/id)arg1 ;
-(void)setMModuledelegate:(id<MNComposerMExtensionModuleDelegate>)arg1 ;
-(void)contentWillAppear;
-(void)contentDidDisappear;
-(void)updateWithSearchQuery:(id)arg1 ;
-(void)presentDrawerWithViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)moduleTitle;
-(BOOL)hasViewAllButton;
-(double)moduleHeight;
-(BOOL)shouldHide;
-(id<MNComposerMExtensionModuleDelegate>)mModuledelegate;
-(void)setDelegate:(id<MNComposerExtensionModuleDelegate>)arg1 ;
-(id<MNComposerExtensionModuleDelegate>)delegate;
-(UIViewController *)contentViewController;
@end

