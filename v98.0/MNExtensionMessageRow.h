/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, FBMUser, FBStringWithRedactedDescription, MNProfileImageViewModel, NSArray, FBMSticker;

@interface MNExtensionMessageRow : FBValueObject <NSCoding, NSCopying> {

	BOOL _isFromMe;
	BOOL _isEmojiOnly;
	FBMMessageKey* _messageKey;
	FBMUser* _sender;
	FBStringWithRedactedDescription* _messageBody;
	unsigned long long _timestamp;
	long long _type;
	long long _messageSource;
	MNProfileImageViewModel* _profileImageViewModel;
	NSArray* _photoViewModels;
	FBMSticker* _sticker;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                                   //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) FBMUser * sender;                                             //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * messageBody;                //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long messageSource;                                           //@synthesize messageSource=_messageSource - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe;                                                     //@synthesize isFromMe=_isFromMe - In the implementation block
@property (nonatomic,readonly) BOOL isEmojiOnly;                                                  //@synthesize isEmojiOnly=_isEmojiOnly - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageViewModel * profileImageViewModel;              //@synthesize profileImageViewModel=_profileImageViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photoViewModels;                                    //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (nonatomic,copy,readonly) FBMSticker * sticker;                                         //@synthesize sticker=_sticker - In the implementation block
-(FBMSticker *)sticker;
-(FBMMessageKey *)messageKey;
-(MNProfileImageViewModel *)profileImageViewModel;
-(NSArray *)photoViewModels;
-(long long)messageSource;
-(id)initWithMessageKey:(id)arg1 sender:(id)arg2 messageBody:(id)arg3 timestamp:(unsigned long long)arg4 type:(long long)arg5 messageSource:(long long)arg6 isFromMe:(BOOL)arg7 isEmojiOnly:(BOOL)arg8 profileImageViewModel:(id)arg9 photoViewModels:(id)arg10 sticker:(id)arg11 ;
-(BOOL)isEmojiOnly;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(long long)type;
-(FBMUser *)sender;
-(FBStringWithRedactedDescription *)messageBody;
-(BOOL)isFromMe;
@end

