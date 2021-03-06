/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNMessagesSyncDeltaWithMetadataGeneratorResults : FBValueObject <NSCopying> {

	BOOL _shouldForceFetchInbox;
	NSArray* _deltasWithMetadata;
	long long _firstSequenceId;
	long long _lastSequenceId;

}

@property (nonatomic,copy,readonly) NSArray * deltasWithMetadata;              //@synthesize deltasWithMetadata=_deltasWithMetadata - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceFetchInbox;                     //@synthesize shouldForceFetchInbox=_shouldForceFetchInbox - In the implementation block
@property (nonatomic,readonly) long long firstSequenceId;                      //@synthesize firstSequenceId=_firstSequenceId - In the implementation block
@property (nonatomic,readonly) long long lastSequenceId;                       //@synthesize lastSequenceId=_lastSequenceId - In the implementation block
-(BOOL)shouldForceFetchInbox;
-(NSArray *)deltasWithMetadata;
-(id)initWithDeltasWithMetadata:(id)arg1 shouldForceFetchInbox:(BOOL)arg2 firstSequenceId:(long long)arg3 lastSequenceId:(long long)arg4 ;
-(long long)firstSequenceId;
-(long long)lastSequenceId;
@end

