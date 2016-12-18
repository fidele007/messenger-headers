/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNAppMessage;

@interface _MNMessageVideoAttachmentGetterRetryStatus : NSObject {

	MNAppMessage* _message;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) MNAppMessage * message;                     //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
-(id)initWithMessage:(id)arg1 retryCount:(unsigned long long)arg2 ;
-(MNAppMessage *)message;
-(void)setMessage:(MNAppMessage *)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
@end
