/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSObject;

@interface BFCancellationToken : NSObject {

	BOOL _cancellationRequested;
	BOOL _disposed;
	NSMutableArray* _registrations;
	NSObject* _lock;

}

@property (nonatomic,retain) NSMutableArray * registrations;                                           //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                                            //@synthesize disposed=_disposed - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) BOOL cancellationRequested;              //@synthesize cancellationRequested=_cancellationRequested - In the implementation block
-(void)cancelPrivate;
-(NSMutableArray *)registrations;
-(void)notifyCancellation:(id)arg1 ;
-(void)setRegistrations:(NSMutableArray *)arg1 ;
-(id)registerCancellationObserverWithBlock:(/*^block*/id)arg1 ;
-(void)cancelAfterDelay:(int)arg1 ;
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(void)unregisterRegistration:(id)arg1 ;
-(void)throwIfDisposed;
-(BOOL)isCancellationRequested;
-(void)cancel;
-(id)init;
-(NSObject *)lock;
-(void)dispose;
-(void)setLock:(NSObject *)arg1 ;
@end

