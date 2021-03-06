/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSwipeableFramesFilter : FBValueObject <NSCopying> {

	BOOL _hueColorize;
	NSString* _name;
	double _brightness;
	double _contrast;
	double _saturation;
	double _hue;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double brightness;                 //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) double contrast;                   //@synthesize contrast=_contrast - In the implementation block
@property (nonatomic,readonly) double saturation;                 //@synthesize saturation=_saturation - In the implementation block
@property (nonatomic,readonly) double hue;                        //@synthesize hue=_hue - In the implementation block
@property (nonatomic,readonly) BOOL hueColorize;                  //@synthesize hueColorize=_hueColorize - In the implementation block
-(BOOL)hueColorize;
-(id)initWithName:(id)arg1 brightness:(double)arg2 contrast:(double)arg3 saturation:(double)arg4 hue:(double)arg5 hueColorize:(BOOL)arg6 ;
-(NSString *)name;
-(double)brightness;
-(double)contrast;
-(double)saturation;
-(double)hue;
@end

