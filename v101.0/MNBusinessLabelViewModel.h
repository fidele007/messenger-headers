/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface MNBusinessLabelViewModel : FBValueObject <NSCopying> {

	NSString* _text;
	UIColor* _textColor;
	UIFont* _textFont;
	long long _alignment;
	long long _maxNumberOfLines;

}

@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFont;                  //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,readonly) long long alignment;                     //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfLines;              //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
-(id)initWithText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 alignment:(long long)arg4 maxNumberOfLines:(long long)arg5 ;
-(long long)maxNumberOfLines;
-(NSString *)text;
-(UIColor *)textColor;
-(long long)alignment;
-(UIFont *)textFont;
@end

