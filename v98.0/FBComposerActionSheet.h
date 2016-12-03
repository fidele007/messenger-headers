/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBComposerActionSheet : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _cancelButtonTitle;
	SEL _cancelButtonAction;
	NSArray* _buttons;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,readonly) SEL cancelButtonAction;                         //@synthesize cancelButtonAction=_cancelButtonAction - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttons;                         //@synthesize buttons=_buttons - In the implementation block
-(id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 cancelButtonAction:(SEL)arg3 buttons:(id)arg4 ;
-(SEL)cancelButtonAction;
-(NSString *)title;
-(NSArray *)buttons;
-(NSString *)cancelButtonTitle;
@end
