/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
