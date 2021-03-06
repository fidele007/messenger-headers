/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerActionSheetButton : FBValueObject <NSCopying> {

	BOOL _isDestructiveButton;
	NSString* _title;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isDestructiveButton;              //@synthesize isDestructiveButton=_isDestructiveButton - In the implementation block
@property (nonatomic,readonly) SEL action;                            //@synthesize action=_action - In the implementation block
-(id)initWithTitle:(id)arg1 isDestructiveButton:(BOOL)arg2 action:(SEL)arg3 ;
-(BOOL)isDestructiveButton;
-(SEL)action;
-(NSString *)title;
@end

