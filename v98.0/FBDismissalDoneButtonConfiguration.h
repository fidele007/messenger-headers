/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface FBDismissalDoneButtonConfiguration : FBValueObject <NSCopying> {

	double _verticalPadding;
	UIFont* _font;

}

@property (nonatomic,readonly) double verticalPadding;              //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                  //@synthesize font=_font - In the implementation block
-(id)initWithVerticalPadding:(double)arg1 font:(id)arg2 ;
-(UIFont *)font;
-(double)verticalPadding;
@end

