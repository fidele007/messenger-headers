/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(void)setMModuledelegate:(id<MNComposerMExtensionModuleDelegate>)arg1 ;
-(void)dismissMoreDrawerViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWillAppear;
-(void)contentDidDisappear;
-(void)updateWithSearchQuery:(id)arg1 ;
-(NSString *)moduleTitle;
-(BOOL)hasViewAllButton;
-(double)moduleHeight;
-(BOOL)shouldHide;
-(id<MNComposerMExtensionModuleDelegate>)mModuledelegate;
-(void)setDelegate:(id<MNComposerExtensionModuleDelegate>)arg1 ;
-(id<MNComposerExtensionModuleDelegate>)delegate;
-(UIViewController *)contentViewController;
@end

