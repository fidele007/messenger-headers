/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerControlExtensionStateListener.h>
#import <Messenger/MNComposerControlExtensionIconActionHandling.h>

@protocol MNComposerControlExtension;
@class UIButton, MNSoundController, NSString;

@interface MNComposerEphemeralControlExtensionIconActionHandler : NSObject <MNComposerControlExtensionStateListener, MNComposerControlExtensionIconActionHandling> {

	UIButton* _attachedControlIconButton;
	MNSoundController* _soundController;
	id<MNComposerControlExtension> _ephemeralControlExtension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<MNComposerControlExtension> composerControlExtension;              //@synthesize ephemeralControlExtension=_ephemeralControlExtension - In the implementation block
-(id<MNComposerControlExtension>)composerControlExtension;
-(void)attachToControlIconButton:(id)arg1 ;
-(void)detachFromControlIconButton;
-(void)composerControlExtensionIconDidPress:(id)arg1 ;
-(void)composerControlExtensionStateDidChange:(id)arg1 source:(id)arg2 loggingBlock:(/*^block*/id)arg3 ;
-(void)_onControlIconButtonTouchUpInside:(id)arg1 ;
-(id)initWithComposerControlExtension:(id)arg1 soundController:(id)arg2 ;
-(void)_onControlIconButtonTouchDown:(id)arg1 ;
@end

