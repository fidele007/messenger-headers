/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface FBTask : NSObject {

	id<NSObject> _result;
	NSError* _error;
	NSException* _exception;
	BOOL _cancelled;
	BOOL _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) NSObject * lock;                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                 //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL completed;                          //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
+(id)taskWithError:(id)arg1 ;
+(id)taskWithResult:(id)arg1 ;
+(id)cancelledTask;
+(id)taskWithException:(id)arg1 ;
+(id)taskDependentOnTasks:(id)arg1 ;
+(id)taskWithDelay:(unsigned long long)arg1 ;
-(BOOL)trySetError:(id)arg1 ;
-(BOOL)trySetResult:(id)arg1 ;
-(id)dependentTaskWithBlock:(/*^block*/id)arg1 ;
-(void)runContinuations;
-(BOOL)trySetException:(id)arg1 ;
-(BOOL)trySetCancelled;
-(id)dependentTaskWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)warnOperationOnMainThread;
-(id)completionTaskWithBlock:(/*^block*/id)arg1 ;
-(id)completionTaskWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)warnOperationOnMainThreadNoOp;
-(id)waitForResult:(id*)arg1 ;
-(void)waitUntilFinished;
-(BOOL)completed;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(NSObject *)lock;
-(BOOL)isCancelled;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setCompleted;
-(void)setResult:(id)arg1 ;
-(NSMutableArray *)callbacks;
-(id)exception;
-(void)setError:(id)arg1 ;
-(id)error;
-(void)setException:(id)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
@end

