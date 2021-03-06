/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureMessagingParticipantsListPayload, NSString;

@interface MNSecureMessagingCreateThreadResponsePayload : NSObject <TBase, NSCoding> {

	long long __thread_id;
	MNSecureMessagingParticipantsListPayload* __user_devices;
	BOOL __thread_id_isset;
	BOOL __user_devices_isset;

}

@property (assign,setter=setThread_id:,getter=thread_id,nonatomic) long long thread_id; 
@property (setter=setUser_devices:,getter=user_devices,nonatomic,retain) MNSecureMessagingParticipantsListPayload * user_devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(long long)thread_id;
-(MNSecureMessagingParticipantsListPayload *)user_devices;
-(void)setThread_id:(long long)arg1 ;
-(void)setUser_devices:(MNSecureMessagingParticipantsListPayload *)arg1 ;
-(id)initWithThread_id:(long long)arg1 user_devices:(id)arg2 ;
-(BOOL)thread_idIsSet;
-(void)unsetThread_id;
-(BOOL)user_devicesIsSet;
-(void)unsetUser_devices;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

