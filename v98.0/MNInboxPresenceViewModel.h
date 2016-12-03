/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface MNInboxPresenceViewModel : FBValueObject <NSCopying> {

	NSDictionary* _presenceValues;
	NSArray* _topActiveNowContactUsers;

}

@property (nonatomic,copy,readonly) NSDictionary * presenceValues;                   //@synthesize presenceValues=_presenceValues - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topActiveNowContactUsers;              //@synthesize topActiveNowContactUsers=_topActiveNowContactUsers - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSArray *)topActiveNowContactUsers;
-(NSDictionary *)presenceValues;
-(id)initWithPresenceValues:(id)arg1 topActiveNowContactUsers:(id)arg2 ;
@end

