/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudDisplayStrategy.h>

@class NSString;

@interface MNDayCameraContainerCameraNavigationHudDisplayStrategy : NSObject <MNMontageComposerHudDisplayStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationConfigWithOverlayContent:(BOOL)arg1 editingWithArtPicker:(BOOL)arg2 unreadBadgeCount:(long long)arg3 selectedContentsCount:(long long)arg4 dismissOption:(unsigned long long)arg5 ;
-(BOOL)shouldShowEditControls;
-(BOOL)shouldShowSaveButton;
-(BOOL)shouldShowMuteButton;
-(BOOL)shouldShowColorBackgroundButton;
-(BOOL)shouldShowCameraCaptureButton;
-(BOOL)shouldShowCameraControls;
-(BOOL)shouldShowPlaceholder;
@end

