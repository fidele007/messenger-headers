/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBusinessButtonConfirmation : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _message;
	NSString* _okButtonTitle;
	NSString* _cancelButtonTitle;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * okButtonTitle;                  //@synthesize okButtonTitle=_okButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(id)initWithTitle:(id)arg1 message:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(NSString *)title;
-(NSString *)message;
-(NSString *)cancelButtonTitle;
-(NSString *)okButtonTitle;
@end

