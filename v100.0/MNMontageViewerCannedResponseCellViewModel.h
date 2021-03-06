/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNMontageViewerCannedResponseCellViewModel : FBValueObject <NSCopying> {

	NSString* _text;
	UIColor* _textColor;
	NSString* _response;

}

@property (nonatomic,copy,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * response;              //@synthesize response=_response - In the implementation block
-(id)initWithText:(id)arg1 textColor:(id)arg2 response:(id)arg3 ;
-(NSString *)text;
-(UIColor *)textColor;
-(NSString *)response;
@end

