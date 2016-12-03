/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MNComposerExtensionModule <NSObject>
@property (nonatomic,copy,readonly) NSString * moduleTitle; 
@property (nonatomic,readonly) double moduleHeight; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionModuleDelegate> delegate; 
@required
-(void)contentWillAppear;
-(void)contentDidDisappear;
-(void)updateWithSearchQuery:(id)arg1;
-(NSString *)moduleTitle;
-(double)moduleHeight;
-(void)setDelegate:(id)arg1;
-(id<MNComposerExtensionModuleDelegate>)delegate;
-(id)contentViewController;

@end

