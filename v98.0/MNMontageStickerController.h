/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMStickerViewDelegate.h>
#import <Messenger/MNMontageMessageController.h>

@protocol FBStickerResourceManager, MNMontageMessageControllerDelegate;
@class FBLazyCreator, FBMSticker, MNMontageViewMessageWrapper, NSString;

@interface MNMontageStickerController : NSObject <FBMStickerViewDelegate, MNMontageMessageController> {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBLazyCreator* _stickerViewCreator;
	FBMSticker* _sticker;
	MNMontageViewMessageWrapper* _messageWrapper;
	BOOL _stickerLoaded;
	BOOL _hasRequestedPlaying;
	BOOL _hasStartedPlaying;
	id<MNMontageMessageControllerDelegate> _delegate;
	unsigned long long _requestedPlayingTime;
	unsigned long long _startedPlayingTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMontageMessageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedPlaying;                                          //@synthesize hasRequestedPlaying=_hasRequestedPlaying - In the implementation block
@property (nonatomic,readonly) BOOL hasStartedPlaying;                                            //@synthesize hasStartedPlaying=_hasStartedPlaying - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedPlayingTime;                           //@synthesize requestedPlayingTime=_requestedPlayingTime - In the implementation block
@property (nonatomic,readonly) unsigned long long startedPlayingTime;                             //@synthesize startedPlayingTime=_startedPlayingTime - In the implementation block
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(id)initWithSticker:(id)arg1 messageWrapper:(id)arg2 stickerResourceManager:(id)arg3 ;
-(id)messageWrapper;
-(id)messageView;
-(BOOL)updatesProgressManually;
-(void)preloadContent;
-(BOOL)downloadContentAndPlay;
-(BOOL)hasRequestedPlaying;
-(BOOL)hasStartedPlaying;
-(unsigned long long)requestedPlayingTime;
-(unsigned long long)startedPlayingTime;
-(void)_configureStickerView;
-(void)_stickerDownloadFinished;
-(void)setDelegate:(id<MNMontageMessageControllerDelegate>)arg1 ;
-(id<MNMontageMessageControllerDelegate>)delegate;
-(double)duration;
-(void)reset;
-(void)stop;
-(void)resume;
-(void)pause;
@end
