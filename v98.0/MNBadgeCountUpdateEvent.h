/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface MNBadgeCountUpdateEvent : FBValueObject <NSCopying, NSCoding> {

	long long _applicationIconBadgeNumber;
	double _timestamp;
	long long _updateSource;

}

@property (nonatomic,readonly) long long applicationIconBadgeNumber;              //@synthesize applicationIconBadgeNumber=_applicationIconBadgeNumber - In the implementation block
@property (nonatomic,readonly) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long updateSource;                            //@synthesize updateSource=_updateSource - In the implementation block
-(id)initWithApplicationIconBadgeNumber:(long long)arg1 timestamp:(double)arg2 updateSource:(long long)arg3 ;
-(long long)updateSource;
-(double)timestamp;
-(long long)applicationIconBadgeNumber;
@end

