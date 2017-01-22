/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNCoreTextViewFormatInfo : FBValueObject <NSCopying> {

	UIColor* _textColor;
	UIColor* _linkColor;
	UIColor* _linkBackgroundColor;
	UIColor* _highlightedLinkColor;
	UIColor* _highlightedLinkBackgroundColor;

}

@property (nonatomic,copy,readonly) UIColor * textColor;                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * linkColor;                                   //@synthesize linkColor=_linkColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * linkBackgroundColor;                         //@synthesize linkBackgroundColor=_linkBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * highlightedLinkColor;                        //@synthesize highlightedLinkColor=_highlightedLinkColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * highlightedLinkBackgroundColor;              //@synthesize highlightedLinkBackgroundColor=_highlightedLinkBackgroundColor - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithTextColor:(id)arg1 linkColor:(id)arg2 linkBackgroundColor:(id)arg3 highlightedLinkColor:(id)arg4 highlightedLinkBackgroundColor:(id)arg5 ;
-(UIColor *)highlightedLinkColor;
-(UIColor *)highlightedLinkBackgroundColor;
-(UIColor *)linkBackgroundColor;
-(UIColor *)textColor;
-(UIColor *)linkColor;
@end
