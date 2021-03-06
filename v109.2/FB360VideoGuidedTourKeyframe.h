/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FB360VideoGuidedTourKeyframe : NSObject {

	int _poiId;
	double _timestamp;
	double _pitch;
	double _yaw;

}

@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double pitch;                  //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) double yaw;                    //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,readonly) int poiId;                     //@synthesize poiId=_poiId - In the implementation block
-(id)initWithTimestamp:(double)arg1 pitch:(double)arg2 yaw:(double)arg3 poiId:(int)arg4 ;
-(int)poiId;
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 ;
-(double)pitch;
-(double)yaw;
@end

