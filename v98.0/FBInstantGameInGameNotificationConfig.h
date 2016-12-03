/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface FBInstantGameInGameNotificationConfig : FBValueObject <NSCopying> {

	NSString* _textString;
	UIColor* _textColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) NSString * textString;                  //@synthesize textString=_textString - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)initWithTextString:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 ;
-(NSString *)textString;
-(UIColor *)backgroundColor;
-(UIColor *)textColor;
@end

