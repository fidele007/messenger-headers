/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessagesSyncDeltaUnion, MNMessagesSyncDeltaThreadRelationship, NSArray;

@interface MNMessagesSyncDeltaWithMetadata : FBValueObject <NSCopying> {

	MNMessagesSyncDeltaUnion* _deltaUnion;
	long long _sequenceId;
	MNMessagesSyncDeltaThreadRelationship* _threadRelationship;
	NSArray* _incrementalPersistenceJobDescriptions;

}

@property (nonatomic,copy,readonly) MNMessagesSyncDeltaUnion * deltaUnion;                                   //@synthesize deltaUnion=_deltaUnion - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                                                         //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy,readonly) MNMessagesSyncDeltaThreadRelationship * threadRelationship;              //@synthesize threadRelationship=_threadRelationship - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incrementalPersistenceJobDescriptions;                         //@synthesize incrementalPersistenceJobDescriptions=_incrementalPersistenceJobDescriptions - In the implementation block
-(long long)sequenceId;
-(MNMessagesSyncDeltaUnion *)deltaUnion;
-(NSArray *)incrementalPersistenceJobDescriptions;
-(MNMessagesSyncDeltaThreadRelationship *)threadRelationship;
-(id)initWithDeltaUnion:(id)arg1 sequenceId:(long long)arg2 threadRelationship:(id)arg3 incrementalPersistenceJobDescriptions:(id)arg4 ;
@end

