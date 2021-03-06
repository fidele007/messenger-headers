/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface FBQuicksilverPlayerInfoLabelAttributes : FBValueObject <NSCopying> {

	NSString* _text;
	UIColor* _textColor;
	UIFont* _textFont;
	long long _alignment;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFont;                //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,readonly) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                   //@synthesize insets=_insets - In the implementation block
-(id)initWithText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 alignment:(long long)arg4 insets:(UIEdgeInsets)arg5 ;
-(NSString *)text;
-(UIColor *)textColor;
-(long long)alignment;
-(UIFont *)textFont;
-(UIEdgeInsets)insets;
@end

