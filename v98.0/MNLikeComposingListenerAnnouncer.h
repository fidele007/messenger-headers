/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNLikeComposingListener.h>

@class NSString;

@interface MNLikeComposingListenerAnnouncer : FBAnnouncerBase <MNLikeComposingListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didBeginComposingLikeStickerWithType:(unsigned long long)arg1 maxDuration:(double)arg2 emoji:(id)arg3 ;
-(void)didCancelComposingLikeStickerTimedOut:(BOOL)arg1 ;
-(void)didEndComposingLikeStickerWithType:(unsigned long long)arg1 emoji:(id)arg2 sender:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

