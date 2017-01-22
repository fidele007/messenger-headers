/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@class NSMutableDictionary;

@interface FBGravityRangedRegion : NSObject {

	id<FBCancelable> _cancelableTimeout;
	NSMutableDictionary* _beacons;

}

@property (nonatomic,readonly) id<FBCancelable> cancelableTimeout;              //@synthesize cancelableTimeout=_cancelableTimeout - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * beacons;                   //@synthesize beacons=_beacons - In the implementation block
-(id)initWithCancelableTimeout:(id)arg1 ;
-(id<FBCancelable>)cancelableTimeout;
-(NSMutableDictionary *)beacons;
@end
