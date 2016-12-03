/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString, NSMutableArray;

@interface MNMessagesSyncDeltaDeliveryReceipt : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	long long __actorFbId;
	NSString* __deviceId;
	long long __appId;
	long long __timestampMs;
	NSMutableArray* __messageIds;
	long long __deliveredWatermarkTimestampMs;
	BOOL __threadKey_isset;
	BOOL __actorFbId_isset;
	BOOL __deviceId_isset;
	BOOL __appId_isset;
	BOOL __timestampMs_isset;
	BOOL __messageIds_isset;
	BOOL __deliveredWatermarkTimestampMs_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (assign,setter=setActorFbId:,getter=actorFbId,nonatomic) long long actorFbId; 
@property (setter=setDeviceId:,getter=deviceId,nonatomic,retain) NSString * deviceId; 
@property (assign,setter=setAppId:,getter=appId,nonatomic) long long appId; 
@property (assign,setter=setTimestampMs:,getter=timestampMs,nonatomic) long long timestampMs; 
@property (setter=setMessageIds:,getter=messageIds,nonatomic,retain) NSMutableArray * messageIds; 
@property (assign,setter=setDeliveredWatermarkTimestampMs:,getter=deliveredWatermarkTimestampMs,nonatomic) long long deliveredWatermarkTimestampMs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(BOOL)timestampMsIsSet;
-(long long)timestampMs;
-(void)read:(id)arg1 ;
-(void)setTimestampMs:(long long)arg1 ;
-(void)unsetTimestampMs;
-(BOOL)deviceIdIsSet;
-(void)unsetDeviceId;
-(BOOL)appIdIsSet;
-(void)unsetAppId;
-(void)setActorFbId:(long long)arg1 ;
-(NSMutableArray *)messageIds;
-(void)setMessageIds:(NSMutableArray *)arg1 ;
-(BOOL)threadKeyIsSet;
-(long long)actorFbId;
-(long long)deliveredWatermarkTimestampMs;
-(BOOL)actorFbIdIsSet;
-(BOOL)messageIdsIsSet;
-(void)unsetMessageIds;
-(void)unsetActorFbId;
-(void)unsetThreadKey;
-(void)setDeliveredWatermarkTimestampMs:(long long)arg1 ;
-(id)initWithThreadKey:(id)arg1 actorFbId:(long long)arg2 deviceId:(id)arg3 appId:(long long)arg4 timestampMs:(long long)arg5 messageIds:(id)arg6 deliveredWatermarkTimestampMs:(long long)arg7 ;
-(BOOL)deliveredWatermarkTimestampMsIsSet;
-(void)unsetDeliveredWatermarkTimestampMs;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(long long)appId;
-(void)setAppId:(long long)arg1 ;
-(MNMessagesSyncThreadKey *)threadKey;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)deviceId;
@end

