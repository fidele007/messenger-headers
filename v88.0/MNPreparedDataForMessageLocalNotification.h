/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessage, FBMThreadSummary, FBMUser;

@interface MNPreparedDataForMessageLocalNotification : FBValueObject <NSCopying> {

	FBMMessage* _message;
	FBMThreadSummary* _threadSummary;
	FBMUser* _sender;

}

@property (nonatomic,copy,readonly) FBMMessage * message;                          //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadSummary * threadSummary;              //@synthesize threadSummary=_threadSummary - In the implementation block
@property (nonatomic,copy,readonly) FBMUser * sender;                              //@synthesize sender=_sender - In the implementation block
-(FBMThreadSummary *)threadSummary;
-(id)initWithMessage:(id)arg1 threadSummary:(id)arg2 sender:(id)arg3 ;
-(FBMMessage *)message;
-(FBMUser *)sender;
@end

