/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNBubbleContentLayout : FBValueObject <NSCopying> {

	CGSize _contentSize;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) CGSize contentSize;                      //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(id)initWithContentSize:(CGSize)arg1 contentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)contentSize;
-(UIEdgeInsets)contentInsets;
@end

