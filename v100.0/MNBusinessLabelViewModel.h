/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface MNBusinessLabelViewModel : FBValueObject <NSCopying> {

	BOOL _takesMaxWidth;
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
@property (nonatomic,readonly) BOOL takesMaxWidth;                      //@synthesize takesMaxWidth=_takesMaxWidth - In the implementation block
-(long long)maxNumberOfLines;
-(id)initWithText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 alignment:(long long)arg4 maxNumberOfLines:(long long)arg5 takesMaxWidth:(BOOL)arg6 ;
-(BOOL)takesMaxWidth;
-(NSString *)text;
-(UIColor *)textColor;
-(long long)alignment;
-(UIFont *)textFont;
@end

