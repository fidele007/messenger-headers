/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBImageProcessingSchedulingContext;


@protocol FBImageProcessingRequestProtocol <NSObject>
@property (assign,nonatomic) unsigned long long status; 
@property (assign,nonatomic) double requestTime; 
@property (assign,nonatomic) BOOL canCancelRequestIfNeeded; 
@property (assign,nonatomic) BOOL canExecuteInBackground; 
@property (nonatomic,retain) FBImageProcessingSchedulingContext * schedulingContext; 
@required
-(void)setSchedulingContext:(id)arg1;
-(void)setCanCancelRequestIfNeeded:(BOOL)arg1;
-(BOOL)canCancelRequestIfNeeded;
-(void)addRequester:(id)arg1;
-(BOOL)canExecuteInBackground;
-(void)setCanExecuteInBackground:(BOOL)arg1;
-(FBImageProcessingSchedulingContext *)schedulingContext;
-(void)cancel;
-(void)clear;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1;
-(void)finish;
-(double)requestTime;
-(void)setRequestTime:(double)arg1;
-(void)executeWithContext:(id)arg1;
-(void)reportProgress;

@end
