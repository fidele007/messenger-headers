/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVideoEditingConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _disableAudioToggleTittle;
	BOOL _enableMoveBothHandles;
	double _playHeadWidth;
	double _audioToggleBackgroundViewCornerRadius;
	double _audioToggleBackgroundViewAlphaComponent;
	double _trackHeadImageWidth;
	NSString* _trimHandleImageName;
	double _trimViewHandleWidth;

}

@property (nonatomic,readonly) BOOL disableAudioToggleTittle;                               //@synthesize disableAudioToggleTittle=_disableAudioToggleTittle - In the implementation block
@property (nonatomic,readonly) BOOL enableMoveBothHandles;                                  //@synthesize enableMoveBothHandles=_enableMoveBothHandles - In the implementation block
@property (nonatomic,readonly) double playHeadWidth;                                        //@synthesize playHeadWidth=_playHeadWidth - In the implementation block
@property (nonatomic,readonly) double audioToggleBackgroundViewCornerRadius;                //@synthesize audioToggleBackgroundViewCornerRadius=_audioToggleBackgroundViewCornerRadius - In the implementation block
@property (nonatomic,readonly) double audioToggleBackgroundViewAlphaComponent;              //@synthesize audioToggleBackgroundViewAlphaComponent=_audioToggleBackgroundViewAlphaComponent - In the implementation block
@property (nonatomic,readonly) double trackHeadImageWidth;                                  //@synthesize trackHeadImageWidth=_trackHeadImageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSString * trimHandleImageName;                         //@synthesize trimHandleImageName=_trimHandleImageName - In the implementation block
@property (nonatomic,readonly) double trimViewHandleWidth;                                  //@synthesize trimViewHandleWidth=_trimViewHandleWidth - In the implementation block
-(id)initWithDisableAudioToggleTittle:(BOOL)arg1 enableMoveBothHandles:(BOOL)arg2 playHeadWidth:(double)arg3 audioToggleBackgroundViewCornerRadius:(double)arg4 audioToggleBackgroundViewAlphaComponent:(double)arg5 trackHeadImageWidth:(double)arg6 trimHandleImageName:(id)arg7 trimViewHandleWidth:(double)arg8 ;
-(BOOL)disableAudioToggleTittle;
-(BOOL)enableMoveBothHandles;
-(double)playHeadWidth;
-(double)audioToggleBackgroundViewCornerRadius;
-(double)audioToggleBackgroundViewAlphaComponent;
-(double)trackHeadImageWidth;
-(NSString *)trimHandleImageName;
-(double)trimViewHandleWidth;
@end

