/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNPaymentsTransferReceiptPaymentIdViewModel : FBValueObject <NSCopying> {

	BOOL _shouldHandleLongPress;
	NSString* _text;
	NSString* _helpButtonText;
	NSURL* _helpLink;
	NSString* _termButtonText;
	NSURL* _termLink;

}

@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * helpButtonText;              //@synthesize helpButtonText=_helpButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * helpLink;                       //@synthesize helpLink=_helpLink - In the implementation block
@property (nonatomic,copy,readonly) NSString * termButtonText;              //@synthesize termButtonText=_termButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termLink;                       //@synthesize termLink=_termLink - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleLongPress;                  //@synthesize shouldHandleLongPress=_shouldHandleLongPress - In the implementation block
-(id)initWithText:(id)arg1 helpButtonText:(id)arg2 helpLink:(id)arg3 termButtonText:(id)arg4 termLink:(id)arg5 shouldHandleLongPress:(BOOL)arg6 ;
-(BOOL)shouldHandleLongPress;
-(NSURL *)helpLink;
-(NSURL *)termLink;
-(NSString *)helpButtonText;
-(NSString *)termButtonText;
-(NSString *)text;
@end
