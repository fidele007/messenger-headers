/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSString, CLLocation;

@interface MNRideServiceIntentInfo : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	NSString* _providerName;
	NSString* _promoData;
	NSString* _entryPoint;
	NSString* _loggingTag;
	NSString* _destAddress;
	CLLocation* _destLocation;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerName;                     //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * promoData;                        //@synthesize promoData=_promoData - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;                       //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingTag;                       //@synthesize loggingTag=_loggingTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * destAddress;                      //@synthesize destAddress=_destAddress - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * destLocation;                   //@synthesize destLocation=_destLocation - In the implementation block
-(id)initWithThreadKey:(id)arg1 providerName:(id)arg2 promoData:(id)arg3 entryPoint:(id)arg4 loggingTag:(id)arg5 destAddress:(id)arg6 destLocation:(id)arg7 ;
-(NSString *)promoData;
-(NSString *)loggingTag;
-(NSString *)destAddress;
-(CLLocation *)destLocation;
-(NSString *)providerName;
-(NSString *)entryPoint;
-(FBMSyncedThreadKey *)threadKey;
@end

