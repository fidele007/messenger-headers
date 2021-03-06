/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNEventsReminderActionSheetItem : FBValueObject <NSCopying> {

	NSString* _title;
	/*^block*/id _actionHandler;
	long long _alertActionStyle;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) long long alertActionStyle;              //@synthesize alertActionStyle=_alertActionStyle - In the implementation block
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 alertActionStyle:(long long)arg3 ;
-(long long)alertActionStyle;
-(NSString *)title;
-(id)actionHandler;
@end

