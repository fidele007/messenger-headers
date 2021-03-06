/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBTask;

@interface FBTaskCompletionSource : NSObject {

	FBTask* _task;

}

@property (nonatomic,retain) FBTask * task;              //@synthesize task=_task - In the implementation block
+(id)taskCompletionSource;
-(BOOL)trySetError:(id)arg1 ;
-(BOOL)trySetResult:(id)arg1 ;
-(BOOL)trySetException:(id)arg1 ;
-(BOOL)trySetCancelled;
-(void)setException:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(FBTask *)task;
-(void)setTask:(FBTask *)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setError:(id)arg1 ;
@end

