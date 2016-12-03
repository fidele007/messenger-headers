/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, MNModelRequestConfiguration;

@interface MNMultipleUserHandlerRequest : FBValueObject <NSCopying> {

	BOOL _allowEmailUsers;
	unsigned long long _requestId;
	NSSet* _requestedUserIds;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,readonly) unsigned long long requestId;                                  //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) NSSet * requestedUserIds;                                 //@synthesize requestedUserIds=_requestedUserIds - In the implementation block
@property (nonatomic,readonly) BOOL allowEmailUsers;                                          //@synthesize allowEmailUsers=_allowEmailUsers - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(NSSet *)requestedUserIds;
-(BOOL)allowEmailUsers;
-(id)initWithRequestId:(unsigned long long)arg1 requestedUserIds:(id)arg2 allowEmailUsers:(BOOL)arg3 configuration:(id)arg4 ;
-(MNModelRequestConfiguration *)configuration;
-(unsigned long long)requestId;
@end

