/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBWebRTCCallConnectionStatus : FBValueObject <NSCopying> {

	BOOL _isConnected;
	BOOL _isPoorAudioConnection;
	BOOL _isPoorVideoConnection;
	BOOL _isH264Video;
	long long _audioBitrate;
	long long _videoBitrate;
	unsigned long long _connectionQuality;

}

@property (nonatomic,readonly) BOOL isConnected;                                  //@synthesize isConnected=_isConnected - In the implementation block
@property (nonatomic,readonly) long long audioBitrate;                            //@synthesize audioBitrate=_audioBitrate - In the implementation block
@property (nonatomic,readonly) long long videoBitrate;                            //@synthesize videoBitrate=_videoBitrate - In the implementation block
@property (nonatomic,readonly) BOOL isPoorAudioConnection;                        //@synthesize isPoorAudioConnection=_isPoorAudioConnection - In the implementation block
@property (nonatomic,readonly) BOOL isPoorVideoConnection;                        //@synthesize isPoorVideoConnection=_isPoorVideoConnection - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionQuality;              //@synthesize connectionQuality=_connectionQuality - In the implementation block
@property (nonatomic,readonly) BOOL isH264Video;                                  //@synthesize isH264Video=_isH264Video - In the implementation block
-(unsigned long long)connectionQuality;
-(BOOL)isH264Video;
-(long long)videoBitrate;
-(BOOL)isPoorAudioConnection;
-(BOOL)isPoorVideoConnection;
-(id)initWithIsConnected:(BOOL)arg1 audioBitrate:(long long)arg2 videoBitrate:(long long)arg3 isPoorAudioConnection:(BOOL)arg4 isPoorVideoConnection:(BOOL)arg5 connectionQuality:(unsigned long long)arg6 isH264Video:(BOOL)arg7 ;
-(BOOL)isConnected;
-(long long)audioBitrate;
@end

