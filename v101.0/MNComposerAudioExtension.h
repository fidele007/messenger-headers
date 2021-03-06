/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNAudioComposeViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNComposerExtensionPresentationStrategy;
@class MNAudioComposeViewController, MNSoundController, FBLazyCreator, MNComposerExtensionPresentationStrategyFactory, NSString;

@interface MNComposerAudioExtension : MNAbstractComposerTrayExtension <MNAudioComposeViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _audioComposeViewControllerProvider;
	MNAudioComposeViewController* _audioComposeViewController;
	MNSoundController* _soundController;
	FBLazyCreator* _composerIconCreator;
	id _sendingContextToken;
	MNComposerExtensionPresentationStrategyFactory* _presentationStrategyFactory;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_composerIcon;
-(id)extensionModule;
-(id)presentationStrategy;
-(id)viewControllerForPresentation;
-(void)audioComposeViewControllerDidStartRecording:(id)arg1 ;
-(void)audioComposeViewControllerDidReachDurationLimit:(id)arg1 ;
-(void)audioComposeViewControllerDidCancelRecording:(id)arg1 ;
-(void)audioComposeViewController:(id)arg1 didFinishRecordingWithAttachment:(id)arg2 ;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
-(void)tearDown;
@end

