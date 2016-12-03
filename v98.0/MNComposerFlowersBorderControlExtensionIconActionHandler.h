/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerControlExtensionStateListener.h>
#import <Messenger/MNComposerControlExtensionIconActionHandling.h>

@protocol MNComposerControlExtension;
@class UIButton, NSString;

@interface MNComposerFlowersBorderControlExtensionIconActionHandler : NSObject <MNComposerControlExtensionStateListener, MNComposerControlExtensionIconActionHandling> {

	UIButton* _attachedControlIconButton;
	id<MNComposerControlExtension> _flowersBorderControlExtension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<MNComposerControlExtension> composerControlExtension;              //@synthesize flowersBorderControlExtension=_flowersBorderControlExtension - In the implementation block
-(id<MNComposerControlExtension>)composerControlExtension;
-(void)attachToControlIconButton:(id)arg1 ;
-(void)detachFromControlIconButton;
-(void)composerControlExtensionIconDidPress:(id)arg1 ;
-(void)composerControlExtensionStateDidChange:(id)arg1 source:(id)arg2 loggingBlock:(/*^block*/id)arg3 ;
-(id)initWithComposerControlExtension:(id)arg1 ;
-(void)_onControlIconButtonTouchUpInside:(id)arg1 ;
@end

