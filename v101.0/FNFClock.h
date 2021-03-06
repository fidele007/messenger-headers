/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFClock <NSObject>
@required
-(void)set:(SCD_Struct_FB33)arg1;
-(id)createTimeObserverWithInterval:(SCD_Struct_FB33)arg1 block:(/*^block*/id)arg2 fireOnceAtExactTime:(BOOL)arg3 followMasterClock:(BOOL)arg4;
-(void)resumeTimeObserver:(id)arg1;
-(void)suspendTimeObserver:(id)arg1;
-(void)removeAllTimeObservers;
-(void)syncWithLayer:(id)arg1;
-(BOOL)addTimeObserver:(id)arg1;
-(void)resume;
-(void)pause;
-(id)observers;
-(SCD_Struct_FB33*)currentTime;
-(void)removeTimeObserver:(id)arg1;

@end

