/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNSimpleNewGroupViewControllerConfiguration : FBValueObject <NSCopying> {

	NSArray* _pickedContacts;
	NSString* _suggestedName;
	unsigned long long _entryPoint;
	NSArray* _preselectedUserIds;
	NSString* _prefilledName;
	NSString* _promotionId;

}

@property (nonatomic,copy,readonly) NSArray * pickedContacts;                  //@synthesize pickedContacts=_pickedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestedName;                  //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,readonly) unsigned long long entryPoint;                  //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preselectedUserIds;              //@synthesize preselectedUserIds=_preselectedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefilledName;                  //@synthesize prefilledName=_prefilledName - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotionId;                    //@synthesize promotionId=_promotionId - In the implementation block
-(id)initWithPickedContacts:(id)arg1 suggestedName:(id)arg2 entryPoint:(unsigned long long)arg3 preselectedUserIds:(id)arg4 prefilledName:(id)arg5 promotionId:(id)arg6 ;
-(NSArray *)pickedContacts;
-(NSString *)suggestedName;
-(NSArray *)preselectedUserIds;
-(NSString *)prefilledName;
-(NSString *)promotionId;
-(unsigned long long)entryPoint;
@end

