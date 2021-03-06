/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray, MNSecureMessagingStickerInfo, MNSecureMessagingThreadSenderKeyInfo;

@interface MNSecureMessagingSalamanderBody : NSObject <TBase, NSCoding> {

	NSString* __plain_text;
	NSMutableArray* __attachment_info_list;
	NSString* __device_local_text;
	MNSecureMessagingStickerInfo* __sticker_info;
	MNSecureMessagingThreadSenderKeyInfo* __group_key_info;
	BOOL __plain_text_isset;
	BOOL __attachment_info_list_isset;
	BOOL __device_local_text_isset;
	BOOL __sticker_info_isset;
	BOOL __group_key_info_isset;

}

@property (setter=setPlain_text:,getter=plain_text,nonatomic,retain) NSString * plain_text; 
@property (setter=setAttachment_info_list:,getter=attachment_info_list,nonatomic,retain) NSMutableArray * attachment_info_list; 
@property (setter=setDevice_local_text:,getter=device_local_text,nonatomic,retain) NSString * device_local_text; 
@property (setter=setSticker_info:,getter=sticker_info,nonatomic,retain) MNSecureMessagingStickerInfo * sticker_info; 
@property (setter=setGroup_key_info:,getter=group_key_info,nonatomic,retain) MNSecureMessagingThreadSenderKeyInfo * group_key_info; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(NSString *)plain_text;
-(BOOL)attachment_info_listIsSet;
-(BOOL)sticker_infoIsSet;
-(MNSecureMessagingStickerInfo *)sticker_info;
-(NSMutableArray *)attachment_info_list;
-(id)initWithPlain_text:(id)arg1 attachment_info_list:(id)arg2 device_local_text:(id)arg3 sticker_info:(id)arg4 group_key_info:(id)arg5 ;
-(void)setPlain_text:(NSString *)arg1 ;
-(void)setAttachment_info_list:(NSMutableArray *)arg1 ;
-(void)setDevice_local_text:(NSString *)arg1 ;
-(void)setSticker_info:(MNSecureMessagingStickerInfo *)arg1 ;
-(void)setGroup_key_info:(MNSecureMessagingThreadSenderKeyInfo *)arg1 ;
-(BOOL)plain_textIsSet;
-(void)unsetPlain_text;
-(void)unsetAttachment_info_list;
-(NSString *)device_local_text;
-(BOOL)device_local_textIsSet;
-(void)unsetDevice_local_text;
-(void)unsetSticker_info;
-(MNSecureMessagingThreadSenderKeyInfo *)group_key_info;
-(BOOL)group_key_infoIsSet;
-(void)unsetGroup_key_info;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

