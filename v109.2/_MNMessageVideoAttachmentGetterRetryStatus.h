/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(void)setMessage:(MNAppMessage *)arg1 ;
-(MNAppMessage *)message;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
@end

