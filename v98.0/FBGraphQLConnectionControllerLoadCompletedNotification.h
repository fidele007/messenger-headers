/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBNetworkerRequestStatus;
@class FBGraphQLConnectionLoadResult, NSString, FBGraphQLConnectionLoadLocation, NSArray, NSDictionary;

@interface FBGraphQLConnectionControllerLoadCompletedNotification : FBValueObject <NSCopying> {

	FBGraphQLConnectionLoadResult* _result;
	NSString* _networkLoadUUID;
	FBGraphQLConnectionLoadLocation* _location;
	unsigned long long _order;
	NSArray* _limits;
	unsigned long long _totalEdgeCount;
	id<FBNetworkerRequestStatus> _networkerStatus;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadResult * result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                              //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long order;                                     //@synthesize order=_order - In the implementation block
@property (nonatomic,copy,readonly) NSArray * limits;                                        //@synthesize limits=_limits - In the implementation block
@property (nonatomic,readonly) unsigned long long totalEdgeCount;                            //@synthesize totalEdgeCount=_totalEdgeCount - In the implementation block
@property (nonatomic,readonly) id<FBNetworkerRequestStatus> networkerStatus;                 //@synthesize networkerStatus=_networkerStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)networkLoadUUID;
-(id)initWithResult:(id)arg1 networkLoadUUID:(id)arg2 location:(id)arg3 order:(unsigned long long)arg4 limits:(id)arg5 totalEdgeCount:(unsigned long long)arg6 networkerStatus:(id)arg7 userInfo:(id)arg8 ;
-(unsigned long long)totalEdgeCount;
-(id<FBNetworkerRequestStatus>)networkerStatus;
-(NSArray *)limits;
-(NSDictionary *)userInfo;
-(FBGraphQLConnectionLoadLocation *)location;
-(unsigned long long)order;
-(FBGraphQLConnectionLoadResult *)result;
@end
