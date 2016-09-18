/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, MNComposerOverflowExtension;


@protocol MNComposerExtensionOverflowStrategy <NSObject>
@property (nonatomic,copy) NSArray * extensions; 
@property (nonatomic,copy,readonly) NSArray * extensionsToDisplay; 
@property (assign,nonatomic) unsigned long long maximumNumberOfExtensionsToDisplay; 
@property (nonatomic,readonly) unsigned long long numberOfPotentialExtensionsToDisplay; 
@property (nonatomic,readonly) MNComposerOverflowExtension * overflowExtension; 
@required
-(id)initWithOverflowExtension:(id)arg1;
-(BOOL)extensionIsInOverflow:(id)arg1;
-(unsigned long long)indexOfExtensionInExtensionsToDisplay:(id)arg1;
-(NSArray *)extensionsToDisplay;
-(unsigned long long)maximumNumberOfExtensionsToDisplay;
-(void)setMaximumNumberOfExtensionsToDisplay:(unsigned long long)arg1;
-(unsigned long long)numberOfPotentialExtensionsToDisplay;
-(MNComposerOverflowExtension *)overflowExtension;
-(NSArray *)extensions;
-(void)setExtensions:(id)arg1;

@end
