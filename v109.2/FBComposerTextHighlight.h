/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerTextHighlight : FBValueObject <NSCopying, NSCoding> {

	NSString* _textOfHighlight;
	NSRange _rangeOfHighlightInAllText;

}

@property (nonatomic,copy,readonly) NSString * textOfHighlight;                //@synthesize textOfHighlight=_textOfHighlight - In the implementation block
@property (nonatomic,readonly) NSRange rangeOfHighlightInAllText;              //@synthesize rangeOfHighlightInAllText=_rangeOfHighlightInAllText - In the implementation block
-(id)initWithTextOfHighlight:(id)arg1 rangeOfHighlightInAllText:(NSRange)arg2 ;
-(NSRange)rangeOfHighlightInAllText;
-(NSString *)textOfHighlight;
@end

