/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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
-(NSString *)title;
-(SEL)action;
@end

