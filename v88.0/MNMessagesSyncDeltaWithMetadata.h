/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
	double _receiveTime;

}

@property (nonatomic,copy,readonly) MNMessagesSyncDeltaUnion * deltaUnion;                                   //@synthesize deltaUnion=_deltaUnion - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                                                         //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy,readonly) MNMessagesSyncDeltaThreadRelationship * threadRelationship;              //@synthesize threadRelationship=_threadRelationship - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incrementalPersistenceJobDescriptions;                         //@synthesize incrementalPersistenceJobDescriptions=_incrementalPersistenceJobDescriptions - In the implementation block
@property (nonatomic,readonly) double receiveTime;                                                           //@synthesize receiveTime=_receiveTime - In the implementation block
-(long long)sequenceId;
-(MNMessagesSyncDeltaUnion *)deltaUnion;
-(double)receiveTime;
-(NSArray *)incrementalPersistenceJobDescriptions;
-(MNMessagesSyncDeltaThreadRelationship *)threadRelationship;
-(id)initWithDeltaUnion:(id)arg1 sequenceId:(long long)arg2 threadRelationship:(id)arg3 incrementalPersistenceJobDescriptions:(id)arg4 receiveTime:(double)arg5 ;
@end

