/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCInCallEventListener <NSObject>
@required
-(void)callUpdatedInputAudioLevel:(unsigned long long)arg1 outputAudioLevel:(unsigned long long)arg2 forCall:(id)arg3;
-(void)callUpdatedActiveAudioLevels:(id)arg1 forCall:(id)arg2;
-(void)callReceivedData:(id)arg1 topic:(id)arg2 forCall:(id)arg3;

@end

