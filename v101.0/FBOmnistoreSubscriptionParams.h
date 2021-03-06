/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBOmnistoreCollectionName, NSString;

@interface FBOmnistoreSubscriptionParams : FBValueObject <NSCopying> {

	BOOL _requiresSnapshot;
	FBOmnistoreCollectionName* _collectionName;
	NSString* _collectionParamsString;
	NSString* _idl;
	unsigned long long _initialGlobalVersionId;

}

@property (nonatomic,copy,readonly) FBOmnistoreCollectionName * collectionName;              //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionParamsString;                       //@synthesize collectionParamsString=_collectionParamsString - In the implementation block
@property (nonatomic,copy,readonly) NSString * idl;                                          //@synthesize idl=_idl - In the implementation block
@property (nonatomic,readonly) unsigned long long initialGlobalVersionId;                    //@synthesize initialGlobalVersionId=_initialGlobalVersionId - In the implementation block
@property (nonatomic,readonly) BOOL requiresSnapshot;                                        //@synthesize requiresSnapshot=_requiresSnapshot - In the implementation block
-(id)initWithCollectionName:(id)arg1 collectionParamsString:(id)arg2 idl:(id)arg3 ;
-(id)initWithCollectionName:(id)arg1 collectionParamsString:(id)arg2 idl:(id)arg3 initialGlobalVersionId:(unsigned long long)arg4 requiresSnapshot:(BOOL)arg5 ;
-(NSString *)collectionParamsString;
-(NSString *)idl;
-(unsigned long long)initialGlobalVersionId;
-(BOOL)requiresSnapshot;
-(FBOmnistoreCollectionName *)collectionName;
@end

