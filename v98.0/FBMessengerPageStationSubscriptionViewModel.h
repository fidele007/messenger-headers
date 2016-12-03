/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMessengerPageStationSubscriptionViewModel : FBValueObject <NSCopying> {

	BOOL _isSubscribed;
	BOOL _isDefault;
	NSString* _stationId;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * stationId;                //@synthesize stationId=_stationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribed;                        //@synthesize isSubscribed=_isSubscribed - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                           //@synthesize isDefault=_isDefault - In the implementation block
-(id)initWithStationId:(id)arg1 displayName:(id)arg2 isSubscribed:(BOOL)arg3 isDefault:(BOOL)arg4 ;
-(NSString *)stationId;
-(NSString *)displayName;
-(BOOL)isDefault;
-(BOOL)isSubscribed;
@end

