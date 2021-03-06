/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMRoomAssociatedGroup : FBValueObject <NSCoding, NSCopying> {

	NSString* _groupFBID;
	NSString* _groupName;

}

@property (nonatomic,copy,readonly) NSString * groupFBID;              //@synthesize groupFBID=_groupFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
-(NSString *)groupFBID;
-(id)initWithGroupFBID:(id)arg1 groupName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)groupName;
@end

