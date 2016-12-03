/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCMediaInterface.h>

@class NSString;

@interface FBWebRTCMediaInterfaceWrapper : NSObject <FBWebRTCMediaInterface> {

	weak_ptr<facebook::rtc::MediaInterface>* _weakInterface;
	list<std::__1::unique_ptr<FBWebRTCVoiceProcessorWrapper, std::__1::default_delete<FBWebRTCVoiceProcessorWrapper> >, std::__1::allocator<std::__1::unique_ptr<FBWebRTCVoiceProcessorWrapper, std::__1::default_delete<FBWebRTCVoiceProcessorWrapper> > > >* _voiceProcessors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performAudioFileMixing:(id)arg1 direction:(unsigned long long)arg2 ;
-(id)initWithNativeInterface:(weak_ptr<facebook::rtc::MediaInterface>*)arg1 ;
-(void)setAcsCodec:(unsigned long long)arg1 ;
-(void)sendIntraFrame;
-(BOOL)registerVoiceProcessor:(id)arg1 direction:(unsigned long long)arg2 ;
-(BOOL)unregisterVoiceProcessor:(id)arg1 direction:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
@end

