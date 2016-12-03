/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSecureMessagingMessagingCollectionAddress;

@interface MNSecureMessagingPacketFactory : NSObject {

	MNSecureMessagingMessagingCollectionAddress* _localAddress;

}
-(id)initWithLocalAddress:(id)arg1 ;
-(id)createPacketFromOutgoingMessage:(id)arg1 toDeviceId:(id)arg2 ;
-(id)createStatusPacketOfType:(int)arg1 forOriginalPacket:(id)arg2 ;
-(id)createReceiptPacketFor:(id)arg1 type:(int)arg2 withTimestamp:(long long)arg3 ;
-(id)createLinkDeletedPacketFor:(id)arg1 ;
@end

