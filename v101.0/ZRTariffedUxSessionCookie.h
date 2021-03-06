/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <Messenger/ZRTariffedUxSessionInternal.h>
#import <Messenger/ZRTariffedUxSession.h>

@class NSString, NSDate, ZRTariffedUxSession;

@interface ZRTariffedUxSessionCookie : NSProxy <ZRTariffedUxSessionInternal, ZRTariffedUxSession> {

	ZRTariffedUxSession* _session;

}

@property (nonatomic,retain) ZRTariffedUxSession * session;                           //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) id<ZRTariffedUrlWhitelist> filter; 
@property (nonatomic,retain,readonly) NSDate * invalidationTime; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)initWithName:(id)arg1 filter:(id)arg2 sessionManager:(id)arg3 zeroRatingState:(id)arg4 ;
-(void)notification:(id)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(ZRTariffedUxSession *)session;
-(void)setSession:(ZRTariffedUxSession *)arg1 ;
@end

