/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNUserNuxStatus : FBValueObject <NSCopying> {

	NSString* _nuxID;
	long long _rank;
	NSDictionary* _nuxDataDictionary;
	long long _fetch_time;

}

@property (nonatomic,copy,readonly) NSString * nuxID;                              //@synthesize nuxID=_nuxID - In the implementation block
@property (nonatomic,readonly) long long rank;                                     //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * nuxDataDictionary;              //@synthesize nuxDataDictionary=_nuxDataDictionary - In the implementation block
@property (nonatomic,readonly) long long fetch_time;                               //@synthesize fetch_time=_fetch_time - In the implementation block
-(NSString *)nuxID;
-(NSDictionary *)nuxDataDictionary;
-(long long)fetch_time;
-(id)initWithNuxID:(id)arg1 rank:(long long)arg2 nuxDataDictionary:(id)arg3 fetch_time:(long long)arg4 ;
-(long long)rank;
@end

