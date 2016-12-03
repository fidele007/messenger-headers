/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBConnectionPageProtocol;
@class FBGraphQLConnectionLoadLocation, FBGraphQLConnectionInsertionLocation, NSString, NSDictionary;

@interface FBGraphQLConnectionControllerDiagnosticsPageCannotBeInsertedNotification : NSObject {

	id<FBConnectionPageProtocol> _page;
	FBGraphQLConnectionLoadLocation* _loadLocation;
	FBGraphQLConnectionInsertionLocation* _insertionLocation;
	unsigned long long _responseIndex;
	NSString* _networkLoadUUID;
	NSString* _responseUUID;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) id<FBConnectionPageProtocol> page;                                          //@synthesize page=_page - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * loadLocation;                        //@synthesize loadLocation=_loadLocation - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionInsertionLocation * insertionLocation;              //@synthesize insertionLocation=_insertionLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long responseIndex;                                           //@synthesize responseIndex=_responseIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                                            //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                                               //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                               //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)responseUUID;
-(FBGraphQLConnectionInsertionLocation *)insertionLocation;
-(FBGraphQLConnectionLoadLocation *)loadLocation;
-(unsigned long long)responseIndex;
-(NSString *)networkLoadUUID;
-(id)initWithPage:(id)arg1 loadLocation:(id)arg2 insertionLocation:(id)arg3 responseIndex:(unsigned long long)arg4 networkLoadUUID:(id)arg5 responseUUID:(id)arg6 userInfo:(id)arg7 ;
-(NSDictionary *)userInfo;
-(id<FBConnectionPageProtocol>)page;
@end

