/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNMessageProgressIndicatorConfiguration : FBValueObject <NSCopying> {

	long long _progressDirection;
	double _progressStartTimestamp;
	double _progressDuration;
	UIColor* _progressColor;
	UIColor* _trackColor;
	long long _option;

}

@property (nonatomic,readonly) long long progressDirection;                //@synthesize progressDirection=_progressDirection - In the implementation block
@property (nonatomic,readonly) double progressStartTimestamp;              //@synthesize progressStartTimestamp=_progressStartTimestamp - In the implementation block
@property (nonatomic,readonly) double progressDuration;                    //@synthesize progressDuration=_progressDuration - In the implementation block
@property (nonatomic,copy,readonly) UIColor * progressColor;               //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * trackColor;                  //@synthesize trackColor=_trackColor - In the implementation block
@property (nonatomic,readonly) long long option;                           //@synthesize option=_option - In the implementation block
-(double)progressStartTimestamp;
-(double)progressDuration;
-(id)initWithProgressDirection:(long long)arg1 progressStartTimestamp:(double)arg2 progressDuration:(double)arg3 progressColor:(id)arg4 trackColor:(id)arg5 option:(long long)arg6 ;
-(UIColor *)trackColor;
-(long long)progressDirection;
-(long long)option;
-(UIColor *)progressColor;
@end

