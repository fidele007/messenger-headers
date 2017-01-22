/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, FBMThreadParticipationInfo;

@interface MNThreadSnippetGeneratorSummaryTypeInfo : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBStringWithRedactedDescription* _group_customName;
	BOOL _group_attributeGroup;
	FBMThreadParticipationInfo* _nonGroup_otherUserParticipantInfo;
	BOOL _nonGroup_attributeUserText;

}
+(id)groupWithCustomName:(id)arg1 attributeGroup:(BOOL)arg2 ;
+(id)nonGroupWithOtherUserParticipantInfo:(id)arg1 attributeUserText:(BOOL)arg2 ;
-(void)matchGroup:(/*^block*/id)arg1 nonGroup:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
