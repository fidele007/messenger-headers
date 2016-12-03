/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNContentSubscriptionStationViewModel : FBValueObject <NSCopying> {

	BOOL _hasUserSubscribed;
	BOOL _hasSubStations;
	NSString* _graphqlID;
	NSString* _displayName;
	NSString* _stationDescription;
	NSURL* _profilePicURL;

}

@property (nonatomic,copy,readonly) NSString * graphqlID;                       //@synthesize graphqlID=_graphqlID - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSubscribed;                          //@synthesize hasUserSubscribed=_hasUserSubscribed - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationDescription;              //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePicURL;                      //@synthesize profilePicURL=_profilePicURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSubStations;                             //@synthesize hasSubStations=_hasSubStations - In the implementation block
-(BOOL)hasSubStations;
-(NSString *)graphqlID;
-(BOOL)hasUserSubscribed;
-(NSURL *)profilePicURL;
-(id)initWithGraphqlID:(id)arg1 hasUserSubscribed:(BOOL)arg2 displayName:(id)arg3 stationDescription:(id)arg4 profilePicURL:(id)arg5 hasSubStations:(BOOL)arg6 ;
-(NSString *)displayName;
-(NSString *)stationDescription;
@end

