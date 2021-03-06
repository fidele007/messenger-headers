/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNMontageViewerPlaybackStateBuilder : NSObject {

	BOOL _modalPresentationLayerPresented;
	BOOL _composerPresented;
	BOOL _isPlaying;
	BOOL _overflowMenuPresented;
	BOOL _longPressGestureInProgress;
	BOOL _applicationResignedActive;
	unsigned long long _appearanceState;

}
+(id)montageViewerPlaybackState;
+(id)montageViewerPlaybackStateFromExistingMontageViewerPlaybackState:(id)arg1 ;
-(id)withModalPresentationLayerPresented:(BOOL)arg1 ;
-(id)withComposerPresented:(BOOL)arg1 ;
-(id)withIsPlaying:(BOOL)arg1 ;
-(id)withOverflowMenuPresented:(BOOL)arg1 ;
-(id)withLongPressGestureInProgress:(BOOL)arg1 ;
-(id)withApplicationResignedActive:(BOOL)arg1 ;
-(id)withAppearanceState:(unsigned long long)arg1 ;
-(id)build;
@end

