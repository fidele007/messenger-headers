/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureAndSyncedThreadListRequestFilter, MNSecureAndSyncedThreadListRequestBehavior, MNModelRequestConfiguration;

@interface MNSecureAndSyncedThreadListRequest : FBValueObject <NSCopying> {

	MNSecureAndSyncedThreadListRequestFilter* _filter;
	MNSecureAndSyncedThreadListRequestBehavior* _behavior;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) MNSecureAndSyncedThreadListRequestFilter * filter;                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNSecureAndSyncedThreadListRequestBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
-(id)initWithFilter:(id)arg1 behavior:(id)arg2 configuration:(id)arg3 ;
-(MNSecureAndSyncedThreadListRequestBehavior *)behavior;
-(MNModelRequestConfiguration *)configuration;
-(MNSecureAndSyncedThreadListRequestFilter *)filter;
@end
