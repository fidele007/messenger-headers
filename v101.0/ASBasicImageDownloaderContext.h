/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURL, NSURLSessionTask, NSMutableArray;

@interface ASBasicImageDownloaderContext : NSObject {

	BOOL _invalid;
	RecursiveMutex _propertyLock;
	NSURL* _URL;
	NSURLSessionTask* _sessionTask;
	NSMutableArray* _callbackDatas;

}

@property (nonatomic,retain) NSMutableArray * callbackDatas;                     //@synthesize callbackDatas=_callbackDatas - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) NSURLSessionTask * sessionTask;              //@synthesize sessionTask=_sessionTask - In the implementation block
+(void)cancelContextWithURL:(id)arg1 ;
+(id)contextForURL:(id)arg1 ;
-(NSMutableArray *)callbackDatas;
-(void)addCallbackData:(id)arg1 ;
-(void)performProgressBlocks:(double)arg1 ;
-(void)completeWithImage:(id)arg1 error:(id)arg2 ;
-(id)createSessionTaskIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(void)setCallbackDatas:(NSMutableArray *)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(NSURLSessionTask *)sessionTask;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
@end

