/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FB360VideoGuidedTour : NSObject {

	NSArray* _keyframes;

}
+(double)easeInOutInterpolate:(double)arg1 ;
-(id)initWithGuidedTourData:(id)arg1 initialYaw:(double)arg2 initialPitch:(double)arg3 additionalKeyframeSecond:(float)arg4 ;
-(SCD_Struct_FB94)getEulerAnglesWithTime:(double)arg1 ;
@end

