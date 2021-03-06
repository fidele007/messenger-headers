/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MNPresence : FBValueObject <NSCopying> {

	NSString* _personId;
	NSDate* _lastActiveTime;
	unsigned long long _presenceState;
	unsigned long long _voipCapabilities;

}

@property (nonatomic,copy,readonly) NSString * personId;                         //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastActiveTime;                     //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceState;                 //@synthesize presenceState=_presenceState - In the implementation block
@property (nonatomic,readonly) unsigned long long voipCapabilities;              //@synthesize voipCapabilities=_voipCapabilities - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(unsigned long long)presenceState;
-(NSDate *)lastActiveTime;
-(unsigned long long)voipCapabilities;
-(id)initWithPersonId:(id)arg1 lastActiveTime:(id)arg2 presenceState:(unsigned long long)arg3 voipCapabilities:(unsigned long long)arg4 ;
-(NSString *)personId;
@end

