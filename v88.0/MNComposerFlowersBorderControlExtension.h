/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNComposerControlExtension.h>

@class MNComposerControlExtensionBannerViewModel, MNComposerControlExtensionStateListenerAnnouncer, MNComposerControlExtensionIconViewModel, NSString;

@interface MNComposerFlowersBorderControlExtension : NSObject <FBViewerContextClassProvidable, MNComposerControlExtension> {

	MNComposerControlExtensionStateListenerAnnouncer* _announcer;
	MNComposerControlExtensionIconViewModel* _iconViewModel;
	BOOL _flowersBorderModeEnabled;
	MNComposerControlExtensionBannerViewModel* _bannerViewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                 //@synthesize flowersBorderModeEnabled=_flowersBorderModeEnabled - In the implementation block
@property (nonatomic,copy,readonly) MNComposerControlExtensionBannerViewModel * bannerViewModel;              //@synthesize bannerViewModel=_bannerViewModel - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 source:(id)arg2 ;
-(id)newIconActionHandler;
-(id)iconViewModel;
-(MNComposerControlExtensionBannerViewModel *)bannerViewModel;
-(void)controlExtensionDidPressIcon;
-(id)init;
-(BOOL)isEnabled;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
