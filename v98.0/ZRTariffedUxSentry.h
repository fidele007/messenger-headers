/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ZRTariffedSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ZRTariffedUxSessionFence;
@class ZRTariffedUxSessionManager, NSMutableSet, ZRTariffedSessionTask, NSString;

@interface ZRTariffedUxSentry : NSObject <ZRTariffedSessionTaskDelegate, NSCopying> {

	ZRTariffedUxSessionManager* _sessionManager;
	id<ZRTariffedUxSessionFence> _fence;
	NSMutableSet* _delegates;
	ZRTariffedSessionTask* _task;
	BOOL _currentlyValidatingSession;
	BOOL _maskActivation;

}

@property (nonatomic,retain,readonly) ZRTariffedUxSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,retain,readonly) id<ZRTariffedUxSessionFence> fence;                       //@synthesize fence=_fence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sentryWithSessionName:(id)arg1 fencePrefKey:(id)arg2 urlFilter:(id)arg3 delegate:(id)arg4 ;
-(id)initWithSessionManager:(id)arg1 fence:(id)arg2 delegate:(id)arg3 ;
-(void)enterSession:(/*^block*/id)arg1 ;
-(id<ZRTariffedUxSessionFence>)fence;
-(BOOL)isUserConsentRequired;
-(BOOL)isCurrentlyValidatingSession;
-(void)nonZeroRatedSessionTaskMayActivate:(id)arg1 ;
-(void)nonZeroRatedSessionTaskMustDeactivate:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(ZRTariffedUxSessionManager *)sessionManager;
@end

