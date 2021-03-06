/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString, NSMutableArray;

@interface MNMessagesSyncMessageMetadata : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	NSString* __messageId;
	long long __offlineThreadingId;
	long long __actorFbId;
	long long __timestamp;
	BOOL __shouldBuzzDevice;
	NSString* __adminText;
	NSMutableArray* __tags;
	int __threadReadStateEffect;
	BOOL __skipBumpThread;
	BOOL __threadKey_isset;
	BOOL __messageId_isset;
	BOOL __offlineThreadingId_isset;
	BOOL __actorFbId_isset;
	BOOL __timestamp_isset;
	BOOL __shouldBuzzDevice_isset;
	BOOL __adminText_isset;
	BOOL __tags_isset;
	BOOL __threadReadStateEffect_isset;
	BOOL __skipBumpThread_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (setter=setMessageId:,getter=messageId,nonatomic,retain) NSString * messageId; 
@property (assign,setter=setOfflineThreadingId:,getter=offlineThreadingId,nonatomic) long long offlineThreadingId; 
@property (assign,setter=setActorFbId:,getter=actorFbId,nonatomic) long long actorFbId; 
@property (assign,setter=setTimestamp:,getter=timestamp,nonatomic) long long timestamp; 
@property (assign,setter=setShouldBuzzDevice:,getter=shouldBuzzDevice,nonatomic) BOOL shouldBuzzDevice; 
@property (setter=setAdminText:,getter=adminText,nonatomic,retain) NSString * adminText; 
@property (setter=setTags:,getter=tags,nonatomic,retain) NSMutableArray * tags; 
@property (assign,setter=setThreadReadStateEffect:,getter=threadReadStateEffect,nonatomic) int threadReadStateEffect; 
@property (assign,setter=setSkipBumpThread:,getter=skipBumpThread,nonatomic) BOOL skipBumpThread; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)offlineThreadingId;
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(NSString *)adminText;
-(void)read:(id)arg1 ;
-(void)setOfflineThreadingId:(long long)arg1 ;
-(BOOL)offlineThreadingIdIsSet;
-(void)unsetOfflineThreadingId;
-(BOOL)messageIdIsSet;
-(void)unsetMessageId;
-(void)setActorFbId:(long long)arg1 ;
-(BOOL)threadKeyIsSet;
-(BOOL)actorFbIdIsSet;
-(long long)actorFbId;
-(BOOL)shouldBuzzDeviceIsSet;
-(BOOL)shouldBuzzDevice;
-(void)unsetActorFbId;
-(int)threadReadStateEffect;
-(void)unsetThreadKey;
-(BOOL)timestampIsSet;
-(void)unsetTimestamp;
-(void)setShouldBuzzDevice:(BOOL)arg1 ;
-(void)setAdminText:(NSString *)arg1 ;
-(void)setThreadReadStateEffect:(int)arg1 ;
-(void)setSkipBumpThread:(BOOL)arg1 ;
-(id)initWithThreadKey:(id)arg1 messageId:(id)arg2 offlineThreadingId:(long long)arg3 actorFbId:(long long)arg4 timestamp:(long long)arg5 shouldBuzzDevice:(BOOL)arg6 adminText:(id)arg7 tags:(id)arg8 threadReadStateEffect:(int)arg9 skipBumpThread:(BOOL)arg10 ;
-(void)unsetShouldBuzzDevice;
-(BOOL)adminTextIsSet;
-(void)unsetAdminText;
-(BOOL)tagsIsSet;
-(void)unsetTags;
-(BOOL)threadReadStateEffectIsSet;
-(void)unsetThreadReadStateEffect;
-(BOOL)skipBumpThread;
-(BOOL)skipBumpThreadIsSet;
-(void)unsetSkipBumpThread;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(NSMutableArray *)tags;
-(void)validate;
-(MNMessagesSyncThreadKey *)threadKey;
-(void)setTags:(NSMutableArray *)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
@end

