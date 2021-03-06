/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@class MNTabBarExtensionIconView, FBImageDownloader, NSString;

@interface MNComposerExtensionIconController : NSObject <FBClassProvidable> {

	MNTabBarExtensionIconView* _iconView;
	FBImageDownloader* _imageDownloader;
	BOOL _isComposerBarPlatformIcon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDisappear;
-(void)awakeWithView:(id)arg1 ;
-(void)_didLoadNormalImageWithResponse:(id)arg1 ;
-(void)_addBackgroundForSelectedImage;
-(void)_didDownloadImageWithResponse:(id)arg1 icon:(id)arg2 ;
-(void)_didLoadSelectedlImageWithResponse:(id)arg1 ;
-(void)_addStrokeImageForSelectedImage;
-(void)willAppearWithTabBarItem:(id)arg1 location:(long long)arg2 shouldToggleIconSource:(BOOL)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithImageDownloader:(id)arg1 ;
@end

