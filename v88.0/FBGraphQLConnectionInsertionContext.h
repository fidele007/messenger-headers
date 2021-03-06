/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBGraphQLConnectionLoadLocation, NSString;

@interface FBGraphQLConnectionInsertionContext : FBValueObject <NSCopying> {

	FBGraphQLConnectionLoadLocation* _loadLocation;
	unsigned long long _responseIndex;
	unsigned long long _expectedResponseCount;
	NSString* _networkLoadUUID;
	NSString* _responseUUID;

}

@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * loadLocation;              //@synthesize loadLocation=_loadLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long responseIndex;                                 //@synthesize responseIndex=_responseIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedResponseCount;                         //@synthesize expectedResponseCount=_expectedResponseCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                                  //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                                     //@synthesize responseUUID=_responseUUID - In the implementation block
-(NSString *)responseUUID;
-(NSString *)networkLoadUUID;
-(unsigned long long)responseIndex;
-(FBGraphQLConnectionLoadLocation *)loadLocation;
-(id)initWithLoadLocation:(id)arg1 responseIndex:(unsigned long long)arg2 expectedResponseCount:(unsigned long long)arg3 networkLoadUUID:(id)arg4 responseUUID:(id)arg5 ;
-(unsigned long long)expectedResponseCount;
@end

