/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCInCallEventListener <NSObject>
@required
-(void)callUpdatedInputAudioLevel:(unsigned long long)arg1 outputAudioLevel:(unsigned long long)arg2 forCall:(id)arg3;
-(void)callUpdatedActiveAudioLevels:(id)arg1 forCall:(id)arg2;
-(void)callReceivedData:(id)arg1 topic:(id)arg2 forCall:(id)arg3;

@end

