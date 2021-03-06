/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadListRequestFilter, MNSecureThreadListRequestFilter, MNModelRequestConfiguration;

@interface MNHandlerJointThreadListRequest : FBValueObject <NSCopying> {

	unsigned long long _requestId;
	MNThreadListRequestFilter* _syncedThreadListRequestFilter;
	MNSecureThreadListRequestFilter* _secureThreadListRequestFilter;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,readonly) unsigned long long requestId;                                                      //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListRequestFilter * syncedThreadListRequestFilter;                    //@synthesize syncedThreadListRequestFilter=_syncedThreadListRequestFilter - In the implementation block
@property (nonatomic,copy,readonly) MNSecureThreadListRequestFilter * secureThreadListRequestFilter;              //@synthesize secureThreadListRequestFilter=_secureThreadListRequestFilter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
-(MNThreadListRequestFilter *)syncedThreadListRequestFilter;
-(MNSecureThreadListRequestFilter *)secureThreadListRequestFilter;
-(id)initWithRequestId:(unsigned long long)arg1 syncedThreadListRequestFilter:(id)arg2 secureThreadListRequestFilter:(id)arg3 configuration:(id)arg4 ;
-(MNModelRequestConfiguration *)configuration;
-(unsigned long long)requestId;
@end

