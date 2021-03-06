/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSAttributedString;

@interface MNPaymentsTransferReceiptItemViewModel : FBValueObject <NSCopying> {

	NSURL* _imageURL;
	NSAttributedString* _titleAttributedString;
	NSAttributedString* _subtitleAttributedString;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                                           //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * titleAttributedString;                 //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * subtitleAttributedString;              //@synthesize subtitleAttributedString=_subtitleAttributedString - In the implementation block
-(id)initWithImageURL:(id)arg1 titleAttributedString:(id)arg2 subtitleAttributedString:(id)arg3 ;
-(NSAttributedString *)subtitleAttributedString;
-(NSAttributedString *)titleAttributedString;
-(NSURL *)imageURL;
@end

