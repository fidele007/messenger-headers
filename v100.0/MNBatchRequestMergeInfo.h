/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSHashTable;

@interface MNBatchRequestMergeInfo : NSObject {

	BOOL _isLongRunning;
	unsigned long long _requestId;
	NSSet* _queries;
	NSHashTable* _requestDependsOn;
	NSHashTable* _requestDependents;
	unsigned long long _requestState;
	id _currentResponse;

}

@property (assign,nonatomic) unsigned long long requestId;                   //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy) NSSet * queries;                                  //@synthesize queries=_queries - In the implementation block
@property (nonatomic,readonly) NSHashTable * requestDependsOn;               //@synthesize requestDependsOn=_requestDependsOn - In the implementation block
@property (nonatomic,readonly) NSHashTable * requestDependents;              //@synthesize requestDependents=_requestDependents - In the implementation block
@property (assign,nonatomic) unsigned long long requestState;                //@synthesize requestState=_requestState - In the implementation block
@property (assign,nonatomic) BOOL isLongRunning;                             //@synthesize isLongRunning=_isLongRunning - In the implementation block
@property (nonatomic,retain) id currentResponse;                             //@synthesize currentResponse=_currentResponse - In the implementation block
-(void)setIsLongRunning:(BOOL)arg1 ;
-(id)initWithRequestId:(unsigned long long)arg1 queries:(id)arg2 ;
-(NSHashTable *)requestDependents;
-(NSHashTable *)requestDependsOn;
-(BOOL)isLongRunning;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)requestState;
-(void)setRequestState:(unsigned long long)arg1 ;
-(unsigned long long)requestId;
-(void)setRequestId:(unsigned long long)arg1 ;
-(id)currentResponse;
-(void)setCurrentResponse:(id)arg1 ;
-(void)setQueries:(NSSet *)arg1 ;
-(NSSet *)queries;
@end
