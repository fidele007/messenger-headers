/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageBroadcastSendHandle.h>

@class NSString, MNMontageBroadcastSenderAttachmentGenerationListenerAnnouncer, FBCancelHandle;

@interface MontageBroadcastSendHandle : NSObject <MNMontageBroadcastSendHandle> {

	NSString* _attachmentGenerationId;
	MNMontageBroadcastSenderAttachmentGenerationListenerAnnouncer* _announcer;
	/*^block*/id _sendBlock;
	FBCancelHandle* _cancelHandle;

}

@property (nonatomic,copy) id sendBlock;                                 //@synthesize sendBlock=_sendBlock - In the implementation block
@property (nonatomic,retain) FBCancelHandle * cancelHandle;              //@synthesize cancelHandle=_cancelHandle - In the implementation block
-(void)sendToContacts:(id)arg1 extensibleMessageData:(id)arg2 extraClientTags:(id)arg3 ;
-(id)attachmentGenerationId;
-(id)initWithAttachmentGenerationId:(id)arg1 announcer:(id)arg2 ;
-(FBCancelHandle *)cancelHandle;
-(void)setCancelHandle:(FBCancelHandle *)arg1 ;
-(void)cancel;
-(void)clear;
-(void)setSendBlock:(id)arg1 ;
-(id)sendBlock;
@end

