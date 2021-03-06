/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRoomSuggestionParticipantInfo : FBValueObject <NSCopying> {

	BOOL _isFriend;
	NSString* _userID;
	NSString* _shortName;
	NSString* _fullName;

}

@property (nonatomic,copy,readonly) NSString * userID;                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;              //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) BOOL isFriend;                          //@synthesize isFriend=_isFriend - In the implementation block
-(id)initWithUserID:(id)arg1 shortName:(id)arg2 fullName:(id)arg3 isFriend:(BOOL)arg4 ;
-(NSString *)shortName;
-(BOOL)isFriend;
-(NSString *)userID;
-(NSString *)fullName;
@end

