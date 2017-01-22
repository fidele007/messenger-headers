/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMessagePreparedAttachment, NSString;

@interface MNForwardPreparedAttachmentInfo : FBValueObject <NSCopying> {

	FBMessagePreparedAttachment* _preparedAttachment;
	NSString* _offlineThreadingId;

}

@property (nonatomic,copy,readonly) FBMessagePreparedAttachment * preparedAttachment;              //@synthesize preparedAttachment=_preparedAttachment - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                                 //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
-(NSString *)offlineThreadingId;
-(FBMessagePreparedAttachment *)preparedAttachment;
-(id)initWithPreparedAttachment:(id)arg1 offlineThreadingId:(id)arg2 ;
@end
