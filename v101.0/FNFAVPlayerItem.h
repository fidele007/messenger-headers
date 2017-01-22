/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVAudioMix;


@protocol FNFAVPlayerItem <NSObject>
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@required
-(void)requestTimeLoadedUpdate;
-(SCD_Struct_FB33*)duration;
-(id)asset;
-(long long)status;
-(AVAudioMix *)audioMix;
-(void)addOutput:(id)arg1;
-(NSArray *)loadedTimeRanges;
-(void)setAudioMix:(id)arg1;
-(id)accessLog;
-(SCD_Struct_FB33*)currentTime;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;

@end
