/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSLayoutManager, NSTextStorage, NSTextContainer;

@interface CKTextKitContext : NSObject {

	mutex _textKitMutex;
	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;

}
-(void)performBlockWithLockedTextKitComponents:(/*^block*/id)arg1 ;
-(id)initWithAttributedString:(id)arg1 lineBreakMode:(long long)arg2 maximumNumberOfLines:(unsigned long long)arg3 constrainedSize:(CGSize)arg4 layoutManagerFactory:(/*function pointer*/void*)arg5 ;
@end

