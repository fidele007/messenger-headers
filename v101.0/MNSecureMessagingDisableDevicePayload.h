/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureMessagingMessagingCollectionAddress, NSString;

@interface MNSecureMessagingDisableDevicePayload : NSObject <TBase, NSCoding> {

	MNSecureMessagingMessagingCollectionAddress* __device_to_disable;
	BOOL __device_to_disable_isset;

}

@property (setter=setDevice_to_disable:,getter=device_to_disable,nonatomic,retain) MNSecureMessagingMessagingCollectionAddress * device_to_disable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setDevice_to_disable:(MNSecureMessagingMessagingCollectionAddress *)arg1 ;
-(id)initWithDevice_to_disable:(id)arg1 ;
-(MNSecureMessagingMessagingCollectionAddress *)device_to_disable;
-(BOOL)device_to_disableIsSet;
-(void)unsetDevice_to_disable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

