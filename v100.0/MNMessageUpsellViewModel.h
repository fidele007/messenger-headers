/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, NSString, UIImage;

@interface MNMessageUpsellViewModel : FBValueObject <NSCopying> {

	BOOL _tooltipShown;
	FBMMessageKey* _messageKey;
	NSString* _text;
	UIImage* _icon;
	long long _type;
	unsigned long long _messageContentType;
	NSString* _montagePhotoOrVideoUpsellOption;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                              //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIImage * icon;                                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long messageContentType;                        //@synthesize messageContentType=_messageContentType - In the implementation block
@property (nonatomic,readonly) BOOL tooltipShown;                                            //@synthesize tooltipShown=_tooltipShown - In the implementation block
@property (nonatomic,copy,readonly) NSString * montagePhotoOrVideoUpsellOption;              //@synthesize montagePhotoOrVideoUpsellOption=_montagePhotoOrVideoUpsellOption - In the implementation block
-(FBMMessageKey *)messageKey;
-(unsigned long long)messageContentType;
-(id)initWithMessageKey:(id)arg1 text:(id)arg2 icon:(id)arg3 type:(long long)arg4 messageContentType:(unsigned long long)arg5 tooltipShown:(BOOL)arg6 montagePhotoOrVideoUpsellOption:(id)arg7 ;
-(NSString *)montagePhotoOrVideoUpsellOption;
-(BOOL)tooltipShown;
-(long long)type;
-(NSString *)text;
-(UIImage *)icon;
@end
