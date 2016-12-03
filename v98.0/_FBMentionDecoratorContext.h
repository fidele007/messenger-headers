/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _FBMentionDecoratorContext : NSObject <NSCopying> {

	BOOL _canExtendRange;
	unsigned long long _caretPosition;
	NSRange _replacementRange;

}

@property (assign,nonatomic) NSRange replacementRange;                      //@synthesize replacementRange=_replacementRange - In the implementation block
@property (assign,nonatomic) unsigned long long caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (assign,nonatomic) BOOL canExtendRange;                           //@synthesize canExtendRange=_canExtendRange - In the implementation block
-(BOOL)canExtendRange;
-(void)setCanExtendRange:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReplacementRange:(NSRange)arg1 ;
-(NSRange)replacementRange;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(unsigned long long)caretPosition;
@end

