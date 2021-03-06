/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerMentionDecorationTextState : FBValueObject <NSCopying> {

	NSString* _previousText;
	NSString* _expectedText;
	NSString* _changedText;
	NSRange _changedRange;

}

@property (nonatomic,copy,readonly) NSString * previousText;              //@synthesize previousText=_previousText - In the implementation block
@property (nonatomic,copy,readonly) NSString * expectedText;              //@synthesize expectedText=_expectedText - In the implementation block
@property (nonatomic,copy,readonly) NSString * changedText;               //@synthesize changedText=_changedText - In the implementation block
@property (nonatomic,readonly) NSRange changedRange;                      //@synthesize changedRange=_changedRange - In the implementation block
-(id)initWithPreviousText:(id)arg1 expectedText:(id)arg2 changedText:(id)arg3 changedRange:(NSRange)arg4 ;
-(NSString *)previousText;
-(NSString *)expectedText;
-(NSString *)changedText;
-(NSRange)changedRange;
@end

