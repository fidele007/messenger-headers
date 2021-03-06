/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBStringWithRedactedDescription, UIFontDescriptor;

@interface MNCoreTextViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _alignTextDescenderToBottom;
	FBStringWithRedactedDescription* _text;
	UIFontDescriptor* _fontDescriptor;
	double _lineSpacing;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIFontDescriptor * fontDescriptor;                   //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
@property (nonatomic,readonly) double lineSpacing;                                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) BOOL alignTextDescenderToBottom;                          //@synthesize alignTextDescenderToBottom=_alignTextDescenderToBottom - In the implementation block
-(id)initWithText:(id)arg1 fontDescriptor:(id)arg2 lineSpacing:(double)arg3 alignTextDescenderToBottom:(BOOL)arg4 ;
-(id)layoutConfigurationWithMaxWidth:(double)arg1 ;
-(BOOL)alignTextDescenderToBottom;
-(FBStringWithRedactedDescription *)text;
-(id)font;
-(double)lineSpacing;
-(UIFontDescriptor *)fontDescriptor;
@end

