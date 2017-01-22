/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMGroupJoinRequest;

@interface FBMThreadJoinableGroupInfoUpdate : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	unsigned long long _updateJoinableMode_joinableMode;
	NSString* _updateJoinableMode_joinableLink;
	unsigned long long _updateApprovalMode_approvalMode;
	FBMGroupJoinRequest* _addToApprovalQueue_groupJoinRequest;
	NSString* _removeFromApprovalQueue_userId;

}
+(id)updateApprovalModeWithApprovalMode:(unsigned long long)arg1 ;
+(id)addToApprovalQueueWithGroupJoinRequest:(id)arg1 ;
+(id)removeFromApprovalQueueWithUserId:(id)arg1 ;
+(id)updateJoinableModeWithJoinableMode:(unsigned long long)arg1 joinableLink:(id)arg2 ;
-(void)matchUpdateJoinableMode:(/*^block*/id)arg1 updateApprovalMode:(/*^block*/id)arg2 addToApprovalQueue:(/*^block*/id)arg3 removeFromApprovalQueue:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
