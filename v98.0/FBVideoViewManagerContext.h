/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface FBVideoViewManagerContext : FBValueObject <NSCopying> {

	BOOL _muteState;
	BOOL _respectHardwareMuteSwitch;
	BOOL _outputCoordinationDucked;
	NSString* _videoPlayerGravity;
	unsigned long long _videoPlayerSource;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) NSString * videoPlayerGravity;                //@synthesize videoPlayerGravity=_videoPlayerGravity - In the implementation block
@property (nonatomic,readonly) unsigned long long videoPlayerSource;              //@synthesize videoPlayerSource=_videoPlayerSource - In the implementation block
@property (nonatomic,readonly) BOOL muteState;                                    //@synthesize muteState=_muteState - In the implementation block
@property (nonatomic,readonly) BOOL respectHardwareMuteSwitch;                    //@synthesize respectHardwareMuteSwitch=_respectHardwareMuteSwitch - In the implementation block
@property (nonatomic,readonly) BOOL outputCoordinationDucked;                     //@synthesize outputCoordinationDucked=_outputCoordinationDucked - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(unsigned long long)videoPlayerSource;
-(BOOL)respectHardwareMuteSwitch;
-(id)initWithVideoPlayerGravity:(id)arg1 videoPlayerSource:(unsigned long long)arg2 muteState:(BOOL)arg3 respectHardwareMuteSwitch:(BOOL)arg4 outputCoordinationDucked:(BOOL)arg5 backgroundColor:(id)arg6 ;
-(BOOL)outputCoordinationDucked;
-(NSString *)videoPlayerGravity;
-(BOOL)muteState;
-(UIColor *)backgroundColor;
@end

